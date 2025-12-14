/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_6));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((2089838195 ? 236 : 33554431));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_15 *= (((((var_1 * ((min((arr_2 [11] [i_3] [i_3]), (arr_3 [i_0] [5] [5]))))))) && var_3));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = var_2;
                        var_16 = (((arr_0 [i_2] [i_2]) ? ((((min(1, 46))) ? (((var_8 ? 39 : -32762))) : ((-81 ? 1622383355309396519 : 10200)))) : var_11));
                    }
                    var_17 ^= ((((19 ? 1622383355309396519 : 1)) ^ (32745 * 0)));
                }
            }
        }
    }
    #pragma endscop
}
