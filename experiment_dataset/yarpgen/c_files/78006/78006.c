/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((239 ? 33 : 7)))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 &= ((((((arr_7 [i_0] [i_0]) != (((-32 >= (arr_1 [i_0]))))))) > (((max((arr_4 [i_0]), 67))))));
                        var_12 = -var_3;
                        var_13 = ((893371230 ? (((arr_7 [i_0] [i_0]) ? (arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2]) : -var_9)) : ((-((max(1, -82)))))));
                        var_14 = ((-4568589037838870403 / (arr_6 [i_3] [i_1] [i_0])));
                        var_15 = (16 ? 144 : -1);
                    }
                }
            }
        }
        var_16 = (((((((max(1125899906826240, 3310163902272224071))) ? 248 : (min(var_3, var_0))))) ? ((-(arr_7 [i_0 + 1] [i_0 - 1]))) : (((var_5 - (arr_5 [i_0] [i_0]))))));
        var_17 = (min(var_17, (!var_7)));
        var_18 *= ((((min((arr_0 [i_0 - 1] [i_0 - 1]), var_6))) ? (var_3 >= var_4) : (min(((var_3 ? var_6 : -2009388182276531414)), (var_4 + var_9)))));
    }
    var_19 = ((((max(8353312036176013109, (!var_3)))) ? ((((max(var_5, var_9))) + 4250396125885602818)) : ((var_2 << (var_1 ^ var_7)))));
    #pragma endscop
}
