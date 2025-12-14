/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 & (var_0 < 228)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 |= (((~123) ^ ((((((arr_6 [i_3] [4] [i_3]) % 9))) % 3618863562))));
                        var_18 = ((!((max((arr_10 [i_0] [i_1 + 4] [i_2]), var_13)))));
                        var_19 = ((((max(((123 ? (arr_7 [i_2] [10] [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3]))), (arr_0 [i_0])))) ? (((var_11 & var_11) ? ((max(var_1, (arr_5 [i_0] [i_0] [i_0])))) : ((123 ? (arr_0 [i_0]) : var_0)))) : 27));
                        arr_12 [6] [2] [i_1 + 3] [i_1] [i_0] [i_3] = ((~((max(-79, -124)))));
                        var_20 &= (((((((((arr_9 [i_3] [i_1 + 3] [i_2] [i_2] [i_3]) && var_7))) >> (((arr_10 [i_3] [i_3] [i_2]) + 109))))) ? ((max(28270, -123))) : (107 / var_12)));
                    }
                }
            }
        }
        var_21 = var_13;
    }
    var_22 = var_13;
    #pragma endscop
}
