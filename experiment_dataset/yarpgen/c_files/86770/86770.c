/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (((58 ? var_16 : (arr_8 [i_0] [i_2] [i_0]))));
                                var_18 = ((+(((arr_2 [i_1]) ? (235 <= 2) : ((58 ? (arr_7 [i_1] [6] [i_3] [i_4]) : (arr_7 [i_0] [4] [10] [i_3])))))));
                                var_19 = (((min(1315831569567327692, var_1)) == ((((arr_9 [i_1] [i_2] [i_3] [i_4]) - (((arr_5 [i_0] [i_2] [i_3] [7]) ? (arr_0 [i_1] [i_2]) : var_2)))))));
                            }
                        }
                    }
                    var_20 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_21 = 17460292556224797507;
                    var_22 = (max(var_22, 65508));
                    var_23 ^= (((arr_17 [i_5 - 1]) ? ((((arr_18 [i_7] [i_6] [i_7] [i_5 + 1]) ? 32767 : (arr_18 [i_5 + 1] [i_7] [15] [i_5 - 1])))) : (((min(var_11, (arr_17 [i_7]))) % (-2147483647 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
