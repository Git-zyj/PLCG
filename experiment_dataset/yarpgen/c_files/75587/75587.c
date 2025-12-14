/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((!var_13), (((!1) * ((23066 ? -26007 : var_9))))));
                var_15 = ((((max((max((arr_3 [i_1]), (arr_3 [i_0]))), (66 | 7)))) ? ((max(var_12, (arr_3 [i_0])))) : (arr_2 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((((25512 ? ((min(3, 1))) : (((arr_1 [i_3]) ? var_9 : var_12))))) ? ((((max(13, 1))))) : (min((arr_0 [i_0] [i_2]), (arr_3 [i_3 - 1]))))))));
                            var_17 = (min(var_17, (((+((+((1 ? (arr_4 [i_0] [i_1] [i_3]) : 1)))))))));
                            var_18 = (min(var_18, ((((((~var_4) | 1)) | 1)))));
                            var_19 = (min(var_19, (((var_10 ? (arr_1 [i_3 - 1]) : (max((1 - var_1), (!1))))))));
                        }
                    }
                }
                var_20 = ((((((arr_1 [i_0]) << ((((77 ? 11679 : 15)) - 11664))))) ? ((+((1 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))) : var_1));
            }
        }
    }
    var_21 = 1;
    var_22 = 0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_23 = (min(var_23, ((((((arr_5 [i_4] [16] [i_5]) + 18446744073709551615)) + ((((arr_5 [i_4] [i_4] [i_5]) ? var_4 : (arr_5 [i_4] [i_5] [i_5])))))))));
                var_24 = (arr_1 [11]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_25 = (((min(1, 0)) % (min(((0 ? -3705 : (arr_11 [i_6]))), 116))));
                    var_26 = (min(var_26, ((((((var_10 ? var_13 : var_10))) * (min((arr_10 [16]), ((min((arr_0 [1] [1]), (arr_11 [1])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
