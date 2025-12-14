/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_0 ? (~8802) : ((min(0, 0))))) + 2147483647)) >> (-6156845980160960870 + 6156845980160960870)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0 - 1]) && (arr_1 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((((arr_8 [i_2 - 3] [1] [i_2] [i_2]) * (arr_7 [i_1] [12] [i_1] [i_1])))) && (!1));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_22 = (max(var_22, (arr_6 [i_3 - 1])));
                        var_23 ^= 5615455655548547353;
                        var_24 = (max(var_24, ((((arr_6 [i_0]) ? var_2 : (((arr_7 [i_0] [i_1] [1] [i_3]) ? 12808355718395253989 : 1)))))));
                    }
                    var_25 = ((-(((arr_4 [i_1]) ? (arr_4 [i_1]) : 2969))));
                    var_26 = 1;
                    var_27 = (arr_2 [i_0 + 1] [13]);
                }
            }
        }
        var_28 = (max(var_28, (((((min(5615455655548547329, 0))) & 213)))));
        arr_12 [i_0] [i_0] = ((var_11 ? (max((~-9161109583613607605), (~1))) : (((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_14 : 1200605439))) ? ((var_17 ? 41 : 8)) : -2147483644)))));
        var_29 = 0;
    }
    #pragma endscop
}
