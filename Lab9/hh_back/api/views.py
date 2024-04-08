from django.shortcuts import render

# Create your views here.
from django.http import JsonResponse
from .models import Company, Vacancy

# List of all Companies
def company_list(request):
    companies = Company.objects.all()
    data = [{'id': company.id, 'name': company.name, 'description': company.description, 'city': company.city, 'address': company.address} for company in companies]
    return JsonResponse(data, safe=False)

# Get one Company
def company_detail(request, id):
    company = Company.objects.get(id=id)
    data = {'id': company.id, 'name': company.name, 'description': company.description, 'city': company.city, 'address': company.address}
    return JsonResponse(data)

# List of Vacancies by Company
def company_vacancies(request, id):
    vacancies = Vacancy.objects.filter(company_id=id)
    data = [{'id': vacancy.id, 'name': vacancy.name, 'description': vacancy.description, 'salary': vacancy.salary} for vacancy in vacancies]
    return JsonResponse(data, safe=False)

# List of all Vacancies
def vacancy_list(request):
    vacancies = Vacancy.objects.all()
    data = [{'id': vacancy.id, 'name': vacancy.name, 'description': vacancy.description, 'salary': vacancy.salary} for vacancy in vacancies]
    return JsonResponse(data, safe=False)

# Get one Vacancy
def vacancy_detail(request, id):
    vacancy = Vacancy.objects.get(id=id)
    data = {'id': vacancy.id, 'name': vacancy.name, 'description': vacancy.description, 'salary': vacancy.salary}
    return JsonResponse(data)

# List of top 10 vacancies sorted by decreasing salary
def top_ten_vacancies(request):
    top_vacancies = Vacancy.objects.order_by('-salary')[:10]
    data = [{'id': vacancy.id, 'name': vacancy.name, 'description': vacancy.description, 'salary': vacancy.salary} for vacancy in top_vacancies]
    return JsonResponse(data, safe=False)
