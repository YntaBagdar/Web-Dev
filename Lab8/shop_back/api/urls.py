from django.urls import path
from . import views

urlpatterns = [
    path('products/', views.list_all_products, name='list_all_products'),
    path('products/<int:id>/', views.get_product, name='get_product'),
    path('categories/', views.list_all_categories, name='list_all_categories'),
    path('categories/<int:id>/', views.get_category, name='get_category'),
    path('categories/<int:id>/products/', views.list_products_by_category, name='list_products_by_category'),
]