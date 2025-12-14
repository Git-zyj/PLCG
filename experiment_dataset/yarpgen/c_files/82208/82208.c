/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((2096951493424674998 - (((min(var_4, (arr_2 [i_0] [i_1 - 1] [i_0])))))));
                var_20 = (arr_1 [i_0]);
                var_21 = (arr_1 [i_1 + 1]);
            }
        }
    }
    var_22 = (min(var_22, var_3));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_5] [i_6] [i_6] = (((arr_11 [i_2] [i_3] [i_4]) ? (((0 / ((16349792580284876628 ? 2250559649 : -241305432))))) : ((~(arr_11 [i_6] [i_5] [i_2])))));
                                var_23 = (min(var_23, (((!(((((min(-241305442, var_11))) ? -var_7 : (-32767 - 1)))))))));
                                var_24 = ((+(((arr_11 [i_3] [i_4] [i_5]) ? (max(var_13, 2096951493424674974)) : ((((arr_11 [1] [1] [i_4 - 1]) ? -20722 : (arr_13 [i_2] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_25 = ((((max(var_2, var_15)) + (arr_20 [i_2] [i_4 - 2] [i_4 - 2] [i_7 - 3]))) - (((0 ? -4294967295 : (arr_14 [i_2] [i_3] [i_4 - 1])))));
                                var_26 = (min(var_26, (((var_2 ? ((1 ? var_12 : -2865660371941904392)) : ((((var_18 || (!var_11))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_15;
    #pragma endscop
}
