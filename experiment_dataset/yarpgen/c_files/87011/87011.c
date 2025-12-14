/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((1 < 26711) != (((!(1 ^ 1))))));
                arr_5 [i_1] [i_1] [i_1] = (((((1 ? ((((-127 - 1) - 0))) : 882870897))) - -8207788241834975536));
            }
        }
    }
    var_12 = 50853;
    var_13 = 1;
    var_14 = (((-7887 && (((6658 ? 3911 : -32760))))));
    #pragma endscop
}
