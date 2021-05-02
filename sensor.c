


void sensor_Init(void) {

	printf("SENSOR INIT...\n");


}


int sensor_get_temp_value(void)
{

	int temp_values[12] = { 12,23,43,111,22,39,12,43,24,54,2,27 };

	int temp = 0;
	static int i = 0;            


	temp = temp_values[i];
	i++;

	if (i == 12) {

		i = 0;
	}

	return temp;

}
