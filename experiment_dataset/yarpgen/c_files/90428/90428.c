/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((((((arr_3 [i_0]) / (arr_1 [18] [i_1])))) ? (max(var_12, (arr_0 [i_0] [i_1]))) : (((min(200, 54))))))) ? ((-128 ? (max(9712541569183713966, 200)) : (((min(200, 200)))))) : (-150 + 2147483647))))));
                var_15 = (((((-134 ? 983040 : ((min(2147483647, -66)))))) ? (arr_3 [i_0]) : 32619));
            }
        }
    }
    var_16 &= 4293984256;
    var_17 = 140;
    #pragma endscop
}
