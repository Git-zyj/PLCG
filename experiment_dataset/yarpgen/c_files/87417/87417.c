/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(-2115006959944616032, 95)) / var_1))) ? (((var_14 > (min(3409576292, -802085938505009445))))) : var_0));
    var_17 *= (~var_12);
    var_18 = 10377;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min((arr_1 [i_0] [13]), (8296 || 2687383020)));
                    var_20 -= ((-var_5 / (58365 & -7634247407262213326)));
                }
            }
        }
    }
    #pragma endscop
}
