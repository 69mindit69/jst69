urls.py
from django.contrib import admin
from django.urls import path
from FruitsApp.views import fruit_student
urlpatterns = [
path('admin/', admin.site.urls),
path('fruits/',fruit_student),
]