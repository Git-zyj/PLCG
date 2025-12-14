/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 *= (-105 * -126);
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = (var_8 / var_0);
                                arr_13 [i_0] [i_3 - 3] [i_2] [i_1] [i_0] = (-4133344293416315474 >= -51);
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (min(302870659, -4133344293416315458));
            }
        }
    }
    var_14 = (min(((((((1 ? 0 : 3002597727))) && (var_12 & var_7)))), ((var_0 ? (0 * 4133344293416315452) : ((max(2790907920, 1346530034)))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    arr_21 [i_7] [i_7] [i_7] = 0;
                    arr_22 [i_5] [i_5] [i_7 + 1] [i_7] = (min(((5241466002763945962 ? -72 : 2790907928)), ((((arr_15 [i_7 - 1]) || (arr_15 [i_7 + 1]))))));
                    arr_23 [i_5] [i_6] [i_7] [i_5] = (~var_12);
                    var_15 = (min(var_15, ((min(119, 4105944472249752091)))));
                }
            }
        }
    }
    var_16 = ((var_10 ? var_4 : -0));
    var_17 = ((14896588279089233996 << (6678859737334399997 + 14)));
    #pragma endscop
}
