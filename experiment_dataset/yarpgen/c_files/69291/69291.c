/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min((3 % 858435749650257568), 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] = ((((max((((1319967347 ? 1 : (arr_4 [i_0])))), (min((arr_0 [i_3 + 1] [i_1]), 0))))) ? var_14 : (((arr_5 [i_2]) ? var_2 : (arr_5 [i_2])))));
                            var_19 = ((((((2435920446086357096 >= (((117 ? 27932 : -1))))))) / ((var_5 ? (min((arr_6 [i_0] [i_1]), (arr_9 [i_0] [i_2]))) : var_8))));
                            arr_11 [i_2] [i_3] = ((-(((((573976863 ? (arr_6 [i_0] [i_2]) : (arr_6 [i_1] [i_1]))) != (arr_3 [i_2] [i_1]))))));
                            arr_12 [i_3] [i_1] [i_1] [i_0 - 1] |= (arr_9 [i_1] [i_1]);
                        }
                    }
                }
                var_20 = 1640682167;
                arr_13 [i_1] &= (min((((127 ^ -1640682168) ? var_15 : ((var_6 & (arr_6 [i_1] [i_0 + 1]))))), ((((((var_9 ? 5456930621831840681 : (arr_5 [i_1])))) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [i_0 - 1]) : (arr_5 [i_1]))))));
            }
        }
    }
    var_21 = var_17;
    var_22 = (((--25808519) - var_6));
    #pragma endscop
}
