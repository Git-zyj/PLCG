/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (~(max(30, ((var_1 ? var_12 : -1)))));
    var_15 = ((-7000107879602899741 ? 30 : 0));
    var_16 = (((((49953 ? var_8 : 3)))) ? ((((min(0, var_13))) ? var_5 : ((var_8 ? 245 : 3382466346759071121)))) : var_11);
    var_17 *= ((((((((var_0 ? -3382466346759071122 : 3))) ? ((49860 ? var_9 : var_5)) : var_9))) ? (((var_5 ? var_13 : var_12))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [12] [i_1] |= (((((((max((arr_4 [i_0] [2] [6]), -7376173100876372144))) ? var_10 : (((arr_2 [7]) ? 6314277661874762420 : (arr_2 [i_0])))))) ? (!6238140525967613570) : ((-8495991019890993688 ^ ((6308866928638278508 ? 615398285904221256 : (-9223372036854775807 - 1)))))));
                arr_6 [i_1] |= ((+(((arr_1 [i_0 + 1]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_0 + 1])))));
                var_18 ^= ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : -1065681197673829619))) ? ((9223372036854775807 ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (((1 < (arr_3 [i_1]))))));
                arr_7 [i_0] [11] [i_1 + 2] = (((arr_4 [i_0] [i_1 - 1] [11]) ? 17601 : 6661776839481698585));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [14] [i_0] = ((((max(((min((arr_11 [i_2] [i_1]), 55243))), (min((-9223372036854775807 - 1), -6976035665965067917))))) ? (((4 ? (arr_3 [i_0]) : 0))) : var_8));
                            var_19 = (max(var_19, ((min(((min(134, (arr_9 [i_0 - 1] [13] [i_2] [i_3])))), (max(121, (min(var_9, (arr_9 [i_0 + 1] [i_1 - 1] [i_2] [7]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
