/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_11 ^ (max(var_10, 1039038493461386328)))) & ((min((~12089), (~-998282489))))));
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (arr_9 [i_0] [i_0] [i_2] [8])));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_18 *= (min((-2147483647 - 1), 2147483647));
                                var_19 *= (max((((2147483647 / 266295892081159099) * ((((arr_0 [i_1]) / (arr_3 [i_3])))))), (((min((arr_3 [i_3]), (arr_2 [i_0] [i_0])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [5] = (+-266295892081159089);
                            }
                            var_20 = ((-(((arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_1]) + 6))));
                            var_21 = max(-var_11, (((arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? (arr_5 [i_1 - 2] [i_1 + 1] [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]))));
                        }
                    }
                }
                var_22 = ((((((var_8 ^ 3457262385) ? (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1]) ? var_14 : 4294967295)) : (arr_8 [i_0] [i_0] [i_0] [i_0] [0] [i_0])))) ? (((-2147483645 && 0) ? ((-2147483645 ? 266295892081159099 : 837704910)) : ((max(36, 2147483647))))) : (((((max(var_3, 72))) + (arr_3 [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
