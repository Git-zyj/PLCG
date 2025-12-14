/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_1] = (((arr_1 [8] [i_0 - 1]) << (~14829)));
                    arr_8 [i_2] [7] = ((arr_4 [i_0 - 2]) ? ((var_3 ? var_4 : ((var_7 ? var_13 : var_3)))) : (((arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2]) << (((arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1]) - 82)))));
                    var_16 ^= (((((((var_10 ? -62 : -95))) ? var_6 : (115 ^ 50706))) + (((arr_5 [i_0] [i_1] [i_1] [i_2]) & ((max((arr_6 [i_2] [i_2] [i_2]), var_2)))))));
                    var_17 -= (((max((arr_3 [3] [3] [i_2]), var_7))) ? (max(-97, 48)) : -var_9);
                    arr_9 [i_0 - 2] [i_1] [2] [i_2] = ((((-60 ? ((min(var_14, (arr_5 [i_2] [i_2] [i_2] [i_2])))) : ((max(16, 3667))))) < ((1 ? (arr_4 [i_0 - 2]) : -27))));
                }
                var_18 ^= (arr_1 [i_0] [i_1]);
                var_19 = (max(var_19, (((~(((-62 > var_7) ? (var_9 + var_15) : (!26))))))));
            }
        }
    }
    var_20 = (!var_14);
    var_21 = (((var_7 ? var_4 : (var_2 ^ var_5))));
    #pragma endscop
}
