/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_1 [i_0 - 1]))) <= (arr_1 [i_0])));
        var_19 = var_17;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = ((14 ? (((-1226566975 || ((max((arr_8 [i_1] [i_1] [i_1]), (arr_7 [i_3] [i_3]))))))) : var_11));
                    var_21 = ((56047 ? 0 : 1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_15 [i_4] [i_4] [i_5] [i_1] = var_3;
                    var_22 = ((~(~-112)));
                }
            }
        }
    }
    var_23 = (((min(-1, 151))));
    var_24 = (min((var_6 == var_18), var_7));
    #pragma endscop
}
