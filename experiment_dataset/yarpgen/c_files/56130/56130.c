/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = -var_8;
                    arr_12 [i_0] [i_0] = 32;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_10 = var_8;
                            var_11 *= (var_4 <= (max((((1908917066 ? 0 : (arr_16 [i_6] [i_6])))), (min(14393129575355207966, 3672917478325693211)))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_28 [i_3] [1] [i_4] = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_12 = (max(((-(arr_10 [i_3] [i_4] [i_4] [i_3]))), ((((max(0, (arr_33 [i_3] [i_8] [1] [i_8] [i_8] [i_3] [i_3])))) ? -24878 : ((max(var_4, var_7)))))));
                                var_13 = (((min((1831938775 < 1), ((var_6 != (arr_15 [i_3]))))) ? ((((((arr_15 [i_3 - 1]) ? 10012884478797057293 : 9424542480222016486))) ? ((10888224199095045726 ? 1 : 14773826595383858392)) : 10012884478797057293)) : 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_5;
    var_15 = var_7;
    #pragma endscop
}
