/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((((max(1, 0))) ? (16 ^ 32767) : 46053))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = -13999792800377320945;
                var_12 = min((((((0 << (128 - 109)))) ? (arr_0 [i_0] [i_0]) : (((165 ? 0 : (arr_6 [i_0])))))), 132);
                var_13 += (((((((-3581 ? 223 : 67108832)) >= (var_8 | 67108832)))) >> (var_10 - 23476)));
            }
        }
    }
    var_14 = (!var_1);
    var_15 = 0;
    var_16 ^= var_3;
    #pragma endscop
}
