/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1570979108;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = var_1;
                var_13 = ((((arr_3 [i_1] [i_0]) ? var_8 : (arr_3 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, -1570979107));
                            var_15 = var_1;
                            arr_14 [i_0] [i_1] [i_2] [i_3] = (((max((arr_12 [i_1] [i_2] [i_1] [i_1]), (min(var_6, -4689)))) == ((((((arr_1 [9] [i_1]) ? -1570979127 : (arr_5 [i_2])))) ? ((max(1570979116, -1570979106))) : (arr_2 [i_3 - 1] [i_3 - 1])))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] = (--122);

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_16 = 3570898838;
                                arr_18 [i_0] [i_0] [17] [i_1] [i_4] = (min((arr_8 [i_0] [i_3 + 1] [i_3 + 1] [i_3]), (max((var_5 > -4700), ((4699 ? -4699 : var_0))))));
                                var_17 = (max(var_17, ((((((var_6 ? (~var_1) : ((var_9 ? -1934168566507166461 : var_2))))) ? ((((-4682 < (724068457 > 65535))))) : (((5297686684071463528 ^ var_9) ? ((((arr_12 [i_4] [i_1] [i_2] [i_4]) | 724068439))) : (arr_11 [i_3 + 1] [i_4] [i_3 - 1] [0] [i_3 + 1] [i_3]))))))));
                            }
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_1] = ((!(-1570979134 < -1570979133)));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((((42644 ^ 1570979099) / 85))) ^ (((arr_6 [i_3] [i_3 - 1] [12]) ? var_4 : (arr_17 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))));
                                arr_24 [i_0] [i_1] [10] [i_3] [i_5] &= (arr_1 [i_0] [i_0]);
                                var_18 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = min(var_8, -1570979099);
    #pragma endscop
}
