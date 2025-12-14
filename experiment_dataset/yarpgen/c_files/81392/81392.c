/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_4 ? 4925826399209497307 : 7628545254434707911)), 65504));
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [21] [21] [i_2] [i_4] [i_4] [i_3] [i_0 - 2] = (-1157199443669008285 / (((((var_12 ? (arr_8 [i_0 + 4] [i_1] [i_2] [i_2] [i_4] [i_1]) : -6446341862694670133))) ? 1756216137 : ((55446 ? 9223372036854775807 : -6446341862694670139)))));
                                var_21 = (min(var_21, ((min((((var_7 ? 1 : -3905521509684867556))), (((!(arr_3 [i_0 + 3])))))))));
                            }
                        }
                    }
                }
                var_22 = (((max(var_13, (arr_7 [i_0 + 4] [i_0 + 4]))) - ((~(max(4, (arr_9 [i_0] [18] [i_1] [i_1])))))));
                var_23 = (min(var_23, (((6446341862694670138 ? ((((arr_11 [i_1] [1] [i_0 + 1] [15] [i_0 - 1]) ? 694723430 : (arr_11 [i_1] [13] [i_0 + 3] [i_0] [i_0 - 1])))) : ((1 ? (arr_12 [i_0 + 3] [i_0] [i_0] [i_0]) : -2131966082)))))));
            }
        }
    }
    #pragma endscop
}
