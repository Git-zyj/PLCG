/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((var_6 < ((19 ? var_11 : var_4))))) == ((max(var_2, (var_0 == var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= 4294967294;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 -= -var_6;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_15 = ((!(((~((((arr_10 [i_1] [i_3]) >= (arr_9 [i_1])))))))));
                            var_16 = (min(var_16, ((((((((arr_3 [i_0] [i_3]) ? (arr_4 [i_2 + 1]) : (arr_3 [i_2] [i_3]))) < 19)) ? var_4 : (((((arr_10 [12] [i_2 + 1]) <= (arr_10 [1] [i_2 - 1]))))))))));
                            arr_15 [i_1] [i_1] = ((~((0 ? 4294967288 : ((var_4 ? var_7 : var_8))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5] = (((arr_9 [i_5]) | (894220984 == var_5)));
        var_17 = (arr_7 [i_5] [i_5 + 1] [i_5 - 1] [i_5]);
    }
    #pragma endscop
}
