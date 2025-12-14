/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    var_19 = -23167;
                    var_20 = (min(var_20, (((-876294739 + ((2568018342 ? 5847764750380231065 : -1743105211)))))));
                    var_21 = ((((((5847764750380231065 ? 7970 : -1807985651)))) << (122 - 100)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (((-111694482 ? -37 : (max(1, -728420122)))));
                                arr_12 [i_0] [i_3] = (((((-112 + 2147483647) << (181 - 181))) / ((47639 << (1807985650 - 1807985636)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((((-15170 == 38046) ? ((max(1, 27490))) : 1))) ? ((-(0 % -8))) : 22088)))));
                            var_24 = (max(var_24, 17896));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
