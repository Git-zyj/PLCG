/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_15));
                    arr_9 [i_1] = ((-((65535 ? (~-353175910251880200) : (91 + 153)))));
                    var_21 = 78;
                    var_22 |= (((2454824827822116860 - var_7) + (16155259285661746822 - var_1)));
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = ((!((max(var_6, -107)))));
    var_25 = (!var_1);
    #pragma endscop
}
