/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [5] [8] = ((~(!10398676141993392471)));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, 126976));
                            var_15 = (max(var_15, var_1));
                            var_16 = ((var_11 ? (max(var_2, -var_5)) : ((((var_5 >= var_10) ? var_4 : ((var_9 ? 1537233079 : var_12)))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] = var_2;
                            var_17 = 27;
                            var_18 = (max(var_18, var_5));
                            var_19 = (max(var_19, ((var_1 + ((((var_11 ? -1537233087 : var_12))))))));
                            var_20 = -66;
                        }
                        var_21 ^= ((!(((16560083977310661265 ? (!var_0) : (!58))))));
                    }
                    var_22 = -1537233073;
                    arr_16 [22] [9] [i_0] [i_2] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
