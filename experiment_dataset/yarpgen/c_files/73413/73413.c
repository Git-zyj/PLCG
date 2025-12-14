/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_9, (var_5 - 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 -= var_3;
                    var_19 = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (max(((9393202742998891856 ? (((arr_3 [i_2] [i_0]) + -495563706)) : (max((arr_9 [i_0]), var_11)))), ((min((arr_12 [i_0] [i_1] [i_1] [i_3]), var_5)))));
                                var_21 -= (((1 - (arr_11 [i_0] [10] [i_2] [i_3] [i_4 - 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_0] = min((((((254 ? (arr_14 [i_0] [i_1] [i_2] [i_2] [i_6]) : 4102354349037124381))) ? 6665707682027124133 : ((11781036391682427483 ? var_9 : 6665707682027124133)))), 1731729036);
                                arr_21 [i_0] [i_1] [i_0] [13] [i_6] = (i_0 % 2 == zero) ? (((((max(102, (arr_15 [i_0] [i_5 + 1] [i_5 - 1] [10])))) << ((((max((arr_10 [i_0] [i_5 - 2] [i_5 - 2] [i_5]), (arr_15 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) - 17292))))) : (((((max(102, (arr_15 [i_0] [i_5 + 1] [i_5 - 1] [10])))) << ((((((((max((arr_10 [i_0] [i_5 - 2] [i_5 - 2] [i_5]), (arr_15 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) - 17292)) + 4221)) - 20)))));
                                arr_22 [i_0] [i_1] [i_5 + 1] = (arr_18 [1] [1] [i_2] [i_5 - 2] [0]);
                                var_22 = ((-((((arr_17 [i_0] [i_1] [i_0]) != (arr_17 [i_0] [i_5 - 1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
