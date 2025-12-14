/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+((((~var_9) && ((min(var_10, var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((((6 | (((max(var_5, 124))))))) ? 17799663271414936608 : 9));
                    var_14 ^= (((((arr_4 [i_0] [i_2] [6] [6]) >= (arr_4 [i_0] [12] [10] [i_2]))) ? (max((arr_4 [i_0] [1] [i_1] [8]), (arr_4 [i_2] [6] [4] [i_0]))) : -18446744073709551592));
                    var_15 = -1330549803;
                    arr_8 [i_1] [i_1] [i_1] = (!1);
                    arr_9 [i_1] = ((var_3 % ((((arr_0 [i_1 + 3]) && var_2)))));
                }
            }
        }
    }
    var_16 = (max(var_16, var_2));
    var_17 = (max(var_17, (((!((((max(var_10, 18446744073709551592)) - (var_10 != 0)))))))));
    var_18 = var_1;
    #pragma endscop
}
