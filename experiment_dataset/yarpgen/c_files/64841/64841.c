/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((28461 ? (~-28461) : 134217216)))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((+((2113061352 ? (-127 - 1) : 63))))))));
                                arr_11 [i_3] [i_1] [0] [i_0] [i_4] = (~119);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = 16975143716566299019;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((-(((var_3 ? -32760 : -28431)))));
                        var_20 = (min(var_20, (10738678583436432247 & 12726)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_0] = ((min(119, var_3)));
                        var_21 &= (((var_0 ? 23607 : var_7)));
                    }
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = -var_17;
    var_24 |= (((min(-13255826221274350969, -0)) > -var_8));
    #pragma endscop
}
