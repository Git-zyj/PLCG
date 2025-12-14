/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((116 ? -1 : 8551111021938830770)))));
                                arr_14 [i_0] [13] [i_0] = (max((((arr_2 [3]) * (arr_1 [i_0]))), ((max((arr_8 [0] [2] [i_4 + 1]), (~-1))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_21 [2] [i_5] = ((~(min(65535, (arr_9 [i_0] [i_5 + 1] [i_5] [5])))));
                            var_18 &= -10;
                            var_19 = (min(var_19, 37));
                            var_20 = (min(var_20, (((!(((-(arr_16 [7] [7])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_7] [i_7 - 2] [i_7 + 3] [i_8] &= (((((~((8 ? 7617231454063182909 : -20))))) || (((~(max(-8551111021938830770, var_13)))))));
                            var_21 = (min((arr_3 [0]), (!var_6)));
                        }
                    }
                }
                var_22 = max(((((arr_25 [i_0]) ? var_13 : (arr_25 [14])))), (((max(0, 18446744073709551615)) >> (58 == var_3))));
            }
        }
    }
    #pragma endscop
}
