/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((((-6270489374505624000 | var_10) | (((var_2 | (arr_3 [9] [i_1] [10]))))))) | (((((2147221504 - (arr_2 [i_1] [i_0])))) | (808220023114896125 & 201326592)))));
                var_15 = ((((((18446744073508225053 | (arr_1 [10]))) | (((var_13 | (arr_0 [8])))))) | (((18446744073508224999 | 54845) | (201326592 | var_9)))));
                var_16 *= ((((((((arr_0 [i_1]) | -1329247285))) | (15893193937092644529 | var_5))) | (-1385341009 | 18446744073508225027)));
            }
        }
    }
    var_17 *= (((((201326592 | var_2) | (554471426 * 18446744073508225023))) | ((((var_11 + var_1) * (var_5 - var_2))))));
    #pragma endscop
}
