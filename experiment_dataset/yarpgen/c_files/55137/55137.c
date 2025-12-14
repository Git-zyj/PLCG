/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((max(3020572700569622011, 15426171373139929603)) / (min(((251 ? 3020572700569622012 : 1)), var_9)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 *= (((255 + var_0) ? 1 : 3020572700569622012));
                                var_15 = (max(var_15, (127 - 121)));
                                var_16 = (max(var_16, (((var_1 ? 117 : ((-5208667052038336511 ? -18 : 94)))))));
                                var_17 *= (((max((9219086269925515948 % -1782003053636805797), (13 + 15426171373139929592))) >= (((((-20367 < var_4) || -var_8))))));
                                var_18 = (max(var_18, (15426171373139929603 & 1125899906711552)));
                            }
                        }
                    }
                    var_19 *= (max(((((((var_6 + 9223372036854775807) << (var_7 - 4186900223666539300)))) ? (9223372036854775807 > var_6) : var_7)), ((31959 ? 0 : 7985032785094666664))));
                    var_20 = (max(var_20, (!-20387)));
                }
            }
        }
    }
    #pragma endscop
}
