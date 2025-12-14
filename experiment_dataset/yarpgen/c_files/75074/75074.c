/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_4 + var_2) >= var_4));
    var_20 = ((max((min(var_8, var_4)), var_11)));
    var_21 = ((!(((3 ? (max(18446744073709551608, 2)) : ((21 ? 18446744073709551608 : -13022)))))));
    var_22 -= var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = ((1 ? 27 : ((18446744073709551615 ? -16 : 2858873794482121389))));
                arr_4 [12] = (((((0 ? ((9887 ? 5 : 1)) : (arr_3 [i_0] [i_1] [i_1])))) ? (((((max((arr_2 [i_0]), (arr_3 [i_0] [i_1] [i_1]))) < (min((arr_1 [i_0]), (arr_2 [i_0]))))))) : (max((max((arr_1 [i_1]), (arr_2 [i_0]))), ((max((arr_3 [i_1] [i_1] [i_0]), (arr_3 [0] [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
