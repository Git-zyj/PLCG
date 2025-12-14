/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((max((max(var_17, 18446744073709551615)), (arr_0 [i_0]))), ((((0 ? 0 : var_15)) << (((min(18446744073709551615, 18446744073709551603)) - 18446744073709551545))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = ((~(max((32767 << 1), -1))));
                        var_21 = (min(10, 522849059));
                    }
                }
            }
        }
    }
    var_22 = var_9;
    var_23 = (((min((min(0, 32740)), (var_15 <= 1)))) < var_0);
    var_24 = (max(var_24, (((((-(min(18446744073709551615, 4095)))) == 1)))));
    var_25 = (max(var_25, 18446744073709551615));
    #pragma endscop
}
