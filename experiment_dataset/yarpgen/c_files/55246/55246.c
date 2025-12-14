/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((8210 >= ((-(arr_0 [i_0] [i_0])))));
        var_13 = (max(var_13, (((4474 ? 3179715451606943165 : 9223372036854775808)))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_14 = var_0;
        var_15 = (max(var_15, (((21 ? ((268173312 ^ ((min(2147483647, (arr_2 [i_1])))))) : 159)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_4] = ((((-4294967295 >= (~0))) ? ((var_10 ? 240 : -29322)) : var_0));
                        arr_14 [i_4] [i_2] [13] [i_2] = (((arr_4 [i_1] [i_1]) ? (arr_9 [2]) : (arr_2 [i_3])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = 15240;
        arr_18 [i_5] = (arr_16 [i_5]);
    }
    var_16 = var_0;
    var_17 = (~var_9);
    var_18 = ((+(((11 | -13347) ? (((var_1 ? var_0 : var_5))) : var_8))));
    var_19 = var_11;
    #pragma endscop
}
