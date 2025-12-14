/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = ((((((((var_5 ? var_14 : var_1))) ? (max(1, var_7)) : ((min(var_11, -120)))))) ? ((max((var_7 >= var_5), var_6))) : ((max((max(var_14, 15360)), (!15360))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = 2044;
                    arr_7 [i_0] [i_1] [i_2] = ((!((!(((var_16 ? var_7 : var_0)))))));
                }
            }
        }
    }
    var_22 &= (min((min((!var_14), var_9)), ((((!var_7) ? ((max(var_15, 23396))) : ((108 ? 109 : var_3)))))));
    #pragma endscop
}
