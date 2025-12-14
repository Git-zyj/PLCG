/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 124105095;
    var_14 = (min(var_14, ((max(var_10, (min(var_6, (min(var_2, var_7)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 ^= ((((-9223372036854775787 ? 2206209665675112026 : 396043807)) <= ((((arr_1 [i_0]) ? var_11 : (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 |= arr_3 [i_0] [i_1] [i_1];
            arr_6 [i_1] [i_1] [i_1] = var_1;
        }
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 = (arr_9 [i_0]);
                        var_18 = var_6;
                    }
                }
            }
        }
        var_19 ^= (((((-(arr_13 [i_0] [i_0] [14] [14])))) ? ((2431508332 ? 124105093 : 1)) : var_5));
    }
    var_20 = ((~(~var_2)));
    #pragma endscop
}
