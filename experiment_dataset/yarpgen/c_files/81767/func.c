/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81767
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned char) max((0ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) & (arr_1 [i_0 - 1])))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            arr_14 [17] [i_2] [9ULL] [i_2] [i_3] [i_4] [i_5 + 4] = (unsigned char)200;
                            arr_15 [i_1] [17ULL] [(unsigned char)12] [i_1] [i_2] [i_5] = ((/* implicit */int) min(((signed char)-94), ((signed char)-114)));
                            arr_16 [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */unsigned long long int) max(((unsigned char)192), ((unsigned char)240)));
                        }
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((((/* implicit */int) var_12)) < (var_13)))))), ((signed char)-52)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((-18) + (((/* implicit */int) (unsigned char)4)))))));
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) -858172951);
            arr_21 [i_1] [i_1] [16ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)-63)), (var_13)))), ((+(var_2)))));
            arr_22 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(var_11)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_6 - 1] [i_1] [i_6] [i_6])), (var_0)))) : (((((/* implicit */_Bool) arr_3 [i_6 - 2])) ? (((((/* implicit */_Bool) (unsigned short)16443)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_17 [10LL]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_18 += arr_17 [6];
                        arr_33 [i_7] [i_7 + 1] [i_7 - 3] [i_7] = ((/* implicit */signed char) arr_6 [i_8]);
                    }
                } 
            } 
        } 
        var_19 += ((/* implicit */signed char) arr_9 [5] [i_7 + 2] [i_7 + 4] [i_7 + 4]);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7 - 1])) || (((/* implicit */_Bool) arr_24 [i_7] [(signed char)4]))));
        var_21 |= ((/* implicit */long long int) var_12);
        var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_24 [i_7] [i_7]))))) ? (arr_8 [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 - 2]) : (((/* implicit */int) var_3))));
    }
}
