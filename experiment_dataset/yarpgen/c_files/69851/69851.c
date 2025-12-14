/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-(4098884377 && 4064245535))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -196082907;
                var_12 ^= (((((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 2]) + (arr_0 [i_1 - 1]))) << (((min(230721761, (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) - 230721760))));
                arr_6 [i_1] = (((((max(3298079935, 106)) <= (((max(var_6, 10)))))) ? ((((max(136, (arr_0 [i_0])))) ? (0 * 9223372036854775807) : (((arr_1 [i_0]) ^ 2827430975138819673)))) : (((-(~var_2))))));
            }
        }
    }
    #pragma endscop
}
