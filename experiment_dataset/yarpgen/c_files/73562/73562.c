/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((3416878448 ? (878088852 || 32755) : ((max((min((arr_5 [i_0] [i_1] [i_2] [i_2]), (arr_4 [i_0] [2] [i_0] [i_0]))), (max((arr_2 [i_0] [i_1]), 16109))))))))));

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_15 += (min((arr_2 [i_3] [4]), (-26 % var_3)));
                        var_16 = (arr_5 [i_3] [i_3] [i_3] [i_3 - 2]);
                        var_17 = (~4294967281);
                        var_18 -= ((2147483628 >= ((-(((arr_0 [i_3]) + 254))))));
                    }
                }
            }
        }
    }
    var_19 += var_13;
    var_20 = var_13;
    #pragma endscop
}
