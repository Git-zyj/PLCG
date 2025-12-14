/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (((!((((arr_1 [i_0]) ? 1 : (arr_0 [i_0])))))));
        var_19 = ((((((arr_0 [i_0]) & 15))) ^ (max((arr_0 [i_0]), 1527183232))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = ((((arr_1 [i_1]) <= (arr_0 [12]))) ? (((~(arr_1 [i_1])))) : (arr_3 [i_1]));
        var_21 = ((-1024 ? 1527183232 : 2767784064));
        var_22 = (max(var_22, 1527183218));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_6 [i_2] = (((arr_5 [i_2]) == (((!(21 >= -21))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_4] [i_2] = (((arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1]) + ((((arr_5 [i_4]) || ((min(3171766426580193752, 4177920))))))));
                        var_23 = (!-125);
                    }
                }
            }
        }
    }
    var_24 = (max(((((var_7 ? var_16 : -30)))), (((~26) ^ var_8))));
    var_25 ^= var_5;
    #pragma endscop
}
