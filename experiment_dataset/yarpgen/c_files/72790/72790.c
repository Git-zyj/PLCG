/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((47188 - 9912554640422197431) || var_17));
    var_21 = (((((8534189433287354186 * 12288) - 9912554640422197411)) - (((var_16 / var_11) * (7551710799870649113 + -1)))));
    var_22 = (min(var_22, (var_8 || var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 = ((((((arr_6 [i_1 - 1] [i_1 + 2] [i_2 - 2] [i_2 - 2]) && -18))) < (64990 > var_5)));
                                var_24 = (-7147536660652326897 | -288925995);
                                var_25 = (((29 + 288925998) & (((((arr_5 [i_4 - 2] [i_2] [i_0]) / (arr_12 [i_4] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]))) % (arr_12 [i_0] [i_4 - 2] [i_2] [i_3] [i_3] [i_2] [i_0])))));
                                var_26 = (min(var_26, ((((65535 | -5953) > (var_15 & 18))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((((arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2]) ^ 61))) && (21985 * 31744)))));
                                var_28 = (i_2 % 2 == zero) ? (((((((((arr_13 [9] [i_2] [9] [i_5] [i_2]) ^ var_15))) ^ (var_13 | 12948323169907459670))) << (((arr_16 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2]) >> (118 - 116)))))) : (((((((((arr_13 [9] [i_2] [9] [i_5] [i_2]) ^ var_15))) ^ (var_13 | 12948323169907459670))) << (((((((arr_16 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2]) + 2147483647)) >> (118 - 116))) - 536870901)))));
                                var_29 = (63807 ^ 119);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
