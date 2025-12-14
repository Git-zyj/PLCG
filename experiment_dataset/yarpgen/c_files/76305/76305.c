/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(((max((arr_0 [i_0 - 3] [i_0]), 33))), var_1));
        arr_2 [i_0] [i_0] = (min((max((arr_0 [17] [i_0]), ((min(var_7, var_8))))), (arr_1 [i_0 + 1] [i_0 - 1])));
        arr_3 [i_0] = 5;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_15 -= ((min((max(82, 65526)), (arr_13 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] [13]))));
                                var_16 = (min(32761, ((min(var_3, (max(-781978779, 33)))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [11] [i_3] = (min((max((arr_10 [i_2] [i_2]), ((max((arr_8 [6] [6]), -69))))), ((min(1790494833, (arr_1 [i_1] [5]))))));
                    arr_17 [6] [6] [19] [19] = 781978798;
                    arr_18 [i_1] [i_1] [i_1] [i_3] = (min((max((max(-32762, 8222991414228798232)), (arr_12 [i_1] [9] [i_1] [i_1]))), var_4));
                }
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
