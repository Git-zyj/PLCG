/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_20 = ((((((((var_1 ? (arr_0 [i_0]) : var_11))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))) ? ((((min(var_4, var_3))) ? ((var_4 ? -10016 : (arr_1 [i_0]))) : (((arr_0 [i_0]) ? var_11 : 15278742163643816614)))) : ((max((~1), (((arr_0 [i_0]) - 247)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((!(arr_4 [i_1]))) ? (((var_7 - var_14) - (((1637739317 << (-114 + 122)))))) : var_18));
        var_21 = (arr_4 [i_1]);
        arr_7 [i_1] = (((max(((var_7 ? var_17 : 985070879)), (3309896417 - 4294967290))) << ((((-16 ? (~113) : 17426723750433475621)) - 18446744073709551484))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = -4702270695157054144;
        arr_11 [i_2] [i_2] = (arr_0 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_22 = (arr_9 [i_2]);
                        var_23 -= ((-2657227996 ? 7571 : var_1));
                    }
                }
            }
        }
    }
    var_24 = (((max(var_2, var_3))));
    #pragma endscop
}
