cmake_minimum_required(VERSION 3.8)
project(PO_GDeLosRios_A04Corregida)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Customer.cpp Customer.h Invoice.cpp Invoice.h InvoiceItem.cpp InvoiceItem.h)
add_executable(PO_GDeLosRios_A04Corregida ${SOURCE_FILES})