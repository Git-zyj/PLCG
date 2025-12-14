/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 -= ((-(((arr_2 [20] [20]) % (((arr_2 [i_0] [22]) ? 65535 : 50553))))));
                    var_13 ^= 61440;
                    var_14 = (max(var_14, (((2517 >= (arr_2 [i_0] [22]))))));
                    arr_7 [i_0] [i_0] [16] = 32;
                }
            }
        }
    }
    #pragma endscop
}
