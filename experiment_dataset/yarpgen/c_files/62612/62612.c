/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = ((((((!(arr_1 [i_2]))) ? -597234532 : 597234532))) && (var_5 && 1));
                    var_11 = (((((((!(arr_6 [i_0] [i_1] [i_1] [i_2 + 1]))) ? ((var_5 ? var_7 : var_0)) : (max(255, var_1))))) ? (!var_7) : ((6934921559413007444 ? 24 : (var_5 ^ 1)))));
                }
            }
        }
    }
    var_12 = (((var_0 > ((var_3 ? 4594838269621058278 : var_7)))) ? (max((((var_6 ? var_5 : var_6))), (max(var_7, 4294967291)))) : ((125 ? var_5 : var_2)));
    var_13 = ((var_5 ? ((((~var_7) < var_4))) : (var_9 < -var_3)));
    #pragma endscop
}
