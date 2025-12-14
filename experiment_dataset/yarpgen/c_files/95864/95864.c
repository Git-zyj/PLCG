/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(-1490454164, -1122973427)));
    var_15 = ((!((min((max(16076514384367481979, 2618297389)), (((3 ? 1003291064 : -11))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [10] [10] [i_3] = 0;
                        var_16 -= (max((((498191746 >= 240) ? (-2147483647 - 1) : 253)), 30));
                    }
                }
            }
        }
        var_17 *= (((((((min(2618297389, 1365910853))) ? 0 : (65535 <= 172)))) || ((max((!1), -1676669901)))));
        var_18 = ((-(~65525)));
        var_19 += 18;
    }
    var_20 = -1343159888;
    var_21 = (max(var_21, (((0 ? 3804727846282320447 : (((65525 ? 27 : 8678925717029446519))))))));
    #pragma endscop
}
