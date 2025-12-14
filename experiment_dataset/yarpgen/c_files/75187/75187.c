/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 ? var_4 : (((((1 << (var_9 + 8022427631274441205))) & (var_1 + var_8))))));
    var_12 = ((((((var_10 ? 3226753544 : var_9)))) ? -1368527926362840381 : var_6));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = 127;
                arr_5 [i_0] [i_1] [i_1] &= (min((arr_1 [i_1]), (min(1068213741, 15448280677502057232))));
                arr_6 [i_0] = var_10;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0 - 1] [i_0] [i_2] = (max(((var_2 ? (((((arr_7 [i_1] [i_1] [i_2] [i_0]) >= var_10)))) : var_9)), (~-127)));
                    var_15 = ((3050941921 | (max((arr_7 [i_0 - 1] [i_1] [i_1] [i_2]), ((var_1 ? var_9 : 127))))));
                    var_16 = 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((((arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_4 - 2]) & 1131054686))) ? ((((min(var_1, (arr_7 [1] [i_1] [15] [i_3]))) <= var_8))) : (((((-1368527926362840399 ? -7926 : 792309879))) ? var_3 : (!var_1))))))));
                                var_18 = 5751109194117500423;
                            }
                        }
                    }
                }
                var_19 = (0 >= (!var_10));
            }
        }
    }
    #pragma endscop
}
