/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [1] [i_0] &= (((arr_1 [i_0 + 1]) ? ((-345356354 ? ((1 ? var_10 : -9197236281125060090)) : -var_3)) : (((-((var_5 ? 1103950485 : (arr_1 [i_0]))))))));
                var_12 ^= 0;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_13 = (max(var_13, (min(-2842, (arr_6 [i_2])))));
        arr_8 [i_2] = (min(((-((~(arr_7 [i_2]))))), (((!(arr_6 [i_2]))))));
    }
    #pragma endscop
}
