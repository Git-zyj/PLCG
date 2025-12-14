/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((!(((~(~var_1))))));
                var_17 = ((-1381066897 * (((((var_10 ? var_9 : (arr_1 [i_0] [i_0]))) * var_9)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                {
                    arr_16 [i_4] = (((117 * 37779) * ((1 * (var_12 * 0)))));
                    arr_17 [i_3 - 1] = (!1);
                    arr_18 [i_2] [i_2] [i_2] [i_2] = (((!((!(arr_15 [i_2] [i_3] [i_4] [i_4 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((1 ? (var_9 * 1) : (!-15852))))));
                                arr_25 [i_2] [i_6] [i_2] [i_2 + 1] [i_2] [i_2] = (!-59);
                                var_19 = ((-314342308 ? ((((((arr_3 [i_6] [i_5]) + (arr_21 [i_2] [i_3] [i_4])))) - 18446744073709551615)) : ((((((-1388475278630676178 ? var_10 : var_5))) ? 4786846362245000972 : (((65512 * (arr_19 [i_2])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
