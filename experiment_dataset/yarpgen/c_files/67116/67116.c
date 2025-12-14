/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (arr_1 [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_14 = ((((((arr_6 [i_0] [i_1] [i_0]) ? (arr_5 [i_2] [i_1] [i_1]) : 14))) ? ((((arr_5 [i_0] [i_1] [i_2]) ? 3201825411 : (arr_5 [i_0] [i_1] [i_2])))) : (arr_6 [i_0] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = ((((1924510118686374175 + ((((arr_1 [i_0] [i_2]) / 4))))) > ((((!((((arr_2 [i_0] [i_1] [i_2]) ? var_10 : var_5)))))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] = (arr_9 [6] [6] [i_2] [i_2]);
                        var_15 = var_1;
                        var_16 = ((((arr_6 [i_0] [i_1] [i_0]) ? var_12 : (arr_1 [i_1] [i_3]))));
                    }
                }
                var_17 = (((max((((arr_7 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [13]) : var_2)), (((~(arr_0 [i_0])))))) ^ (((((1857908587 ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : var_2)) % ((((arr_6 [i_0] [i_1] [i_1]) && (arr_0 [i_0])))))))));
                var_18 ^= (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? ((((min(var_1, var_13))))) : ((3082021039 ? -1583213316 : 524288))));
            }
        }
    }
    var_19 = ((((min(((min(var_6, var_11))), var_8))) ? var_10 : (((16522233955023177449 ? 3246036301 : -6)))));
    #pragma endscop
}
