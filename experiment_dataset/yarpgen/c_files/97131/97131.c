/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, -1));
                    arr_7 [i_1] = 4398046511103;
                }
            }
        }
    }
    var_19 = ((max(((max(1, var_1))), -3692799971403225363)));
    var_20 = 65535;
    var_21 += ((((!(var_8 > -100))) ? ((-(~var_16))) : ((((min(70, var_9))) ? ((var_5 ? var_14 : 63181)) : var_8))));
    #pragma endscop
}
