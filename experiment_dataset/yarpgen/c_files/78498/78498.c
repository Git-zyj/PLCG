/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((-(min(-8895971425578858764, (arr_5 [i_0 + 1] [1] [i_2 + 4])))));
                    arr_9 [i_0] [i_1] [i_0] = (min(var_5, var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_0] [i_0] [i_0] [i_3] [i_3] = ((-var_5 ? ((var_3 + (arr_12 [i_0 - 1]))) : ((min((var_4 + var_1), var_13)))));
                                arr_15 [2] [i_4] [6] [i_0] [9] = ((((min(-var_10, ((4294967281 ? 1 : 2859963967399773041))))) ? (min(0, var_1)) : (arr_2 [i_0])));
                                arr_16 [i_4] [i_3] [i_0] [i_1] [i_0 - 1] = (arr_5 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((((max(-8944173940513570120, var_11)) > var_9)))) < (max(((max(var_4, 0))), 964739521683921491))));
    var_16 = (min((!618788892), -var_7));
    #pragma endscop
}
