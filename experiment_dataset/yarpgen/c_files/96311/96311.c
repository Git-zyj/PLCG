/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (((min(var_4, (arr_3 [i_0]))) << (var_4 == 18446744073709551615)));
        arr_5 [i_0] = (max(((var_0 & (arr_1 [i_0]))), (var_5 | 213)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 |= (((2097151 + 32767) << (((arr_12 [i_1 - 1] [i_2 + 1]) / (arr_6 [i_1 - 3] [i_1 - 2])))));
                        arr_15 [i_2] [i_1 - 1] = (max(238, 16390));
                    }
                }
            }
        }
        arr_16 [i_0] &= min((var_11 + 9429569008306592437), (((((arr_11 [i_0] [i_0] [i_0]) / (arr_9 [i_0]))))));
    }
    var_18 = (max(var_4, -1013941619));
    #pragma endscop
}
