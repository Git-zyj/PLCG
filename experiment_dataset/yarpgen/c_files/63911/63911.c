/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = (max(var_17, (((-14480674471719757041 >= ((((arr_0 [i_0]) / 162))))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_18 *= (arr_3 [i_0] [i_1]);
            var_19 = (min(var_19, (arr_3 [8] [i_1])));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_20 = ((~(arr_3 [i_0 + 1] [i_0 + 1])));
            var_21 = (((arr_3 [i_0 - 1] [i_0 + 1]) ^ 4092));
            arr_6 [i_2] = 0;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_9 [i_3] [8] = (((arr_1 [i_0 + 1] [i_0 + 1]) % (arr_1 [i_0] [i_0 - 1])));
            var_22 = (arr_5 [i_0 + 1] [i_3] [i_0 - 1]);
            var_23 = ((~(arr_2 [i_0 - 1] [i_3] [i_0 - 1])));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_24 = (min(var_24, (arr_10 [0])));
                    var_25 = -0;
                    var_26 = (arr_11 [i_0 - 1] [i_0 + 1] [i_4]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (max(var_27, (((((((min(-27, (arr_18 [i_6])))) % ((17288 << (((((arr_16 [i_6] [16]) + 22645)) - 8)))))) != (((4294967277 < (arr_18 [i_6])))))))));
        arr_19 [i_6] = (arr_16 [i_6] [i_6]);
        arr_20 [i_6] = (min(18, (min(((1655260512 | (arr_17 [i_6] [5]))), (min(-1, 4294967290))))));
    }
    var_28 = 18;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_29 *= (min((-26 | 21985), (((max(-27864, 3)) << (((max(34359738360, 30946)) - 34359738335))))));
                arr_26 [15] [i_8] [12] = (min((((!(arr_12 [12])))), ((max((arr_24 [i_7]), ((1655260512 / (arr_12 [i_8]))))))));
            }
        }
    }
    #pragma endscop
}
