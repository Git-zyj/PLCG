/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1448580853;
    var_18 -= (var_12 != var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (((min((arr_2 [i_0]), (arr_2 [i_2])))) ? (((((2179998564579236238 & 569761644) <= (((~(arr_0 [i_0])))))))) : (((arr_3 [i_0]) ? (arr_4 [i_1] [i_1]) : 2357610818)));
                    var_20 = (5 ^ 17179869168);
                }
            }
        }
    }
    #pragma endscop
}
