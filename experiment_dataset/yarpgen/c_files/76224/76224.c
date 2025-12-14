/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(var_11, ((max(65225, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (((max(((var_3 ? 255 : 1)), var_7)) | (~var_2)));
                var_13 = (((var_5 != 120) > 310));
                arr_7 [i_1] = (max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_0] |= var_6;
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_1] [6] = (((min((var_6 >> var_2), var_3)) + (((((((arr_0 [i_0]) ? var_3 : (arr_11 [i_1] [13])))) ? (((!(arr_9 [i_3] [12])))) : (-79 || 597929504374343560))))));
                        }
                    }
                }
                var_14 = (min(var_14, var_1));
            }
        }
    }
    var_15 = var_9;
    var_16 = var_1;
    #pragma endscop
}
