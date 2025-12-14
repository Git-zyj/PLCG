/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((((((arr_2 [i_0]) == 0)) ? (69 + 0) : -var_11)))));
        arr_4 [i_0] = (max((min(((min(27669, (arr_1 [i_0])))), -var_11)), (((var_2 && ((max(-755609100895977622, var_2))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((min(((1708720991 ? 2961691395 : var_5)), var_3)) != 0));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 = (arr_6 [i_1] [i_1]);
                    arr_12 [i_3] [i_2] [i_1] = (max((arr_5 [i_1] [i_1]), ((((!(arr_2 [i_1])))))));
                }
            }
        }
    }
    var_19 = (min(var_19, ((min((((((18446744073709551599 ? var_5 : 50))) | -73)), (((((5580125956458304290 || (-32767 - 1))) ? 0 : (max(0, (-9223372036854775807 - 1)))))))))));
    #pragma endscop
}
