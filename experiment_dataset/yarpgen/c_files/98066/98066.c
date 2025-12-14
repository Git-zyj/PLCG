/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [3] [i_1] [i_0] = ((((min(15403488961938374025, 3043255111771177571))) ? 18446744073709551615 : (arr_5 [i_0])));
                    var_10 += ((((min(18446744073709551601, 957150645))) < (arr_5 [i_0])));
                }
            }
        }
    }
    var_11 = var_3;
    var_12 = 1;
    #pragma endscop
}
