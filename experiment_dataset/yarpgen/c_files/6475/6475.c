/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (((var_3 != ((var_14 >> (((((((arr_0 [i_0]) + 9223372036854775807)) << (((-111 + 144) - 31)))) - 7391990853224383208)))))))));
        arr_3 [i_0] [i_0] = ((arr_2 [i_0] [i_0]) | 255);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 -= (((((110 ? var_8 : var_15))) || (((-111 ? var_6 : (arr_5 [0]))))));
        arr_7 [i_1] = (!23);
        arr_8 [i_1] = ((((~var_3) << (((((~32) + 42)) - 8)))) >= ((((var_3 > var_1) > (!5898685103892128465)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_21 = var_16;
        arr_13 [i_2] [i_2 - 1] = var_2;

        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            arr_16 [i_2 + 1] [i_3 + 3] = (!-35);
            var_22 ^= (((((524288 ? -123 : 3928333911693051909))) == 12900328879906317878));
            arr_17 [i_2] [i_3] [i_2] = 23;
        }
        var_23 -= var_6;
    }
    #pragma endscop
}
