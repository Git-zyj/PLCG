/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] = (~3956120775);
                arr_8 [i_1] = var_1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_2] [i_4] = var_16;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = ((-(~3956120775)));
                                var_19 = ((338846521 || 3956120775) ? (~var_10) : (((-((-(arr_24 [i_2] [i_3] [i_2] [6] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_4 >> (var_6 - 2745807772)));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                {
                    var_21 = (min((((((338846521 ? var_10 : 3956120775))) ? (((var_9 ? var_2 : (arr_3 [4])))) : (arr_11 [i_8 + 1] [i_7]))), (~1264460124)));
                    arr_32 [i_7] [5] [i_9] = (((((((((-25085 + 2147483647) << (((-25070 + 25076) - 6))))) >= (min(4272539545, 16212030996053979267))))) * (arr_25 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
