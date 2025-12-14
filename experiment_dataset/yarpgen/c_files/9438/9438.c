/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max((max(2146435072, 1)), 17522));
                        var_19 = (min(-432236712, ((min(2207711124, 232)))));
                        arr_14 [i_0 + 1] [i_1] [i_1] = (max(((14736 ? 432236693 : 10288307264595754273)), (((1136792072 ? 432236709 : 108)))));
                    }
                    var_20 = (min(var_20, ((((10288307264595754273 ? 432236712 : 7))))));
                    var_21 = (min(var_21, (((min(-32, 3730170470))))));
                    arr_15 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1] = (min(3730170470, (min(1, 62691))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_21 [i_4] [i_2] [i_1 - 1] = (((((172 ? 432236724 : 432236705))) ? ((29072 ? 44977 : 2844)) : 3785));
                                arr_22 [i_0] [i_0] [i_0] [0] [i_0] [i_0] [i_0 - 1] = max(15228105116228274982, ((max(2147483647, ((max(62663, 30433)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_25 [i_6] = min((max(1, 1063202810)), 1);
        var_22 = (max(9007199254738944, (min(62663, 9))));
    }
    var_23 = var_8;
    #pragma endscop
}
