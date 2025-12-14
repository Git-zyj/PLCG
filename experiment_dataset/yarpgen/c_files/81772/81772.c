/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((((474724676622322108 ? -7850726723834815449 : 7850726723834815446))), ((var_18 ? var_6 : var_10)))) & var_12));
    var_20 = (min(var_20, ((((((~(~var_16)))) >= (((max(-7850726723834815447, var_0)) * var_17)))))));
    var_21 = ((((!var_2) ? (7850726723834815449 || -19643) : (!113))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_22 += (max((((-50374783 || (arr_1 [i_1 - 2] [i_1 + 1])))), (min((arr_1 [i_1 - 2] [i_1 - 3]), 56))));
                var_23 = (!899595580);
            }
        }
    }
    #pragma endscop
}
