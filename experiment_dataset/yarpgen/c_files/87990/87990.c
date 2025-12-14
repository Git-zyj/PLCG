/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((16058767154392330809 - var_12) / (var_6 || var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((+((max(((((arr_5 [i_0] [i_0] [i_1]) < var_13))), (arr_5 [i_0] [i_1] [i_1]))))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((((((0 % 65458) + (arr_4 [i_2] [i_1] [i_0])))) == 18));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 &= var_5;
                                var_17 = (min(var_17, ((max((-18 / 768357245), 768357247)))));
                                var_18 = max(2387976919317220796, -1454177649);
                                var_19 = (max(var_19, ((min((((65481 + 3175219797) ? (((arr_4 [i_0] [11] [i_2]) / var_8)) : (~0))), (min(-5384078, 95)))))));
                            }
                        }
                    }
                }
                var_20 = min(5552754057676337153, 3189191538447225986);

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [11] = (16058767154392330809 && 3189191538447225993);
                    var_21 = (((arr_12 [i_1] [i_1] [i_0]) <= -18));
                    arr_19 [i_1] = (((max(((!(arr_4 [i_0] [i_1] [7]))), (((arr_11 [i_0] [15] [i_1] [i_0]) || (arr_2 [4]))))) && (arr_11 [i_5] [i_1] [i_0] [i_0])));
                    arr_20 [i_0] [i_1] [i_5] &= max((((arr_4 [i_5] [i_0] [i_0]) & (arr_4 [i_5] [i_0] [i_0]))), ((((arr_4 [i_0] [i_1] [i_5]) && var_8))));
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = ((~(arr_15 [i_0] [0] [i_6 + 1] [i_7])));
                            var_23 = (((max(2721289130, (max(35, (arr_22 [i_7] [i_6] [i_1] [i_0]))))) & ((max(((max((arr_23 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [13])))), ((var_7 ? var_5 : var_9)))))));

                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_24 |= max((((((max((arr_13 [i_0] [i_1] [16] [i_8] [i_8]), var_12))) && -768357246))), (((var_12 < (arr_0 [12])))));
                                var_25 = (min(var_25, ((((((var_2 != (arr_3 [i_0])))) != 64607)))));
                            }
                            var_26 = (min(var_26, (((((max(var_12, (arr_6 [14] [i_1] [14])))) ? (((((max(1573678166, var_13))) && (var_2 && var_1)))) : ((((max(-27, 141))) >> (((((var_2 + 2147483647) << (((arr_2 [i_6]) - 38)))) - 2147483523)))))))));

                            for (int i_9 = 2; i_9 < 18;i_9 += 1)
                            {
                                var_27 = (min(((((min((arr_28 [9] [i_1] [i_6] [i_1] [9] [i_9 - 2] [i_9]), (arr_13 [i_1] [i_9] [i_6 + 1] [i_7] [i_9]))) != 1))), (((((arr_26 [i_0]) ^ -111)) ^ ((max(132, var_11)))))));
                                arr_34 [i_0] [i_9] [i_7] &= (max((((arr_15 [12] [i_6] [i_6 - 1] [i_7 - 1]) % (arr_15 [8] [9] [i_6 + 3] [i_7 - 1]))), (arr_15 [i_1] [i_1] [i_6 - 1] [i_7 - 1])));
                                var_28 &= (max((((arr_33 [i_9 + 1] [i_9 + 1] [i_7 - 1] [i_7] [i_6 + 1] [i_0] [i_0]) ^ ((-36 ^ (arr_24 [i_7 - 1] [i_1] [i_0]))))), (min(var_9, ((3427189385 & (arr_24 [i_1] [i_7] [i_9 - 2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
