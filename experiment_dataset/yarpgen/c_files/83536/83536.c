/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (min(((((var_9 + 2147483647) << ((821 >> (var_4 - 300979280)))))), (min(((var_0 ? var_7 : 1384439626)), (~-112)))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_11 = (arr_2 [i_0]);
                    var_12 = ((~(min(-11, ((var_3 ? var_9 : 26523))))));
                }
                var_13 -= (min((min(0, (var_2 & -670))), ((min(((var_1 ? (arr_4 [i_0] [16]) : 88)), ((227 >> (32767 - 32757))))))));
            }
        }
    }
    var_14 = var_0;
    var_15 = ((((min(((var_6 ? 45475 : var_6)), (max(var_4, var_2))))) ? var_1 : var_5));
    var_16 += var_0;
    var_17 = var_2;
    #pragma endscop
}
