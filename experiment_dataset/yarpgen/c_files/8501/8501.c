/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((1 >> (((((-2147483647 - 1) - -2147483626)) + 24)))) - var_10)) + 2147483647)) << (var_4 - 961120078)));
    var_20 = ((((((1172746066 ? var_17 : var_2)) == (var_17 == var_7)))) & ((((1 << (((var_6 + 137) - 5)))) * ((var_12 ? 0 : -14570)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 &= (arr_0 [i_1]);
                    arr_6 [i_2] [11] [i_2 - 1] [i_2 - 1] = (((((((-1832850432 ? 1 : 0))) ? (arr_3 [i_2 + 1]) : (!var_5))) != (((22156 && 1) >> ((min(1, var_14)))))));
                    arr_7 [i_2] [i_1] [i_1] = (max((arr_3 [i_0]), (var_4 || var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((+((0 ? (-32767 - 1) : 127)))))));
                                var_23 = -594637175;
                                arr_14 [i_0] [1] [i_0 - 1] [i_2] [i_0 + 1] = -222;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
