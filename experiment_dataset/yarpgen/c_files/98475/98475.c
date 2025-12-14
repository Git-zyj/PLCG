/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [7] = ((-(((arr_4 [i_0]) ? var_3 : (arr_1 [i_2])))));
                                arr_15 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = ((var_7 ? (arr_12 [i_1]) : var_4));
                                var_11 = ((((arr_3 [i_2]) ? var_7 : var_0)));
                                arr_16 [i_0] [i_1] [i_0] [i_3] = (max(((!((!(arr_2 [13] [11]))))), (((arr_3 [i_1]) <= 18446744073709551600))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-(((((-(arr_11 [i_5] [i_5])))) ? (min(5228565152832301797, var_7)) : (((6773704794723507534 ? -5191612743385308451 : 6031221556354866307))))))))));
                            arr_23 [i_0] [i_5] [i_5] [i_6] [i_6] = var_9;
                            var_13 += (var_4 ^ 2147483647);
                        }
                    }
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
