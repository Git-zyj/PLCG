/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_3] = (min((((arr_2 [i_0]) % (arr_2 [i_0]))), (min((arr_2 [i_0]), (arr_2 [i_0])))));
                            var_10 = ((((((arr_2 [i_0]) > ((((!(arr_6 [i_0] [i_1] [i_3])))))))) * ((((max((arr_9 [i_3] [i_1] [i_1] [i_1] [i_0] [i_0]), (arr_7 [i_0] [i_1] [i_0]))) <= (((((arr_3 [i_0] [i_1]) || (arr_2 [i_0]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_11 = (max(((((arr_12 [i_0] [i_1] [i_0] [i_5]) && (arr_4 [i_0])))), (((arr_1 [i_4 + 2]) % (arr_6 [i_0 - 1] [i_0 - 1] [i_4 - 1])))));
                            arr_16 [i_0 + 2] [i_1] [i_0] [i_5] [i_5] [i_0 + 2] = (((max((arr_13 [i_0] [i_0] [i_0] [i_5]), (arr_5 [i_4 - 2] [i_0 + 1] [i_0 + 1]))) != (((arr_1 [i_0 + 1]) ? (arr_13 [i_4 + 2] [i_4 + 2] [i_0] [i_4]) : (arr_5 [i_4 - 1] [i_0 - 1] [i_0 + 1])))));
                            var_12 = (i_0 % 2 == zero) ? ((((arr_4 [i_0]) << (((arr_13 [i_1] [i_4] [i_0] [i_4]) + 5474392856736080556))))) : ((((arr_4 [i_0]) << (((((arr_13 [i_1] [i_4] [i_0] [i_4]) + 5474392856736080556)) + 3559085690457181440)))));
                            arr_17 [i_0] = (max((arr_5 [i_5] [i_0] [i_0]), (((!(arr_2 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_13, (((max(((max(var_4, var_6))), ((var_8 ? var_0 : var_3)))) ^ var_3))));
    var_14 = ((var_6 + (min((var_4 - var_9), ((var_4 ? var_4 : var_3))))));
    var_15 = ((!((((((var_6 ? var_8 : var_0))) ? (var_0 % var_2) : var_8)))));
    #pragma endscop
}
