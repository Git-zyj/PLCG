/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (var_14 ^ var_10)));
    var_17 = (max(var_17, var_11));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0 - 1]);
        arr_3 [i_0] = ((((max((arr_2 [i_0] [i_0]), var_7))) ? (arr_2 [i_0 - 1] [i_0 - 2]) : (((arr_2 [i_0 + 1] [i_0 + 1]) - 14))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_19 = (arr_6 [i_0 - 2]);
                        var_20 ^= (((arr_1 [i_0 - 1]) ? (arr_6 [i_1]) : ((var_8 + ((var_0 + (arr_7 [0])))))));
                        var_21 += var_11;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_15 [i_4] = 1;
        var_22 |= var_2;
        var_23 = (max(var_23, (arr_14 [i_4])));
    }
    #pragma endscop
}
