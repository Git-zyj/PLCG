/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((var_1 && var_9) ? var_15 : -1));
    var_19 &= (max((((54973 && var_4) ? var_13 : (!127))), var_1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((-98 >= (((arr_6 [6] [i_1] [i_2 + 2] [i_2]) ? 255 : ((min(-13187, (arr_3 [i_1] [5]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = ((!(arr_5 [i_2 - 2] [i_2 - 2] [i_2 + 2])));
                                var_22 = ((-(max((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]), (arr_11 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1])))));
                                var_23 -= ((~(arr_13 [i_1] [i_1] [8])));
                                var_24 = var_10;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_5] [i_0] [i_0] [i_5] = (((max(13187, (~8))) + (min(var_11, ((18446744073709551615 ? 25158 : (arr_8 [i_0] [1] [i_6] [i_7])))))));
                        var_25 = ((~(((!(arr_19 [i_5 - 2] [i_6 - 1] [i_6 + 1]))))));
                        var_26 = min((max(-91547962, 1313521706)), ((min((arr_2 [i_5 + 1]), (arr_2 [i_5 - 1])))));
                    }
                }
            }
        }
        var_27 = 2842893758;
    }
    var_28 = ((var_7 * (((!(!1322141351))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            {
                var_29 ^= ((~2253356723) ? ((max((arr_8 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 1]), (arr_28 [i_8] [i_9] [i_9])))) : ((68 ? -3933182890 : 13588)));
                var_30 = (min((arr_28 [i_8] [i_9 - 1] [i_9 - 3]), ((((var_2 ? var_5 : 0)) & (arr_0 [i_8])))));
                var_31 = var_10;
            }
        }
    }
    #pragma endscop
}
