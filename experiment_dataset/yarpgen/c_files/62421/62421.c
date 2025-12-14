/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= 10271668474340226758;
                    arr_7 [i_0 + 2] [0] [i_2] [4] = ((-66669179 ? 558446353793941504 : 558446353793941497));
                    var_15 *= var_11;
                    arr_8 [i_1] &= ((((~(arr_4 [i_0] [i_1 - 1] [i_1 + 1]))) >> ((((199 << (var_3 + 67))) - 50917))));
                }
            }
        }
    }
    var_16 |= (var_5 / 558446353793941517);
    #pragma endscop
}
