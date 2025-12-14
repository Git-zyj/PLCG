/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_9 ? ((max(((var_11 ? 1 : var_8)), var_5))) : (var_11 + var_0)));
    var_21 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = max((arr_2 [i_1]), (arr_2 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [2] [i_2] [7] = (((max(var_9, (arr_2 [i_0])))));
                            var_23 = 1071645100311527227;
                            var_24 = ((!114) == (((((var_9 ? -76 : var_6))) ? (var_10 || 1071645100311527227) : var_13)));
                            arr_10 [i_0] [i_1] [i_0] [i_1] = ((((min((arr_1 [i_0]), var_19))) ? ((7125 ? (arr_1 [i_0]) : (arr_1 [i_2]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_13))));
                        }
                    }
                }
                var_25 = (((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]) ? ((max(1, 1636071628255794466))) : var_3));
            }
        }
    }
    #pragma endscop
}
