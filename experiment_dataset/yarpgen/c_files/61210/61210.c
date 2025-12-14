/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0 + 1] [i_0] = -4765394664859160782;
                    var_16 = 4765394664859160789;
                    var_17 = (max((!var_15), (min((max(4765394664859160781, 4765394664859160783)), (((-4765394664859160783 + 9223372036854775807) << (-4765394664859160782 + 4765394664859160782)))))));
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = max(4765394664859160789, ((((-4765394664859160782 >= 4765394664859160782) >> (4765394664859160783 - 4765394664859160776)))));
    #pragma endscop
}
