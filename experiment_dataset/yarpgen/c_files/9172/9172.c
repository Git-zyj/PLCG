/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-1688068473, -10227));
    var_21 = (min(var_6, var_3));
    var_22 = ((max(var_7, var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 = (min((min((max(-69, 18446744073709551615)), 4190208)), (-24 / 2567461983)));
                    arr_6 [i_0] [12] [1] [i_2] = (max(var_9, (arr_4 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 2])));
                    var_24 = (max(12412207465467702457, var_2));
                    var_25 -= (max(((max(var_15, -111))), var_3));
                    arr_7 [i_0] = (max((63 | 7), (min((arr_4 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3]), var_10))));
                }
            }
        }
    }
    var_26 = (max((max((max(var_13, 14050)), 562949936644096)), var_7));
    #pragma endscop
}
