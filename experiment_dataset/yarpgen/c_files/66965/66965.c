/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 *= (min(2023136946571042799, var_9));
                    var_14 = ((0 ? -36 : 2288081519));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = (-(0 != -36));
                    var_16 = ((-(arr_0 [i_1 + 1])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_4] &= (((arr_11 [i_0] [i_1 - 1] [i_1]) ? (arr_4 [i_0] [i_1]) : var_5));
                    var_17 |= (((((18446744073709551615 ? -32 : 16))) ? (arr_5 [i_1] [i_1] [i_1]) : -36));
                    var_18 = (((((-11 ? 12276011172272377835 : (arr_8 [i_1] [i_4])))) ? ((16 ? var_5 : (arr_7 [i_1] [12]))) : (arr_7 [i_1] [i_1])));
                }
                var_19 = (min(((max((arr_0 [i_0]), var_12))), (min((arr_5 [i_0] [i_0] [i_0]), var_6))));
                arr_14 [i_0] [i_1] [i_0] = (2381974513 && 4258952427);
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
