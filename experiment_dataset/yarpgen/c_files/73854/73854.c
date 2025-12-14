/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 -= (min(3626210522, 164));
                var_21 = ((3626210522 ? ((max(var_15, (arr_3 [i_0] [i_0])))) : (arr_4 [i_0])));
                var_22 = (max((3626210522 / -6741736676932909772), (max(var_8, (arr_0 [i_0])))));
                var_23 = ((~(((arr_2 [i_0]) ? -var_5 : ((0 ? 13481671901291321360 : (arr_0 [i_0])))))));
                arr_5 [3] = (((!-21) * (-21 & 0)));
            }
        }
    }

    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] |= (65535 > 235);
        var_24 |= (((arr_3 [i_2] [i_2 - 1]) - 668756772));
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((((arr_10 [i_3 + 2]) + (arr_10 [i_3 - 2])))) ? (((-((~(arr_9 [12] [12])))))) : (min(-var_19, (~var_10))));
        arr_12 [i_3] = (arr_9 [23] [20]);
        var_25 ^= (arr_9 [i_3 - 1] [i_3 + 1]);
        var_26 = (min(-21, 3063266072));
        var_27 *= (min(((((min((arr_10 [i_3 + 1]), -3))) + var_19)), (arr_9 [i_3] [i_3])));
    }
    #pragma endscop
}
