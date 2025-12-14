/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max((((var_5 & var_8) << ((((199 ? 55 : 57)) - 46)))), (((((var_10 ? var_13 : var_5))) ? var_2 : var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 -= (max(((((min(var_7, var_13))) ? (min((arr_3 [2] [i_1]), var_12)) : (57 * var_6))), ((((var_11 % (arr_3 [4] [i_2]))) | (((192 ? 88 : (arr_3 [8] [8]))))))));
                    var_16 ^= ((((((arr_1 [6]) ? var_6 : (arr_1 [6])))) % (max(var_11, (arr_2 [8])))));
                    var_17 = ((1 ? 7 : 194));
                }
            }
        }
    }
    var_18 = ((var_2 | ((var_8 | ((18 ? var_13 : var_4))))));
    #pragma endscop
}
