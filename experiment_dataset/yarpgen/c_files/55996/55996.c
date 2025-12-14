/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, (((!((max(var_2, var_10))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [i_0] [i_0]) ? ((((arr_0 [i_0] [i_0]) != (arr_1 [i_0])))) : (arr_1 [i_0]))))));
        var_20 = (max(var_20, ((max(50689, -641490859)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, ((min((arr_9 [i_0] [i_1] [i_0]), (arr_8 [i_1] [i_3 + 2] [i_1] [i_1]))))));
                        var_22 = (((1 / -3420) | -74));
                        var_23 = (arr_8 [i_0] [i_0] [i_3 + 2] [i_3 + 2]);
                    }
                }
            }
        }
        var_24 = (min(((min((max((arr_1 [i_0]), (arr_2 [i_0]))), (arr_0 [i_0] [i_0])))), (((((min(var_15, var_3)) + 9223372036854775807)) >> (((min(62115, (arr_2 [i_0]))) - 62114))))));
        var_25 |= var_16;
    }
    #pragma endscop
}
