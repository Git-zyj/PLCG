/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 ^= ((861022020 << (((((min(var_8, var_13)))) - 163))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 ^= ((-((1 ? 26 : 20))));
        arr_3 [i_0] = 1;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((var_13 ? var_8 : 7661456811835788864));
            arr_7 [i_0] [i_0] [3] = 1;
            arr_8 [i_0] = (!1);
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = 0;
        arr_13 [i_2] = ((((((!(arr_2 [i_2] [i_2]))))) >= (((!252) ? 1 : (arr_5 [i_2] [i_2] [i_2])))));
        arr_14 [i_2] = ((((max(4, -536896409))) <= (((arr_5 [i_2] [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_1 [i_2])))));
        arr_15 [i_2] = -14;
        arr_16 [i_2] = var_7;
    }
    var_19 = var_6;
    #pragma endscop
}
