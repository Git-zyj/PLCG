/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((min(((var_3 ? var_4 : var_13), var_7)))))));
    var_15 = (min(var_15, 62639));
    var_16 = (min(var_2, ((min(-1725937140, (220 - 117))))));
    var_17 = -var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_3] = ((!((((max(-125, 178521561)) >> (((arr_6 [i_0 + 2]) - 106)))))));
                        var_18 = 117;
                    }
                }
            }
        }
        arr_14 [i_0] = (min((arr_11 [i_0] [i_0]), (((117 < (min(var_7, var_13)))))));
        arr_15 [13] [i_0] = ((-(arr_8 [i_0 - 2])));
        var_19 = ((!(~8490071133289741064)));
    }
    #pragma endscop
}
