/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, (((-((-565265001 ? 1 : (max(0, -565265008)))))))));
                                var_11 = (arr_2 [22] [i_1]);
                                var_12 = var_3;
                                var_13 = (--20765);
                            }
                        }
                    }
                    var_14 = (min(var_14, var_2));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((((arr_13 [i_2 + 1] [i_2] [i_5 + 1] [i_6]) ^ var_4))) ? (((((var_4 ? (arr_7 [i_0] [i_0]) : (arr_14 [8])))) ? 565265013 : (arr_4 [i_0] [i_5 - 1] [i_5 - 1] [i_5]))) : (((arr_16 [i_2] [i_1] [i_1] [i_2] [i_6] [i_2 + 1] [i_5 - 1]) ? ((min((arr_13 [i_0] [i_1] [11] [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_5 - 2])))) : -565265011)))))));
                                var_16 ^= min(((((min(1856101592083406174, 1))) ? (min(var_5, 50)) : 82)), 565265025);
                            }
                        }
                    }
                    var_17 = ((((!((((arr_12 [i_1] [i_1]) * 32767))))) ? -var_6 : (((-((134217727 ? var_0 : 21539)))))));
                }
            }
        }
    }
    var_18 = (max((((((max(var_4, var_5))) ? (1 / var_2) : (var_9 || var_2)))), (max(20762, 10744954510890130082))));
    var_19 = var_9;
    var_20 = ((((var_8 * var_9) * (((var_6 ? 565265015 : var_7))))));
    #pragma endscop
}
