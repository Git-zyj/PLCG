/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8313
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
    var_14 = ((/* implicit */long long int) (-(((((/* implicit */int) var_11)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7606)) ? (((((/* implicit */_Bool) arr_7 [i_0] [5ULL] [i_0] [5ULL])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])))) : (((/* implicit */int) max((arr_7 [i_1] [i_1] [(unsigned short)13] [i_2]), (((/* implicit */short) var_4)))))))) * (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_4))))), ((~(4235090893U)))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((~(var_9))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)0)))))))));
                        var_18 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((0) / (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_3 [i_0] [(signed char)16] [(signed char)16])))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_13 [i_2] = ((/* implicit */unsigned char) var_6);
                        var_19 ^= ((/* implicit */unsigned char) arr_10 [i_4] [i_0] [i_1] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((/* implicit */int) max((var_21), (max((((/* implicit */int) (unsigned short)0)), (105265399)))));
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) (~(((((/* implicit */int) (signed char)1)) | (((/* implicit */int) var_7))))))), (var_2)));
}
