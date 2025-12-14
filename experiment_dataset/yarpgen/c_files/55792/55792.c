/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (((min(var_1, (arr_5 [i_1 + 2] [0] [2])))));
                    arr_9 [i_0] [i_0] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((63386 ? 1 : 0))));
                                var_20 = (min(var_20, (((((((arr_4 [i_0] [i_2] [i_4]) < (((arr_7 [2]) << (((arr_13 [1] [i_1] [0] [i_1]) - 3030082181))))))))))));
                                var_21 = ((~((((var_2 > var_6) == var_12)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 8040575317621479618;
    var_23 = (var_14 >= ((var_11 ? (max(var_7, var_9)) : (var_11 <= var_2))));
    #pragma endscop
}
