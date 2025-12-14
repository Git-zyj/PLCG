/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [7] [7] [i_0] = (((-((((arr_12 [i_0 - 3] [i_1] [i_2] [i_3 - 1]) < var_10))))));
                                arr_14 [i_0] [i_0] [i_0 + 1] [6] [i_0] &= var_9;
                                var_12 = (min(var_12, ((min(((((arr_6 [i_0] [i_0] [i_0] [i_4]) / var_7))), (((((126 ? -31134 : 9290376824970426602)) <= var_6))))))));
                                var_13 = -2006664083;
                                var_14 &= ((~(((9156367248739124985 >= (arr_4 [i_0 + 2]))))));
                            }
                        }
                    }
                    var_15 = -var_3;
                    var_16 = (9290376824970426605 + var_5);
                }
            }
        }
    }
    var_17 |= (min((((9290376824970426602 > var_3) ? (~var_8) : (!9290376824970426602))), ((((var_2 == var_10) || -8347)))));
    var_18 = (max(var_18, 248));
    #pragma endscop
}
