/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = var_11;
                    var_13 |= 44;
                    var_14 += (!44);
                    var_15 = (min(var_15, (((-(arr_6 [1] [i_1] [i_1] [i_2 - 1]))))));
                    var_16 = max(((-(((arr_5 [i_0] [i_1] [i_2]) ? -7376153353461879555 : var_9)))), (-30 != -37));
                }
            }
        }
    }
    var_17 &= ((((min((var_9 != var_2), (36 || 29199)))) << (((((var_3 ? var_6 : var_6)) < var_1)))));
    #pragma endscop
}
