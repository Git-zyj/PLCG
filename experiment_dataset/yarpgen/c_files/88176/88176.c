/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = 3274;
                                var_20 = (~var_8);
                            }
                        }
                    }
                }
                var_21 = 156;
                var_22 = 3274;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, 31911));
                                arr_22 [i_7] [i_5] [i_5] [i_5] [i_0] = (max(-9223371761976868864, ((((max(var_4, 31905)))))));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = (max(31919, (var_12 & 33620)));
                            }
                        }
                    }
                }
                var_24 = (max((max(var_6, var_8)), ((max(var_17, 31887)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                var_25 -= (max(((~((min(62239, 31911))))), 7275));
                arr_31 [i_9] [i_9] [i_8] = var_18;
            }
        }
    }
    var_26 *= var_16;
    #pragma endscop
}
