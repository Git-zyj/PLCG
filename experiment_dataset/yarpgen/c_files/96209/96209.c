/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((((arr_2 [i_1 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_1 + 2]))) : ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
                var_11 ^= (arr_0 [i_0]);
                var_12 ^= ((!((min((arr_3 [i_0] [12] [i_0]), (arr_0 [i_0]))))));
                var_13 *= ((!(((((32768 ? 23715 : 0)) + (((arr_2 [i_0]) ^ (arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_14 = ((~((2276109452633714623 ? (418900788252884483 & 3216596941) : ((168 ? (arr_6 [12]) : (arr_6 [i_2])))))));
                                arr_17 [i_4] [i_3] [20] &= var_4;
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_2] [i_6] = ((((16170634621075836992 ? (arr_14 [i_3]) : (arr_14 [i_2])))) ? (min(-var_7, (arr_10 [i_4] [i_5 - 3] [i_5] [i_5 - 2]))) : 0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] = 1;
                                var_15 ^= (arr_24 [i_4] [i_4]);
                                var_16 = ((0 ? 4611681620380876800 : 13273));
                                var_17 = (arr_24 [i_2] [i_2]);
                            }
                        }
                    }
                    var_18 = (min((((16170634621075836969 ? 7 : (~71)))), (1 - 2276109452633714649)));
                }
            }
        }
    }
    var_19 = (max(var_19, (((2276109452633714620 ? 12844322819069168454 : 17)))));
    var_20 = (((((0 ? 12844322819069168454 : 17837966268961182086))) ? (((!var_3) >> (var_8 - 196))) : (~var_0)));
    var_21 = (((((((5602421254640383182 ? var_5 : var_9))) ? 53 : ((var_8 ? 0 : 71)))) >= ((((!var_7) ? var_1 : (~0))))));
    #pragma endscop
}
