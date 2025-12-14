/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_4 [i_0] [i_0])));
                var_18 ^= (arr_1 [i_1] [i_1]);
                var_19 &= 127;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_2] [1] = 4503530907893760;
                var_20 = (((min(0, (max((arr_1 [1] [i_3]), (arr_11 [i_2] [i_3]))))) / (max(-7473049969940725996, (arr_11 [i_2] [i_2])))));
                var_21 = (arr_8 [i_3]);
            }
        }
    }
    #pragma endscop
}
