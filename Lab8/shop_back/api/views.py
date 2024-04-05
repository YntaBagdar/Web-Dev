from django.shortcuts import render
from django.http import JsonResponse
from .models import Product, Category

def list_all_products(request):
    products = Product.objects.all()
    data = [{'id': product.id, 'name': product.name, 'price': product.price, 'description': product.description, 'count': product.count, 'is_active': product.is_active} for product in products]
    return JsonResponse(data, safe=False)

def get_product(request, id):
    try:
        product = Product.objects.get(pk=id)
        data = {'id': product.id, 'name': product.name, 'price': product.price, 'description': product.description, 'count': product.count, 'is_active': product.is_active}
        return JsonResponse(data)
    except Product.DoesNotExist:
        return JsonResponse({'error': 'Product not found'}, status=404)

def list_all_categories(request):
    categories = Category.objects.all()
    data = [{'id': category.id, 'name': category.name} for category in categories]
    return JsonResponse(data, safe=False)

def get_category(request, id):
    try:
        category = Category.objects.get(pk=id)
        data = {'id': category.id, 'name': category.name}
        return JsonResponse(data)
    except Category.DoesNotExist:
        return JsonResponse({'error': 'Category not found'}, status=404)

def list_products_by_category(request, id):
    try:
        category = Category.objects.get(pk=id)
        products = category.product_set.all()
        data = [{'id': product.id, 'name': product.name, 'price': product.price, 'description': product.description, 'count': product.count, 'is_active': product.is_active} for product in products]
        return JsonResponse(data, safe=False)
    except Category.DoesNotExist:
        return JsonResponse({'error': 'Category not found'}, status=404)

