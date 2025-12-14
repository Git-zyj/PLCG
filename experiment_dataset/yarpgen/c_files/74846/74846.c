/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (arr_1 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = 32767;
                        var_21 += ((250 ? (-2147483647 - 1) : -9223372036854775802));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_22 = (max(var_22, (((~(arr_0 [i_1]))))));
                        var_23 &= (9223372036854775796 / 3631);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_24 = (((!0) ? var_5 : (((arr_5 [i_1 - 1]) ? (((((arr_9 [i_5] [i_1 + 2] [i_2] [i_5] [i_5]) < (arr_7 [i_0] [i_1]))))) : (arr_9 [i_5] [i_2] [i_2] [i_0] [i_0])))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] = (arr_11 [6]);
                    }
                }
            }
        }
    }
    var_25 = var_5;
    var_26 = (max(var_26, ((!(19 && 67)))));
    var_27 = ((((var_3 ? var_9 : (min(var_18, -2931753071736054608)))) - (!208)));
    #pragma endscop
}
