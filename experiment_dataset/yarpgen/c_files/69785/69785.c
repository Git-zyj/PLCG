/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_18 = ((((min(65535, 27646))) ? (((min(24, -10368)))) : (((!((((arr_3 [i_0] [i_0] [i_1]) % -1302660829))))))));
            var_19 = (((min((((arr_1 [i_0] [i_1]) ? 747697925 : var_3)), (!var_0))) * ((((((var_5 ? 1 : 1302660829))) ? (((var_0 + 2147483647) >> (var_8 - 12215642566066369385))) : (-1302660852 || -10368))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (((((((1 ? 14514990768582215987 : 10372)) - -1))) ? 13 : ((160 - (arr_1 [i_0] [i_0])))));
            arr_9 [i_0] = ((!(((-(arr_0 [13]))))));
            arr_10 [11] [i_0] = (((arr_6 [i_0] [9] [i_0]) ? (((var_11 ? ((((arr_1 [i_0] [i_0]) < -32))) : (21988 / -19736)))) : (((((119 ? 1302660829 : -3))) ? (~-17895) : (arr_7 [i_0] [i_2] [i_2])))));
        }
        arr_11 [4] |= min(var_4, -1302660819);
        arr_12 [i_0] = (((min(((min(var_6, var_10))), (~1302660814)))) ? (((~var_8) & 0)) : (~-25223));
    }
    var_20 = (((((-(!var_17)))) ? (+-1302660811) : var_8));
    var_21 *= (((((~(var_5 < var_1)))) ? (((-10368 | var_11) ^ var_12)) : var_6));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 += 1;
                                arr_25 [i_3] [i_4] [i_4] [i_6] [i_5] = ((((!var_11) ? var_14 : 21988)) | (!1));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((arr_24 [i_3] [i_4] [i_3] [i_5] [i_3] [i_4] [i_3 - 1]) <= ((var_16 ? (arr_24 [i_3] [i_4] [i_3] [10] [i_3] [i_4] [i_3 - 1]) : (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_3 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
