/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(9223372036854775807, var_3)), var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max((max((((arr_0 [i_1 + 1] [14]) / 9223372036854775795)), ((min(-1, var_8))))), ((((var_8 / -31108407396392586) ? var_3 : var_5))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_12 = arr_5 [i_0] [i_2];
                    arr_6 [i_0] [i_0] = (((32763 ? var_5 : (arr_2 [i_0] [i_0]))) + ((((4294967295 >= (arr_3 [i_0] [i_0]))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = var_6;
                    var_13 -= ((((1 ? var_1 : 1122767718))) ? ((var_7 ? -1 : 1)) : var_3);
                    var_14 = ((!(((var_8 << (var_5 - 1212822336))))));
                }

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [1] [i_0] [i_1] [i_0] = (max((((var_6 | ((min(2548, var_7)))))), var_8));
                    arr_12 [i_0] [i_1] [i_0] [i_1 + 1] = (!(!var_4));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = (max(var_15, (~var_9)));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_16 &= arr_2 [i_1] [i_5];
                        var_17 = 1122767689;
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_18 = (((((1048576 ? (arr_0 [i_0] [i_0 + 2]) : var_4))) ? ((-31220 ? var_6 : var_9)) : ((((arr_17 [i_0 + 3] [i_0]) ^ var_0)))));
                    arr_20 [i_0] [i_0] [i_6] = (((((var_5 >> (((arr_1 [i_1] [i_0]) + 5525))))) ? var_9 : (var_6 * 10784829028678536454)));
                    var_19 ^= var_5;
                }
            }
        }
    }
    #pragma endscop
}
