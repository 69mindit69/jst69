views.py
from django.shortcuts import render
# Create your views here.
def home(request):
return render(request,'home.html')
def contactus(request):
return render(request,'contactus.html')
def aboutus(request):
return render(request,'about.html')