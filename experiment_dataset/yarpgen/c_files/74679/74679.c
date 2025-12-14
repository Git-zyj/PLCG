/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_14;
    var_19 |= var_0;
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = 3425502508015455863;
                var_22 *= 4203585695;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, 21));
                                var_24 = 624952629364917050;
                                var_25 = 60275;
                                var_26 += 5257;
                            }
                        }
                    }
                }
                var_27 = 7281688098563823066;
            }
        }
    }
    #pragma endscop
}
