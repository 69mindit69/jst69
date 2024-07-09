
views.py
from django.shortcuts import render
import datetime
from django.http import HttpResponse
# Create your views here.
def aheadtime(request):
dt=datetime.datetime.now()+datetime.timedelta(hours=4)
resp="<html><head><title>Current Time Ahead by 
4hrs</title></head><body><h1>Current date and Time ahead by 4 hrs is %s 
</h1></body></html>"%(dt)
return HttpResponse(resp)
