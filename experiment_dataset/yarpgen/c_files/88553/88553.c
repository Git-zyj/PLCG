/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((!(~var_2)));
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_22 = 3162929961;
                            var_23 = -69;
                        }
                    }
                }
                var_24 = (7 > 240);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_25 &= ((((3356138945 ? 243 : 3356138953))) ? (938828358 + 63896) : (3644071116 + 4294967295));
                                var_26 = (((min(63896, 248))) && (((1 ? 53 : 11))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = -506681168543858526;
    #pragma endscop
}
