/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (min((min(var_3, (var_2 & var_5))), var_12));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((min((arr_0 [i_0]), (arr_0 [i_0]))) != (((arr_0 [i_0]) << (((arr_0 [i_0]) - 2157816477))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = (arr_0 [i_2]);
                    arr_9 [4] [i_1] [i_2] [4] = (((((((var_12 + (arr_7 [i_2])))) || ((((arr_5 [i_0] [i_1] [i_0]) ? (arr_4 [i_0] [i_1]) : var_10))))) || var_1));
                }
            }
        }
        var_16 = ((var_9 & (~2119965645)));
        var_17 -= (min(((((min(9223372036854775807, var_10)) != (arr_1 [i_0])))), (arr_1 [i_0])));
    }
    var_18 = (min((var_2 <= var_4), ((var_5 << (var_4 + 3929456044603152694)))));
    var_19 = var_11;
    #pragma endscop
}
