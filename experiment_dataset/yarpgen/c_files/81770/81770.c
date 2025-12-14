/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((((-4866337607665320397 ? 63 : 1048320))) ? 24267 : (((arr_7 [i_2 + 2] [i_1] [i_1] [i_2 - 1]) ? -1048320 : 2497487909))));
                    var_14 = ((+((-1 ? (arr_6 [i_0] [i_0] [i_0]) : 4534214638726283308))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [6] [i_0] = (max((arr_6 [i_2] [i_2 + 2] [i_2 + 1]), 219936782824035878));
                                arr_14 [i_1] = ((-1 ? (((1 ? -20 : var_0))) : 100));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_10 ? var_11 : var_0);
    var_16 &= 3971160649;
    var_17 = (min(var_17, (((511 ? 13346637984882642338 : -5267)))));
    #pragma endscop
}
