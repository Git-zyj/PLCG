/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (((((-21821 ? (~4310) : (!1)))) ? ((-(((arr_1 [1] [1]) ? (arr_7 [i_0]) : var_9)))) : (((2350327049 ? 1 : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_2] [i_0] [9] [i_4] = ((((((((var_4 ? var_7 : var_2))) ? ((((arr_1 [i_2] [i_4]) ? 4294967295 : (arr_12 [i_0] [5] [i_1] [i_2] [i_2] [i_3] [i_4])))) : ((var_2 ? 1 : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4])))))) ? ((3914249824 ? 380717472 : -43)) : ((((((arr_13 [i_0] [i_1] [3] [i_2] [i_2]) ? (arr_14 [i_0]) : var_7))) ? ((0 ? 3974078545 : 1)) : (!1)))));
                                var_11 = ((((-64 ? 1 : 18446744073709551615))) ? (((!var_7) ? ((1 ? 5584942671620337755 : 1)) : ((((!(arr_11 [i_4] [i_0] [i_0] [i_0]))))))) : (((!var_6) ? ((1 ? (arr_9 [1] [i_1] [i_2] [i_3] [4] [i_3]) : (arr_15 [i_2] [i_3] [i_4]))) : ((((!(arr_11 [i_0] [i_0] [i_0] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (((((-5715 ? 3678466125 : 1))) ? (((~3657855587) ? (!1326064360688003403) : (~var_3))) : ((((((var_4 ? 0 : var_8))) ? (!var_8) : ((var_5 ? 33554368 : 662256793)))))));
    #pragma endscop
}
