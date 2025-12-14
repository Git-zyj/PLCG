/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = 18446744073709551615;
                    arr_7 [i_1] [i_1] [i_2] = (((~14) && 1));
                    var_16 = ((((max(var_14, var_0))) | (((-(!18446744073709551605))))));
                    var_17 = ((-(((max(18446744073709551610, (arr_1 [i_0])))))));
                    arr_8 [i_1] [i_1] [0] [i_1] = (((((((max(var_1, var_14)))) * 2))) ? (min((arr_4 [i_0] [i_0] [i_0 - 1] [i_1]), -var_0)) : var_7);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, var_10));
                    var_19 = (max(var_19, (max(302173224, (max(((min(var_4, (arr_13 [i_5])))), (max(var_9, (-9223372036854775807 - 1)))))))));
                    var_20 = (max(10, 472048679));
                }
            }
        }
    }
    #pragma endscop
}
