/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [8] [8] [8] [i_1] [1] &= var_10;
                        var_13 = ((58720256 & (((arr_9 [i_0] [i_1] [i_0]) ? ((max(var_10, (arr_3 [i_2])))) : (max(5147391661499089391, var_4))))));
                        arr_13 [i_0] [i_1] [i_2] [19] [i_0] [i_3] = 5147391661499089391;
                        arr_14 [i_0] [i_0] = ((((((max(0, (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [7])))) && (arr_9 [i_0] [i_0 - 2] [i_0]))) && (((-2005674598 ? (((arr_0 [i_0 + 2]) ? 4080 : (arr_1 [i_0] [i_2]))) : (-1735211640 & var_8))))));
                        arr_15 [1] [i_2] [i_2] [i_1] [1] &= ((((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) && -1556134246));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_14 = ((-((((((10 ? 337797656828474347 : -1735211640))) && (((var_1 ? -126 : var_1))))))));
                                arr_21 [i_5 + 3] [6] [6] [i_0] |= -18490;
                                var_15 = (~var_9);
                            }
                        }
                    }
                    var_16 = ((var_10 & ((((10 ? 17982850032268268964 : (arr_9 [i_0] [i_0 - 1] [i_0]))) | ((min(var_2, 991935983)))))));
                }
            }
        }
    }
    #pragma endscop
}
