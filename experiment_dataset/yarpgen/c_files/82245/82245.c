/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min(var_0, (((((var_5 >> (var_11 + 4668341008700202857)))) ? (!var_10) : var_9)))))));
    var_13 -= ((((((min(var_11, var_10)) / 1152687192))) ? ((var_11 ? (((min(var_2, var_2)))) : ((var_8 ? 15198466564506929106 : var_5)))) : ((var_3 ? var_6 : 9792977288981007936))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_4] [i_0] = (((~(arr_9 [i_4] [i_2] [i_2] [i_4] [i_3] [i_1 - 2]))) * ((0 ? 9641421943256726027 : 0)));
                                var_14 = (max(1, 1));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
