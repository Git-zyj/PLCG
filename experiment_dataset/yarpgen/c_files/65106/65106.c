/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((~((22793 ? 1355765874 : 22812)))))));
                    var_20 = ((((((0 + (arr_6 [3] [13] [i_2]))) * ((((!(-127 - 1))))))) - ((min(var_17, -53)))));
                    var_21 ^= (((!-18320) ? ((((arr_7 [i_2 + 1] [i_1] [i_1] [i_0]) != (var_6 >= var_18)))) : 106));
                    var_22 = (max(var_5, var_6));
                }
            }
        }
    }
    var_23 = 31050;
    var_24 &= (((((~(8302577946922310516 && 7507368852495286167)))) ? ((-(~3878419041046244525))) : (((var_15 ? (-41 && 174) : ((max(var_13, var_4))))))));
    var_25 = var_4;
    var_26 = var_13;
    #pragma endscop
}
