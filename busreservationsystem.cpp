void a::add_new_number_of_bus()
{
cout&lt;&lt;"Enter Bus Number: ";
cin&gt;&gt;bus[t].bus_number;
cout&lt;&lt;"\nEnter Driver's Name: ";
cin&gt;&gt;bus[t].bus_driver;
cout&lt;&lt;"\nArrival Time: ";
cin&gt;&gt;bus[t].bus_arrival;
cout&lt;&lt;"\nDeparture: ";
cin&gt;&gt;bus[t].bus_depart;
cout&lt;&lt;"\nFrom: \t\t\t";
cin&gt;&gt;bus[t].b_from;
cout&lt;&lt;"\nTo: \t\t\t";
cin&gt;&gt;bus[t].b_to;
bus[t].empty();
cout&lt;&lt;"\New Bus Added Successfully \t\t\t";
t++;
}
