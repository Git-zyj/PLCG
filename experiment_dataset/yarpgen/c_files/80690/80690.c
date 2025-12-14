/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (((-(((112 + var_11) / (((23 / (arr_2 [i_1]))))))))) : (((-(((112 + var_11) * (((23 / (arr_2 [i_1])))))))));
                var_18 = 51;
                var_19 = (min((247993429687341648 + 7029628614639859332), (((var_10 ? 23018 : (arr_0 [i_0]))))));
            }
        }
    }
    var_20 = ((var_5 ? var_2 : 67));
    var_21 = (((((((var_4 ? var_11 : var_13)) / (var_14 > var_4)))) ? var_16 : var_11));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 = (((((-6531 ? 1 : (arr_13 [i_2] [i_3])))) ^ ((~(min((arr_6 [i_3]), var_1))))));
                            arr_14 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] = (((((((var_1 ? (arr_7 [i_2] [i_3]) : var_8))) || (arr_11 [i_2] [i_4 - 1] [i_2]))) ? 5080869166124591754 : ((((((arr_5 [i_2]) + 9223372036854775807)) << (((min(1, 1799244974)) - 1)))))));
                            var_23 = (min(var_23, ((((((~(arr_8 [i_4 - 1] [i_4 - 1] [i_5])))) ? ((((arr_12 [i_4 - 1] [i_5] [i_4 - 1] [i_5] [i_2]) <= (arr_8 [i_4 - 1] [i_4 - 1] [i_5])))) : ((((arr_8 [i_4 - 1] [i_5] [i_5]) > (arr_8 [i_4 - 1] [i_4] [i_5])))))))));
                            arr_15 [i_5] [i_5] [i_5] [i_2] |= (min(((var_14 ? ((((arr_13 [i_2] [i_2]) + -409615856))) : ((2495722334 ? 1 : -247993429687341648)))), ((175 - (arr_5 [i_5])))));
                        }
                    }
                }
                arr_16 [i_2] [i_3] [i_3] = (min(2495722334, var_12));
            }
        }
    }
    #pragma endscop
}
