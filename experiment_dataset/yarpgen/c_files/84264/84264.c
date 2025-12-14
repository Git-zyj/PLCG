/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((~((1 ? (arr_1 [i_0]) : var_15))));
                var_18 = (max(var_18, (~var_10)));
                var_19 = ((((-(arr_2 [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = var_0;
            }
        }
    }
    var_20 = 287063589;
    var_21 |= ((var_2 ? (max(var_12, 3005)) : (((var_7 ? -417323932 : ((var_3 ? 1863 : var_1)))))));
    #pragma endscop
}
