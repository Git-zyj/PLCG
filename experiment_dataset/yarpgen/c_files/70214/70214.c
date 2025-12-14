/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_0;
    var_19 = var_2;
    var_20 = ((~((((max(5619468235517570044, -1))) ? var_1 : var_12))));
    var_21 = (((((max(-404912158827902411, 13687)))) ? (((1 ? ((var_5 << (2027810269 - 2027810269))) : (~var_13)))) : (max((1 || var_9), (max(-1, 10508747478346020924))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = 18014398509481983;
                    arr_7 [i_0] [i_0] &= (1 >= 1273365545);
                    var_22 ^= 1;
                    arr_8 [i_0] [14] [14] [8] = 44;
                    arr_9 [i_0] [i_1] [i_2] = ((80 ? var_13 : 9512));
                }
            }
        }
    }
    #pragma endscop
}
