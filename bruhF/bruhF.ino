#include <Gamebuino-Meta.h>

void setup()
{
  gb.begin();
}
void loop(/* arguments */)
{
  while (!gb.update())
    ;
}