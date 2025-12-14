/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 >= ((-(min(var_5, var_4))))));
    var_21 = (max(var_21, ((((!-7498619972074434517) < ((var_8 ? (min(0, 0)) : ((0 ? var_15 : 0)))))))));
    var_22 = (((~949671750) % ((~(max(var_8, var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (arr_1 [i_1]);
                    var_24 = arr_4 [i_0];

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_25 = (min(var_25, ((((arr_1 [i_1 + 3]) >> (((arr_3 [i_3 + 2]) - 4216706806784670835)))))));
                        var_26 = ((-(arr_8 [i_3 - 1] [i_3 - 1] [i_2 + 2] [i_3 - 1])));
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3 - 1] = ((-(arr_4 [i_0 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_27 = (((((min((arr_12 [i_0 + 1] [i_4] [i_2 - 2] [i_4]), 14284562119711665317)) != (var_7 ^ var_4))) ? (((0 ? (((0 ? var_4 : (arr_1 [i_0])))) : 9223372036854775807))) : ((var_2 ? var_6 : 49))));
                        var_28 = (max(var_7, ((max(var_2, (arr_10 [i_0] [i_1 + 2] [i_0]))))));
                        var_29 = (max(var_29, ((min((((arr_8 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_0 + 1]) ? (arr_0 [i_1 + 1]) : (arr_9 [i_2 + 3] [i_4 - 1]))), (var_15 ^ var_9))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
