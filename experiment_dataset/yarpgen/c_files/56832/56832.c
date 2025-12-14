/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (((((((arr_4 [i_0] [1] [i_2]) ? (arr_3 [i_0] [i_0]) : var_8)) + 9223372036854775807)) >> (((arr_4 [i_0] [i_0] [i_0]) + 574620060))));
                    var_15 -= (((((19707 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_2 [i_0])))) ? var_10 : ((-4547972285812684438 ? (4294967293 + -108) : -19707))));
                    var_16 = (max(-2835754337261763108, (((~(arr_3 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_17 = (max(var_10, var_5));
    #pragma endscop
}
