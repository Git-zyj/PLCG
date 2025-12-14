/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((~(~var_5)))), (((var_3 ? var_3 : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (~((((var_7 ? (arr_0 [i_0]) : 1)) & (~-11185))));
                            arr_11 [i_0] [i_1] [i_1 - 1] = ((((((max(1, (arr_7 [i_0 + 1] [i_1])))) ? ((var_3 ? var_10 : var_17)) : (((((arr_8 [i_0] [i_1 + 1]) > -2660250143971926329)))))) >> ((-1 ? (min(1, var_6)) : ((((arr_4 [i_0] [1] [i_0]) ? var_5 : var_1)))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = ((+((((!1) <= ((var_8 << (44 - 30))))))));
                                arr_19 [i_0] [i_0] [i_0] [i_5] [i_6] = (((!(((var_18 ? (arr_4 [i_0] [i_0] [i_5]) : var_11))))) ? ((9223372036854775807 << ((((3575540351 ? (arr_14 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6]) : 58)) - 1476309877)))) : (((max(var_2, (max(var_8, (arr_10 [i_5] [i_0] [i_5]))))))));
                                arr_20 [i_0] [i_0] [i_6] [i_0] [i_0] = (!(~var_15));
                                var_22 = 93;
                                var_23 = (max(var_23, -105));
                            }
                        }
                    }
                    arr_21 [i_4] [i_0] [i_0] [i_0] = (max((2147483647 ^ 4294967295), ((~(arr_16 [i_1 - 1] [i_0] [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
