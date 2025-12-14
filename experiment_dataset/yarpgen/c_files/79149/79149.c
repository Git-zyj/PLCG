/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (((((var_5 ? (max(18446744073709551603, 20)) : ((127 ? 110 : (arr_3 [i_0])))))) ? var_13 : (arr_1 [i_0 + 1])))));
        var_19 = (~4056005169);
        var_20 = ((~(((!(4125912371 != 3444170332576969774))))));
        var_21 = (max(var_21, (1 != 4125912371)));
    }
    var_22 = 65535;
    var_23 = (max(var_23, ((max(((166 ? -var_8 : ((60 ? 0 : 4125912371)))), 103)))));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_24 = ((!((((~var_3) ? 5740845904509608842 : var_11)))));
                    arr_11 [i_1] [i_1] [7] = 238962127;
                }
            }
        }
    }
    var_25 |= (-19145 * 0);
    #pragma endscop
}
