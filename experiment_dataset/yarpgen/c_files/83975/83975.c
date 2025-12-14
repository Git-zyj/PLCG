/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = 1546270872872491773;
                    arr_7 [i_0 - 1] [i_0] [i_2] [i_2] = 95;
                }
            }
        }
        var_16 = (max(var_16, ((((((-(arr_3 [4])))) ? (max(var_5, (max((arr_5 [i_0 - 1] [i_0] [i_0] [i_0 + 1]), var_3)))) : (((var_11 | (arr_0 [i_0 - 1] [i_0 - 1])))))))));
        var_17 = -var_14;
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_18 |= var_8;
        arr_10 [i_3] = ((16900473200837059855 | (((~(0 == var_8))))));
    }
    var_19 = var_7;
    var_20 = var_1;
    var_21 = var_7;
    #pragma endscop
}
