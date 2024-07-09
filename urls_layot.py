urls.py
from django.contrib import admin
from django.urls import path
from layoutApp.views import aboutus, contactus, home
urlpatterns = [
path('admin/', admin.site.urls),
path('',home),
path('contactus/',contactus),
path('aboutus/',aboutus),
path('home/',home)