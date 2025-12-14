/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_2 [i_1 + 2] [i_3 + 1]), var_11))) ? (arr_12 [i_1 + 2] [i_3] [i_3 + 1]) : (((~(((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_4 : var_9)))))));
                            var_17 = ((max(var_11, (arr_12 [i_3 - 1] [i_3] [i_1 - 2]))) >= (((arr_12 [i_3 + 2] [i_3] [i_1 + 2]) ? (arr_12 [i_3 + 2] [i_2] [i_1 + 2]) : (arr_12 [i_3 + 1] [i_1 - 1] [i_1 - 1]))));
                            var_18 = (max((max((arr_12 [i_0] [i_1] [1]), (arr_12 [i_3] [i_2] [i_1]))), ((max(var_13, (((arr_4 [i_2]) ? (arr_6 [i_0] [i_1 - 1] [i_0] [i_1 - 1]) : 1379740652)))))));
                            arr_14 [i_0] [i_3 + 1] = var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] = ((((~(arr_3 [i_4 + 2] [i_1 + 2]))) ^ (((arr_3 [i_4 - 1] [i_1 + 1]) >> (((arr_3 [i_4 - 2] [i_1 + 2]) - 1094781533))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((51 >= (arr_15 [i_5]))) ? var_2 : (var_2 % var_4))));
                            var_19 = var_4;
                            arr_22 [i_0] [i_0] [i_4] [i_5] = (max((arr_16 [i_4 - 3] [i_4 - 2] [i_4 - 1] [i_4 - 1]), ((((arr_16 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 2]) < 2915226643)))));
                        }
                    }
                }
                var_20 = var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_27 [i_7] [i_7] [i_7] = var_6;
                var_21 = (((((2915226637 && 2915226643) || ((max((arr_23 [i_6]), var_6))))) ? var_8 : 0));
            }
        }
    }
    #pragma endscop
}
