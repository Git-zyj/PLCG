/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? ((((0 << (var_8 - 221))))) : ((var_1 ? var_7 : ((232 ? var_5 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_2] [7] = ((min(32767, 0)));
                        arr_12 [i_1] [i_2] [i_1] = (min((((((var_11 ? (arr_3 [i_3]) : (arr_4 [i_0] [i_2] [i_3])))) ? (arr_5 [i_0] [i_1] [i_1]) : (-2147483647 - 1))), (arr_7 [i_0] [i_1] [i_2] [1])));
                        arr_13 [i_1] [9] [i_2] [i_1] = (((~var_2) ? ((var_5 ? (var_5 / var_7) : (arr_8 [i_1]))) : ((((min((arr_8 [i_1]), var_8))) ? -126 : ((min(115, (arr_2 [i_1]))))))));
                    }
                    arr_14 [i_0] [i_1] [1] [i_2] = ((((((((126 ? 0 : var_13))) ? (-2147483647 - 1) : 48))) ? 0 : var_13));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_0] = min((((arr_8 [i_5]) ? (arr_8 [i_0]) : (arr_8 [i_4]))), var_12);
                                arr_21 [i_0] [i_5] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
