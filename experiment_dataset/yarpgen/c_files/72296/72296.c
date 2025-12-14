/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_3 [i_0 - 2] [i_1] [i_1]);
                var_16 = ((min((((!(arr_5 [i_1]))), (max((arr_2 [i_0 + 1]), (arr_4 [i_0] [i_0] [i_0])))))));
                var_17 = (min(var_17, ((min(((max(-108, 31325))), (((((max((arr_1 [i_1]), (arr_2 [i_0]))))) & (((arr_2 [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_2 [i_1]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_18 = (((((+(((arr_10 [i_2]) ? (arr_11 [i_3] [i_2]) : (arr_7 [i_3] [i_2])))))) ? ((((max((arr_11 [i_2 + 2] [i_3]), (arr_7 [i_2 - 2] [i_2 - 2])))) - ((max((arr_11 [i_2 - 3] [15]), (arr_7 [i_2 - 1] [13])))))) : ((((((max((arr_11 [i_2] [i_3]), (arr_11 [i_2 - 2] [i_3]))))) < (((arr_10 [i_2]) - (arr_7 [i_2] [i_2]))))))));
                arr_12 [i_3] [i_2] = (((max((((arr_7 [2] [2]) << (((arr_8 [i_2] [i_3]) + 33)))), (arr_7 [i_2] [i_2]))) == (max((((arr_8 [i_2] [i_3]) ^ (arr_7 [0] [0]))), ((((arr_8 [i_3] [i_2]) && (arr_8 [i_3] [i_2]))))))));
                var_19 = (((((((arr_7 [i_2] [i_2]) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (arr_10 [i_3]))) / (min((arr_7 [i_2 + 1] [i_3]), (arr_10 [i_2])))))) ? (max(((-(arr_9 [i_2]))), (((arr_10 [i_2]) / (arr_11 [i_2] [i_2]))))) : (((min(9359, 31325)))));
                var_20 = (min(var_20, ((min(((max(((~(arr_8 [i_2] [i_3]))), (arr_7 [6] [i_2])))), (((arr_7 [i_2] [i_2]) ? ((((arr_7 [13] [i_3]) ? (arr_11 [i_2] [i_3]) : (arr_11 [i_2] [i_2])))) : (arr_9 [i_2 - 2]))))))));
                var_21 |= (min(((((~(arr_7 [i_3] [i_3]))))), (((((~(arr_8 [i_2] [i_3])))) ^ ((~(arr_10 [i_2])))))));
            }
        }
    }
    var_22 = var_6;
    var_23 = ((~((max(16913, 34230)))));
    #pragma endscop
}
