/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_6 & 165) - -var_5)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((!(arr_0 [i_0])));
        arr_5 [i_0] = (max((((arr_3 [i_0] [i_0]) ? var_7 : 33554431)), (((((((arr_2 [i_0] [i_0]) ? var_12 : var_6))) || (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (max(((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))), var_12));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 = (((min(((var_1 ? var_3 : 4170952834)), 121))) ? (((-(arr_9 [i_1] [i_2] [i_3])))) : (var_12 % var_11));
                    arr_14 [i_1] = (arr_8 [i_3]);
                    var_18 += (((((arr_9 [4] [i_2] [i_3]) ^ (arr_12 [i_1] [i_2] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
