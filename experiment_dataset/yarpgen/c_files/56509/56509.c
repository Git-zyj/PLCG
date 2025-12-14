/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((-10 ? (arr_1 [12] [i_0 - 2]) : (arr_1 [i_0] [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = ((((min((arr_7 [i_2 + 2] [i_1]), (arr_3 [i_0 - 2])))) ? (min((1 ^ 83), ((-2 ? var_12 : 1)))) : ((((((arr_0 [i_1] [16]) ? 11875402048392489816 : var_1))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_7 [i_0] [i_1]))) : ((var_10 ? 69 : -10))))));
                            var_21 = ((((((((-2905553443152601374 ? -5743554449865998945 : (arr_12 [i_0] [i_1] [i_2] [9] [i_3])))) ? (max(var_8, (arr_12 [i_1] [i_2 - 1] [i_1] [i_0] [i_0]))) : (((min(var_18, (arr_1 [i_3 + 2] [2])))))))) ? (arr_3 [i_0 + 3]) : ((((((-(arr_5 [i_0])))) ? ((((arr_10 [4]) != (arr_7 [1] [16])))) : ((9 & (arr_1 [i_3] [i_3]))))))));
                            var_22 -= ((((((arr_4 [i_0]) ? ((242 ? 0 : (arr_12 [i_0] [i_0] [i_0] [5] [i_2]))) : -9))) ? (min(11875402048392489821, ((-4223961461433152225 ? -25154 : 15118535649336223416)))) : ((max(var_1, ((var_16 & (arr_1 [i_1] [7]))))))));
                            var_23 = (max(0, 6486037306576741548));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = (max((arr_19 [i_1] [i_1] [i_6]), ((((arr_18 [i_6 - 2] [i_6 - 2] [i_6] [12] [i_6]) != ((((46 < (arr_17 [i_1] [i_1] [19]))))))))));
                                var_25 = (-(max((((arr_14 [i_0] [i_1] [i_4] [i_1]) ? (arr_8 [i_0] [i_1] [i_5] [i_6 + 3]) : (arr_5 [i_0]))), (arr_6 [i_0 + 3] [i_4 - 3]))));
                                var_26 = (((((~(arr_13 [i_0 - 1])))) ? (min((arr_11 [i_0 - 1] [i_5 + 1] [i_6 + 1]), (max(15540911210444269294, var_16)))) : var_13));
                                var_27 |= 9223372036854775807;
                                var_28 = (max((arr_18 [i_1] [i_1] [i_1] [3] [i_1]), 47));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((((-24 + 2147483647) << (((-48399 + 48405) - 6)))));
    #pragma endscop
}
