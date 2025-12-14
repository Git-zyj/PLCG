/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_4 ? 37 : var_4)) != var_2)))));
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_3 [i_0] [i_0]);
                var_22 ^= (1 || ((((8372224 - 65514) ? (~var_17) : var_19))));
                var_23 = (max(var_23, (((((min((arr_1 [i_0]), (arr_0 [i_0])))) ? (~0) : (((((4294967293 % (arr_3 [i_0] [i_1])))))))))));
                var_24 ^= ((((((1621575159 & var_7) ? var_17 : (arr_1 [i_0])))) ? (arr_4 [i_1] [i_0]) : ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))))));
                var_25 = (max(var_25, (((-2111779657 - (arr_0 [i_0]))))));
            }
        }
    }
    var_26 = var_0;
    #pragma endscop
}
