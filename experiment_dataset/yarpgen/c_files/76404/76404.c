/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9650082354138441432;

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 255;
        var_12 = (max(var_12, 9728));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        var_13 = (min(var_13, ((max((((~(arr_4 [i_1 - 2])))), (((min(var_6, (-2147483647 - 1))) + ((max(251, (arr_5 [i_1 + 3])))))))))));
        var_14 ^= (((((!(arr_5 [i_1])))) > var_4));
    }
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 = (max((arr_5 [i_2]), (((9709 || (((var_5 ? var_3 : var_0))))))));
                                arr_20 [i_4] [i_3] [12] = (((((!(arr_17 [i_4] [i_5] [i_4 + 1] [i_4 - 3] [i_4])))) < (((((arr_14 [i_4] [i_6]) > (arr_11 [i_5] [i_5])))))));
                                var_17 ^= (max(((var_9 + (arr_17 [i_4 - 1] [i_4] [i_4] [1] [i_3]))), (arr_17 [i_4 + 1] [i_4] [8] [i_4] [i_2])));
                                var_18 = (min(var_18, ((min((max((arr_18 [i_5] [i_5] [i_4 - 1] [13] [i_2] [i_2]), var_3)), (((1 >> (var_5 - 18448)))))))));
                                var_19 = (arr_9 [1] [i_3]);
                            }
                        }
                    }
                    var_20 = 9338;
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_21 ^= var_9;
                            var_22 = ((~((((arr_25 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 4] [i_3]) || (arr_25 [i_8 - 4] [i_8 - 4] [i_8] [i_8 + 1] [i_8]))))));
                            var_23 = (min(var_23, (((((((((arr_1 [i_3] [i_2]) - 5)) * (((max(1, 105))))))) ? (max((((9344 ? 1859681845 : 599636442))), ((var_9 ? 1859681845 : var_10)))) : var_3)))));
                        }
                    }
                }
                arr_27 [12] [i_3] [15] = (max((arr_18 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3]), ((max((arr_7 [i_2]), (arr_9 [i_2] [i_3]))))));
                var_24 *= (~-24125);
                arr_28 [i_3] = max(var_6, (((~(max((arr_22 [1] [i_2]), var_5))))));
            }
        }
    }
    #pragma endscop
}
