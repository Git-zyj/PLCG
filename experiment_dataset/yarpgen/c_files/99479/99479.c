/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 == (max(var_0, (!15120988363936354277)))));
    var_14 = (((3325755709773197356 + var_4) ? ((var_2 / (var_3 / 69))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((min((3325755709773197338 % var_1), (~1))) | (arr_1 [i_0 + 4]));
                var_15 += var_9;
                arr_6 [10] [i_1] [i_1] &= ((-(max((arr_2 [i_0] [i_0]), (((arr_1 [i_0]) ? var_7 : (arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1 + 3] = (((~235678306) ? ((~(max(var_11, (arr_3 [i_0] [i_0]))))) : ((((min((arr_4 [i_0] [i_0] [i_0]), 104873543)) | (~-1))))));
                var_16 = (((arr_0 [i_0 + 3]) + ((min(0, 42)))));
            }
        }
    }
    var_17 = ((var_1 ? var_6 : var_3));
    #pragma endscop
}
