/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_0] [i_1]);
                    var_19 = (max(var_19, (((22 ? ((min(2147483647, -94))) : (min(18446744073709551615, -1)))))));
                    var_20 = 7497545304700713906;
                }
            }
        }
    }
    var_21 = (var_17 == var_11);
    #pragma endscop
}
