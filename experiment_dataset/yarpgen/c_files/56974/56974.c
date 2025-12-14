/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 -= (min((((arr_3 [i_4 + 2] [i_0] [i_0]) ? ((435585936 & (arr_11 [3] [i_1] [i_2]))) : 183)), (!6166399484225124982)));
                                arr_12 [i_0] [i_2] [i_2] [i_0] [i_4 + 1] = (max(((-((122 ? 1 : 0)))), ((((((min(122, 1)))) > var_12)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 -= var_3;
                                var_15 *= (min(1, -937016143));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                var_16 = (max(var_16, (min(((((arr_21 [i_7] [i_7]) || (arr_22 [i_7 - 1])))), (((var_3 ? 98 : 1)))))));
                var_17 = (min(var_17, (arr_23 [i_7] [i_8])));
            }
        }
    }
    #pragma endscop
}
