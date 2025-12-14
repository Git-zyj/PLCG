/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_13 = (arr_1 [i_1 - 1] [i_2 - 1]);
                    var_14 -= (arr_3 [i_0] [3] [i_2]);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_15 = (arr_4 [i_1] [i_1] [i_1]);
                    var_16 = (!511);
                    var_17 = (((((var_4 * ((41011 ? var_8 : 24525))))) ? (max(41012, 16)) : (arr_1 [i_0] [i_0 - 1])));
                    var_18 = (((max(251, 24541))));
                }
                var_19 = (~24524);
            }
        }
    }
    var_20 |= var_11;
    #pragma endscop
}
