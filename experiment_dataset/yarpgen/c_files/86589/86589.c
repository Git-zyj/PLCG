/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(var_1, (min(var_2, ((var_13 ? var_8 : var_3))))));
    var_18 ^= var_13;
    var_19 = (min(var_19, (((!(!4294967282))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((max(((max(var_13, var_8))), (((arr_5 [i_1] [7]) << (((arr_1 [i_1]) - 65852630)))))));
                    var_21 = (min((max(41935, 41929)), 0));
                }
            }
        }
    }
    #pragma endscop
}
