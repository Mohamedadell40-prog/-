#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"

int main(void)
{
	u8 Local_u8ButtonState = 1;

	DIO_voidSetPinDirection(DPORTA, PIN0, INPUT);
	DIO_voidSetPinValue(DPORTA, PIN0, HIGH);

	DIO_voidSetPinDirection(DPORTA, PIN1, OUTPUT);

	while (1)
	{
		Local_u8ButtonState = DIO_u8ReadPinValue(DPORTA, PIN0);

		if (Local_u8ButtonState == LOW)
		{
			DIO_voidSetPinValue(DPORTA, PIN1, HIGH);
		}
		else
		{
			DIO_voidSetPinValue(DPORTA, PIN1, LOW);
		}
	}
}