# Program untuk menampilkan tahun dan bulan

# impor modul kalender
import calendar

yy = 2020  # tahun
mm = 19    # bulan

# Input tahun dan bulan dari user
# yy = int(input("Masukkan tahun: "))
# mm = int(input("Masukkan bulan: "))

# Tampilkan kalender
print(calendar.month(yy, mm))