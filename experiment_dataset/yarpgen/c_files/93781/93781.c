/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 4294967295));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_1] [i_0] [i_1] [i_2] = ((~((min((arr_6 [i_1] [i_1 + 2] [i_2]), (arr_4 [i_1] [i_2]))))));
                    var_17 -= (min(((max((((arr_5 [i_2] [i_1] [i_0]) || 13870)), (var_6 || var_1)))), (min(((min(var_12, var_4))), (((arr_3 [i_0] [i_1] [i_2]) ? (arr_2 [i_2]) : var_0))))));
                    var_18 = var_12;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((!(((-((var_12 ? var_2 : (arr_2 [i_0])))))))))));
                    var_20 ^= (~21588);
                    var_21 = ((((+((((arr_9 [i_1]) < (arr_10 [i_3] [i_3] [i_1] [i_3])))))) + var_9));
                    arr_11 [i_1] [i_0] [i_1] [i_1] &= ((27 ? 16768709963438735956 : 0));
                    var_22 = (min((arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]), var_1));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_1] [i_1] = var_10;
                    arr_16 [i_0] [i_1] [i_1] [i_4] = (arr_4 [i_1] [i_4]);

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_1] [i_1] = (min(((((((-127 - 1) || 1)) ? (arr_5 [i_0] [i_1] [i_0]) : var_4))), ((((var_1 / (arr_8 [i_1] [i_4] [i_1] [i_1]))) / (((min((arr_1 [i_4] [i_0]), (arr_14 [i_1] [i_1])))))))));
                        var_23 += (max((arr_8 [i_0] [i_5] [i_5] [i_5]), (((-(arr_12 [i_0] [i_1]))))));
                    }
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_24 ^= ((+(((((arr_10 [i_1] [i_1 + 1] [i_0] [i_1]) + 2147483647)) << (((((arr_10 [i_1] [i_1 - 1] [i_0] [i_1]) + 760687233)) - 13))))));
                    var_25 = -var_0;
                    arr_25 [i_1] [i_1] [i_6] = min((min(var_2, (arr_22 [i_1 + 2] [i_1 - 1] [i_1 - 1]))), (arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 2]));
                    arr_26 [i_0] [i_0] [i_6] &= (max(var_1, (((!var_0) < (((arr_21 [i_0]) ? (arr_22 [i_6] [i_6] [i_6]) : (arr_3 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_26 = (((((~((var_12 ? var_12 : var_14))))) ? var_11 : (0 < -var_11)));
    #pragma endscop
}
