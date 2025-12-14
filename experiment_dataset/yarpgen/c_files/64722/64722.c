/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 = -42;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (max((((17113228468029691841 ? 1 : (-127 - 1)))), var_2));
                                var_16 += ((((!(((-(arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4 - 1])))))) ? (!var_11) : (max(((((arr_2 [i_0]) <= var_12))), -4275110668604922723))));
                                var_17 = (min(var_17, (((0 ? (max((14774 * var_4), ((min(var_4, var_11))))) : 50747)))));
                                var_18 += (min((((((456059165935157622 ? 3840181425232657868 : 2010435313))) ? (max(var_7, var_2)) : (arr_10 [i_1 - 1] [i_4 - 1] [i_2] [i_4] [i_4 - 2] [i_4 - 3]))), (((((18446744073709551599 >> (15992258782236535100 - 15992258782236535057)))) ? ((((!(arr_4 [i_0] [i_1 + 2] [i_0]))))) : var_5))));
                                var_19 = (min(var_19, 0));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_1] = ((~(((arr_9 [i_0] [i_0] [i_1] [i_1] [i_1 + 3] [i_1]) ? ((var_7 ? var_5 : var_4)) : ((max(var_3, (arr_9 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2]))))))));
                }
            }
        }
    }
    var_20 &= var_8;
    #pragma endscop
}
