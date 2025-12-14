/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (min((((((255 ? 4294967295 : -345)) + (((~(arr_4 [i_1] [i_1] [i_1]))))))), (min((max(30912, (arr_3 [i_0 + 2] [i_2 + 3] [0]))), ((((arr_5 [i_2] [13] [i_0]) ? (arr_1 [i_1 - 1] [3]) : (arr_4 [i_0] [i_1 - 3] [i_0]))))))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] = ((((((-(arr_8 [i_2] [i_1 + 3] [i_2] [i_3]))))) | ((((((max(1, (arr_9 [i_3] [i_3] [i_2] [i_1 - 1] [i_0] [i_0]))))) <= (arr_0 [i_0] [i_0]))))));
                        var_20 ^= ((~(((min(-102, 15871648059820571810)) & -3538229237219605999))));
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_4] [i_2 + 3] [i_2] [i_1 + 1] [i_0 + 2] [i_0] &= (arr_12 [i_0] [i_1] [i_2 - 1] [i_4] [i_4] [i_0]);
                        arr_15 [i_1] [i_2] [i_0] [i_1] [i_0] [i_0] = (((min((((arr_5 [i_4 + 1] [i_4 + 1] [4]) & (arr_10 [i_2 + 4] [i_4 - 1] [i_2 + 4] [i_2 + 4] [i_1] [i_0]))), ((min((arr_1 [i_2] [i_2]), (arr_8 [i_0] [i_1] [i_1] [i_1])))))) ^ ((((((127 ? 12503 : (arr_13 [i_2] [15])))) ? ((max((arr_12 [i_4] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (arr_4 [i_0 - 1] [i_0] [i_0 - 1])))) : ((1 << (var_6 - 3045125492))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((-(((((~(arr_5 [i_0] [i_0] [3])))) ? (min(3538229237219606009, (arr_12 [i_5] [i_5] [i_2] [3] [3] [i_0 + 2]))) : (((2305843000623759360 ? (arr_8 [i_5] [15] [i_2] [i_5]) : (arr_2 [i_0] [i_0]))))))))));
                                var_22 = (min(var_22, (((((min(1, (((((-127 - 1) + 2147483647)) >> (-213248668 + 213248689)))))) ? (arr_4 [i_0] [i_1] [i_2]) : (((((1656661262 ? 0 : (arr_1 [i_0 - 1] [i_0 - 1])))) ? (max(8187, (arr_19 [16] [1] [16] [16] [i_6]))) : (((-(arr_1 [13] [7])))))))))));
                                var_23 = (min(var_23, (((((67 >> (71 - 55))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_19));
    var_25 = var_6;
    #pragma endscop
}
