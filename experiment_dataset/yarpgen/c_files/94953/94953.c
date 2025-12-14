/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min(((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))), ((9223372036854775792 / (arr_0 [i_0])))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_16 = (max((max((max((arr_3 [i_1]), (arr_4 [i_0]))), ((((arr_6 [i_1] [i_0] [3]) << (var_11 + 25800)))))), ((max((3 > var_8), (((arr_1 [i_0]) ? 1 : (arr_2 [i_2]))))))));
                    var_17 = var_7;
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 7;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_18 = (!0);
                                arr_18 [i_0] [i_1] = (-5768 * 0);
                                arr_19 [i_1] [i_4] = (arr_15 [i_0] [i_1] [i_3] [i_4] [i_1] [i_1]);
                                var_19 = (((arr_2 [i_3]) ? (((((arr_14 [i_0] [i_3] [1] [i_4]) > (arr_4 [i_0]))))) : (arr_9 [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (1 && (!9223372036854775792));
                                var_21 = ((1 >> (-11 + 11)));
                                arr_28 [i_1] [i_1] = ((-122 ? 25390 : 1));
                            }
                        }
                    }
                }
                var_22 = (((!7932838109613654135) & 1));
            }
        }
    }
    var_23 = -17959;
    #pragma endscop
}
