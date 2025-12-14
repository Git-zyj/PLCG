/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = 6175889553383604089;
                        var_20 = ((max(12735266665147349186, -1)));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = (arr_7 [i_0] [i_1] [i_2]);
                        var_21 &= (max((((var_2 - var_10) ? (max((arr_6 [i_3] [i_1] [i_3]), var_0)) : (~11792150577820427571))), (max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_1])))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_22 -= ((!(!1)));
                        var_23 = (min(var_23, var_8));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((~(min((arr_8 [i_6 - 1] [i_1] [i_1] [i_0]), (arr_19 [i_6] [i_1] [i_2] [i_1] [i_6]))))))));
                                arr_20 [i_0] = (((((8176 ? -1 : 127))) || (((var_7 ? 255 : (arr_2 [i_5 - 3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] = (127 / var_1);
                                arr_27 [i_1] [i_0] = (arr_13 [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_3 || var_6);
    #pragma endscop
}
