/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((((13001873969353684883 <= (((55 ? var_5 : var_11))))))) < (min(var_18, (~9223372036854775807))))))));
                                var_20 = (max((((((var_14 % 9223372036854775807) + 9223372036854775807)) >> (95 - 36))), (min(2390756475342467689, ((5444870104355866716 ? 986521038 : var_2))))));
                                var_21 = (max(var_21, var_11));
                                var_22 = ((((max(((8 ? var_6 : var_15)), (((255 ? 48604 : 3612726497)))))) && ((((5444870104355866737 ? -1476862317531383335 : var_14)) < 2390756475342467712))));
                            }
                        }
                    }
                    var_23 = -168270594;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 = (((min(103, 22)) * -168270564));
                    arr_20 [9] [i_5] = ((((min((arr_4 [i_5] [i_6] [i_7]), var_18))) ? ((((arr_3 [i_7] [i_6]) ? 37 : (arr_3 [i_5] [i_6])))) : (((arr_3 [i_5] [i_6]) ? 4294967293 : (arr_4 [i_7] [i_6] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 = ((((((arr_13 [i_6] [i_5]) ? var_9 : 23))) > (min((arr_13 [i_5] [i_5]), (arr_13 [i_6] [i_5])))));
                                var_26 *= -1;
                                var_27 = (((((52516 < (26 / 1)))) < 126));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = ((!(-9223372036854775807 - 1)));
    #pragma endscop
}
