/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87165
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */int) (-(var_10)));
                            arr_17 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (var_10) : (((/* implicit */long long int) var_0)))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))))));
                        }
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_3 - 1])), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+((+(var_10))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */long long int) (unsigned char)48);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) ((-2085953133) > (arr_21 [i_5]))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        for (long long int i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 3; i_9 < 24; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            arr_35 [i_8] [i_7] [i_8] [i_8] [i_8] &= ((/* implicit */int) var_10);
                            var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_7 + 2] [i_6] [i_9 - 3])))));
                            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4765138313914522947LL)) ? (5929807123064434744LL) : (((/* implicit */long long int) 305117901))));
                            var_18 ^= ((/* implicit */_Bool) max((arr_34 [i_6] [i_7 + 3] [i_8] [(short)23] [i_8]), ((-(arr_34 [17] [i_9] [17] [i_9 - 3] [i_9])))));
                        }
                        var_19 = ((/* implicit */unsigned short) arr_24 [i_9] [i_8]);
                    }
                    var_20 &= ((/* implicit */unsigned long long int) arr_25 [i_6] [(signed char)8] [i_8]);
                    var_21 = ((/* implicit */int) max((var_21), (((int) ((int) (-(((/* implicit */int) arr_32 [i_6] [i_6] [i_8] [i_7 - 1] [i_8]))))))));
                }
            } 
        } 
    } 
}
