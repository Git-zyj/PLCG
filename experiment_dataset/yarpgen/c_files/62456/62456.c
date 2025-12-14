/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!1);
        arr_3 [i_0] = (max((!var_4), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((((max((arr_12 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]), (arr_16 [i_1] [i_2 + 1] [i_1] [i_2])))) || 1));
                        arr_18 [i_4] [i_2] [i_3 - 1] [i_4 + 2] |= (min((arr_12 [i_3] [i_3] [i_3 + 1] [i_3 - 1]), ((1 ? 1029068753 : 0))));
                        var_14 = var_0;
                        arr_19 [i_4] [i_4] &= ((!((((var_3 ? var_10 : (arr_1 [i_3] [11])))))));
                        var_15 = (1005221568 / 1);
                    }
                }
            }
        }
        arr_20 [i_1] [i_1] = (min(((((arr_11 [i_1] [i_1] [i_1] [i_1]) ? 1 : -1))), ((((max(-12280, -1))) ? var_4 : 0))));
        var_16 *= var_13;
    }
    var_17 = var_3;
    #pragma endscop
}
