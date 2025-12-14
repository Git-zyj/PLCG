/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 ? var_12 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (((((min(var_3, (arr_1 [i_0] [i_0])))) ? ((min((arr_3 [i_0]), (arr_1 [8] [i_0])))) : ((min(var_6, (arr_3 [i_0])))))))));
        var_16 = var_5;
        var_17 -= -6079290290980795782;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_9 [i_1] [3] [1] = ((((min(((min(var_8, var_9))), var_2))) ? var_10 : -1320264849));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_18 = (arr_10 [0] [i_2] [i_3]);
                            var_19 = ((~((((var_9 ? var_8 : -1320264844))))));
                            var_20 = (min(var_20, 724408232281373130));

                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_17 [i_4] [i_3] = ((((arr_14 [i_1] [i_2] [i_3] [i_4]) ? (arr_15 [i_1] [13] [i_3] [i_4] [i_5] [i_5] [6]) : var_0)) << (var_5 - 1016440599));
                                arr_18 [i_1] [i_3] [i_5] = ((-1320264837 | ((5 ? 388869320 : -28))));
                                arr_19 [i_3] = ((((((min(var_9, (arr_12 [i_3])))) ? -var_1 : (arr_5 [i_5])))) && 149);
                            }
                            var_21 -= (min(-3270, 35));
                        }
                    }
                }
                var_22 = (min(var_22, ((((min(((-26564 ? 212 : 234)), 199)) | (((var_8 || ((min((arr_6 [0] [1] [8]), 52377)))))))))));
            }
        }
    }
    #pragma endscop
}
