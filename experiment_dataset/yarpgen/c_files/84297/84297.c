/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_6, (min(2700560649, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] = (((132 ? var_7 : var_6)));
                            var_15 = ((-((-6247703965256250324 ? 1594406646 : 1594406646))));
                        }
                    }
                }
                var_16 = ((2700560645 ? (((1594406643 % 1594406623) << (-271189179096646108 + 271189179096646131))) : ((((((min(var_0, var_0))) <= (min(2700560641, 1594406646))))))));
                arr_14 [i_0] [i_0 + 1] [i_1] = (((arr_7 [i_0 - 3]) ? var_2 : (min((min(2700560646, 1594406633)), var_3))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 = ((!2700560643) && var_11);
                                arr_28 [i_5] [i_5 + 2] [i_6] [i_7] [i_8 + 3] = ((((var_10 >> (var_1 - 151))) << (((var_1 % 33554431) - 159))));
                            }
                        }
                    }
                    arr_29 [i_5] = (!var_2);
                    var_18 *= (((((-271189179096646111 ? 1594406646 : 1))) + (((-271189179096646111 + 9223372036854775807) << (1594406654 - 1594406654)))));
                }
            }
        }
    }
    #pragma endscop
}
