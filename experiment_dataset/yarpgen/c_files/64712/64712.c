/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_17, (~var_9)))) ? (((!(var_14 > 99)))) : 42178);
    var_19 = (min(((min(var_12, 188))), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (+((min((arr_7 [i_2] [i_2] [i_1 + 3] [i_2 + 3]), (arr_7 [i_0] [i_1] [i_1 + 3] [i_2 + 3])))));
                    var_21 = -49;
                    var_22 = ((((max(1214541756, ((var_10 ? var_13 : 10583351612433875506))))) ? (arr_4 [i_0]) : (((47928 << (-1214541761 + 1214541761))))));
                }
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
