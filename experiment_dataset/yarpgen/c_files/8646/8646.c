/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-(((!12475) ? 20049 : 41997))));
                var_12 = (max(var_12, (((~(arr_5 [i_0] [i_1]))))));
                arr_8 [i_0] [i_0] [i_0] = ((((!((((arr_3 [i_1]) ? var_0 : (arr_6 [i_1])))))) ? ((1299270853 ? 57984 : 57972)) : -var_1));
                var_13 = 11651134688749715110;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 ^= 36933;
                            var_15 = (arr_0 [i_0]);
                            var_16 *= (((arr_5 [i_0] [i_0]) ? ((((((arr_10 [i_3 - 1]) ? var_4 : (arr_12 [15] [i_1] [i_2] [i_1])))) | var_3)) : (~1)));
                            var_17 ^= (arr_2 [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_18 ^= (-((((var_1 ? var_1 : 2887936311)) | var_5)));
    var_19 = (((min(((max(1299270853, var_11))), -var_8))) ? var_10 : -31);
    var_20 = ((42272 ? var_1 : ((((var_4 ? var_10 : var_3)) | (((var_0 ? var_11 : var_10)))))));
    #pragma endscop
}
