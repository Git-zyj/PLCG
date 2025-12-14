/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 = (min(61418, 7576172765732106469));
                var_20 = (min(var_20, 54612));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_1 + 1] [i_2] [i_0 + 2] |= (min(((-93 ? (var_15 - 10920) : 65535)), ((min((!15619), var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (arr_12 [11] [7]);
                                arr_16 [14] [2] [i_2] [i_3] [14] [12] = (max(((~((var_8 ? (arr_4 [9]) : (arr_10 [i_0] [8] [1] [i_0 - 1] [i_0]))))), ((-25000 ? 1 : 8191))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = (!2071699877997068235);
                                arr_23 [i_0] [i_0] [i_2] [5] [i_6] = 20;
                                var_23 = (2071699877997068228 == 30203);
                            }
                        }
                    }
                    arr_24 [i_0 + 1] [4] [4] [i_2] = 54614;
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_24 = 55864;
                    arr_28 [i_0] [i_1] [i_7] = var_7;
                }
            }
        }
    }
    var_25 = var_8;
    var_26 = var_1;
    #pragma endscop
}
