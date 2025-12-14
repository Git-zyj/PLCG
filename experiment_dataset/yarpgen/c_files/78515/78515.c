/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((min((((arr_1 [5] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : var_1)), ((min((arr_5 [i_0] [i_1] [i_1]), var_2))))) >= 260);
                var_17 = (((var_5 ? var_0 : var_11)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (14869 ^ 232);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_2] [i_1 - 2] [i_2] [i_2] = (((min(var_6, (((arr_9 [i_0] [i_0] [i_2] [i_0] [i_0]) ? (arr_8 [i_2] [i_3]) : (arr_9 [i_0] [4] [i_2] [i_3] [6])))))) ? (((((var_5 ? var_9 : var_14)) + (arr_1 [i_0] [i_0])))) : (max(2719116257681505438, 227)));
                                arr_14 [i_0] [i_0] [8] [i_3] [i_3] [i_2] = (arr_5 [i_0] [i_1 + 2] [i_2]);
                                arr_15 [i_2] = (min(6509, -7186));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_2] [i_2] = (i_2 % 2 == 0) ? ((((!59026) ^ ((256 / (min((arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0]), (arr_4 [i_5] [i_5])))))))) : ((((!59026) ^ ((256 * (min((arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0]), (arr_4 [i_5] [i_5]))))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (((((~((59026 ? 55282 : 203))))) ? -4520 : (-64 || var_12)));
                            }
                            arr_21 [4] [i_2] [i_0] [i_2] [i_0] [i_2] = ((239 | ((234 ? ((59026 ? 1 : 229)) : 255))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
