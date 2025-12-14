/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 -= (max((arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_0]), ((((-1 == 2097151) && (((3340322136 ? 3340322136 : 3340322136))))))));
                            arr_15 [i_3] [i_2] [i_2] [i_3] [i_3] [i_1] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                var_17 = 92448312;
            }
        }
    }
    var_18 = ((var_12 ? var_12 : var_3));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_19 |= (954645160 >> 0);
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_20 = (max(((~(((arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? -8581563737602871279 : 60)))), (((~(3340322135 & 4294967295))))));
                                var_21 = (min(((37 ? ((((arr_6 [i_4] [i_5]) ? 11633 : (arr_10 [i_4] [i_4] [i_4] [i_4])))) : (min((arr_18 [i_4]), 0)))), ((((max(1, (arr_21 [i_5] [i_8]))) | (0 >> 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max((((((min(0, 2147483647))) ? (((min(var_15, 1)))) : (max(3340322136, var_5))))), ((((min(-1049704891, 0))) ? 14466420012202409894 : (23601 || var_9)))));
    #pragma endscop
}
