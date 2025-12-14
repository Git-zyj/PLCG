/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((((2147483647 ? var_9 : var_3))) == ((0 ? var_14 : var_0))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = (arr_5 [i_0] [9] [i_0]);
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((-(((max(var_1, -16300)) * var_14))));
                }
            }
        }
        var_17 ^= (((arr_3 [i_0]) ? (min(((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), ((var_8 ? -115 : (arr_0 [3] [9]))))) : 177));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] = ((-1901603592 && 16305) ? ((5259123996310304545 ? (arr_4 [i_3] [i_3] [i_3] [i_3]) : (arr_4 [i_3] [i_3] [i_3] [i_3]))) : ((min((arr_0 [i_3] [i_3]), (arr_4 [i_3] [i_3] [i_3] [i_3])))));
        var_18 = (max(var_18, (((var_8 ? (min(((16299 ? (arr_3 [i_3]) : 5259123996310304553)), (!8176))) : ((var_4 ? (max(701210542, (arr_2 [12] [i_3]))) : (((arr_8 [i_3]) ? 3593756742 : var_2)))))))));
        arr_11 [i_3] = (arr_9 [i_3]);
    }
    #pragma endscop
}
