/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 638076359411201060;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((~(max((!1), var_0))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_17 &= var_7;
                    var_18 = ((-(arr_8 [i_0] [i_0])));
                    arr_10 [i_1] [i_1] [i_1] = (((max((arr_4 [i_1] [i_0] [i_1]), (arr_4 [i_1] [i_1] [5])))) ? 4095 : var_1);
                    arr_11 [i_0] [i_1] [i_2] = (max(899756792, ((((!17651793972902586478) > (!-1157542759))))));
                }

                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_1] [i_1] [i_1] = ((-((((arr_8 [i_0] [i_0]) > (arr_3 [i_1] [i_3]))))));
                    arr_15 [i_0] [i_3] [i_1] = (max(((((arr_3 [i_1] [i_1]) ? 65535 : 4))), (max((!15514942123661797857), ((37605 ? 8929011961300127875 : 3982236669))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = var_9;
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_1] = ((((((max((arr_1 [i_0]), 65535))) ? var_12 : (arr_13 [i_1] [i_1] [i_1]))) ^ (((((~(arr_13 [i_0] [i_0] [i_1])))) ? ((65535 ? 12 : -9)) : (((arr_0 [i_0] [i_1]) ? -2000159583 : (arr_1 [1])))))));
                    var_19 = ((~((~((var_10 ? 7 : var_6))))));
                    arr_22 [i_0] [i_1] [i_1] [i_0] = (((((var_7 & var_1) ? 65513 : var_6)) * (max(0, var_0))));
                }
                var_20 ^= ((-(((5 ? var_12 : (arr_19 [7] [i_0] [i_0]))))));
            }
        }
    }
    var_21 = ((+(((~52) ? var_10 : var_7))));
    var_22 = (((((var_5 << (var_2 - 597453516)))) ? (!var_13) : var_14));
    #pragma endscop
}
