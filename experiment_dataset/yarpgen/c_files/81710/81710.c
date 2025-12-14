/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_6, var_11));
    var_14 |= ((((1336893696858798248 * (1 != var_3))) % -949045750));
    var_15 = 949045749;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (arr_7 [i_2 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = 27036;
                                var_17 = ((-2120448044 ? 1 : (((arr_11 [i_2] [i_4]) ? -9435 : (arr_11 [i_0] [i_1 + 1])))));
                                var_18 = (max(var_18, (((((min(2695730362, 949045749))) ? -322514955 : (arr_12 [i_1 + 1] [i_1 + 1] [i_2 + 1] [0] [5] [i_2 + 1]))))));
                                var_19 += -233;
                            }
                        }
                    }
                    var_20 = -9435;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_21 += (713689601 >= 9223372036854775807);
                var_22 = (max(var_22, ((min(25, (max(-1872865473669272193, (arr_18 [i_5] [i_6] [i_5]))))))));
                arr_19 [i_5] [i_6] [i_6] = (134 << (((max(var_2, -87)) - 4294967206)));
            }
        }
    }
    #pragma endscop
}
