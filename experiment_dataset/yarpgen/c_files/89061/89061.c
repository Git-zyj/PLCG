/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_2, (((var_3 > (~-27339)))));
    var_14 = max(5, 22);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((min(-25, 27318))) ? (arr_1 [i_1] [i_1]) : var_11));
                var_15 = (max((min((arr_2 [i_0] [i_1] [i_1]), var_4)), ((var_10 ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_0])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] = (!-1);
                        arr_14 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] = (((((arr_12 [i_2] [i_2] [i_2]) <= var_3))) << (((((arr_10 [i_1]) ^ var_12)) - 608397084)));
                    }
                    var_16 *= min((((var_10 != (arr_8 [i_0] [i_0] [i_0] [i_0])))), 2001923430);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_5] [i_1] [i_1] = (min(((-(arr_15 [i_0] [i_0] [i_0] [i_0]))), (max(13, (((241 ? var_12 : 14)))))));
                            var_17 = 7634;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
