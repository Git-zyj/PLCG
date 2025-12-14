/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_17, (((min(84, ((-114 ? var_15 : var_3)))) + 255))));
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 = ((((!(arr_6 [i_0] [i_1] [i_1] [i_2]))) ? 5 : ((22 >> ((((244 ^ (arr_0 [18]))) + 682089275))))));
                    var_20 ^= (max((arr_3 [i_0]), (65273 | var_13)));
                }
                arr_10 [20] [i_0] [i_0] = var_15;
            }
        }
    }
    var_21 = ((2048 ? 259 : ((var_0 ? var_6 : var_8))));
    #pragma endscop
}
