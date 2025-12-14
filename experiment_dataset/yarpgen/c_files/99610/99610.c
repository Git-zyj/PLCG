/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 ? var_9 : ((var_3 ? var_2 : 16)))) == ((((-126 >= (4080 < -4076))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (((((var_1 % (arr_6 [i_0 + 1] [i_1 + 1])))) > 15232174535697199949));
                var_13 = 15570496460602366801;
            }
        }
    }
    var_14 = -3085969547738288302;
    #pragma endscop
}
