/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [1] = ((((((arr_4 [1] [i_1]) ? (max(8709611335927984250, (arr_2 [i_1] [i_0]))) : 25))) ? (((arr_1 [i_1]) << (((((arr_1 [12]) ? -1 : (arr_2 [i_0] [i_1]))) + 58)))) : (((!4751) + (max((arr_0 [i_0]), (arr_1 [i_0])))))));
                var_11 = (max(var_11, ((min(((~(((arr_0 [1]) ^ (arr_4 [i_0] [i_1]))))), (((arr_1 [i_0 + 2]) ? (min((arr_0 [i_0]), var_8)) : (((var_10 >> (-3 + 16)))))))))));
                var_12 &= 16921130171912226884;
            }
        }
    }
    var_13 = (min(var_13, (max(((var_10 ? ((var_8 ? 210 : var_6)) : var_0)), -15259))));
    #pragma endscop
}
