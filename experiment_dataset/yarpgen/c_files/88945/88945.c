/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? ((min(var_7, 9223372036854775807))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_18 &= 1;
                        arr_13 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> ((((~(var_2 - 16383))) - 5736729778080702089)));
                        arr_14 [i_1] = (min(((((((arr_1 [i_1]) ? 5182872439352169030 : var_6))) ? 39758 : ((-3310449436799865974 / (arr_5 [i_1] [i_2] [i_3]))))), var_1));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = (arr_15 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                        var_19 = 4302;
                        var_20 *= ((!(arr_6 [i_2 - 2])));
                        arr_18 [i_0] [i_0] [i_1] [i_0] = ((39758 ? 5182872439352169030 : 6192810073642129773));
                    }
                    var_21 = ((((((min((arr_16 [i_1] [i_2 + 1] [i_2 + 1] [i_1]), 0))) + 2147483647)) << ((((((min(106, -93))) + 110)) - 17))));
                    var_22 = -2143;
                }
            }
        }
    }
    var_23 = -28679;
    #pragma endscop
}
