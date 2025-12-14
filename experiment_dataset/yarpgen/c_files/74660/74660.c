/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 = ((((min((~3218517147564648499), ((((-32767 - 1) <= var_6)))))) >= (((-1526623460 <= var_0) % (max(8712367547933463061, 433032664))))));
                                var_11 = ((max((arr_15 [i_2]), (arr_15 [i_0]))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (!147);
                            }
                        }
                    }
                    var_12 = (min(var_12, ((max((((!var_9) && (((arr_3 [i_0] [i_0]) || var_2)))), ((!((!(arr_3 [i_0] [i_0]))))))))));
                }
            }
        }
    }
    var_13 = (~var_3);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [1] [1] [8] |= -1526623460;
                arr_23 [i_5] = ((~(((arr_19 [i_6 + 2] [i_6 + 1]) ? var_5 : var_4))));
                var_14 = (max(var_14, ((max(((((min(-1493829418966958755, var_4)) & (~0)))), (max(var_9, (((~(arr_19 [i_5] [i_5])))))))))));
                var_15 = (min(var_15, (((97 ? (((((arr_21 [i_5] [i_5] [i_5]) > (arr_21 [i_6] [i_6] [11]))))) : (((arr_17 [i_5] [i_6 + 2]) ? (max(var_2, var_9)) : var_3)))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((+(((arr_20 [i_7 + 1] [i_6 - 3]) ? 73 : var_2)))))));
                            var_17 = ((!((min(1526623465, var_2)))));
                            var_18 = var_3;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
