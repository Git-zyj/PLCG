/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 ? var_7 : var_3));
    var_21 = var_13;
    var_22 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_23 = (min((min((arr_1 [i_0]), ((var_8 ? var_14 : var_11)))), (min((var_8 || var_16), ((var_15 ? (arr_1 [i_2]) : var_2))))));
                    var_24 = (max(var_24, ((((min((arr_3 [i_1]), (arr_3 [i_1]))) % ((var_13 % (arr_3 [i_1]))))))));
                }
            }
        }
    }
    var_25 = (min((((((5791056274394660327 ? -7443 : 7438))) ? (min(var_16, var_4)) : (((var_6 ? var_2 : var_3))))), var_12));
    #pragma endscop
}
