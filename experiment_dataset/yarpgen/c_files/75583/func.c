/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75583
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
    var_18 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)40)))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)64)), (arr_1 [i_0])))) || (((/* implicit */_Bool) (+(arr_1 [i_0])))))))));
        var_20 ^= ((/* implicit */unsigned char) (~((+(-419138203378060791LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [0LL] [i_1])))))));
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)7);
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned char) 419138203378060791LL);
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (-2601094696221910538LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_2] [i_2])) / (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))) : (arr_1 [i_1]))));
            arr_7 [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0LL))));
        }
        for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            arr_16 [i_5] [i_6] [(unsigned char)1] [i_4] [(signed char)6] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3 - 1])))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)69)) ? ((~(((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)76)))))) : (((/* implicit */int) (signed char)-72))));
                        }
                        var_25 ^= ((long long int) max((arr_6 [(unsigned char)14] [i_3 + 2] [i_4 - 2]), (((/* implicit */unsigned char) arr_5 [i_1] [i_3 + 2]))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [2LL]))))) | ((+(281474976710655LL)))));
                        var_27 = ((/* implicit */signed char) min(((unsigned char)151), ((unsigned char)186)));
                    }
                } 
            } 
            arr_17 [i_1] = (signed char)-17;
            var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)67)) ? (32767LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)72)))));
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_29 ^= min((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_1] [i_1] [8LL] [i_1] [i_7] [i_8] [(signed char)5])) | (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_3 - 1]))))), (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (288230376151711740LL))));
                            arr_28 [i_1] [i_3] = (unsigned char)16;
                            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 3])) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 - 1]))))) ? ((-(((/* implicit */int) arr_8 [i_3 + 2])))) : (((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_3 + 2])) : (((/* implicit */int) arr_8 [i_3 + 2]))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_3 + 1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) ((signed char) -6025830827634581848LL))) & (((/* implicit */int) (signed char)71))))));
        }
        /* vectorizable */
        for (signed char i_10 = 2; i_10 < 14; i_10 += 2) 
        {
            var_31 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_10 + 1] [i_10] [i_10 + 1] [i_10]))));
            arr_34 [i_1] [i_10] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_2 [i_1])))) * (((/* implicit */int) (signed char)-1))));
            arr_35 [i_10 + 1] = ((signed char) arr_10 [(signed char)8] [i_10 - 1] [i_10 - 1]);
        }
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_11] [i_11]))))), (min(((-(((/* implicit */int) arr_15 [(unsigned char)10] [i_11] [i_11] [i_11])))), (((/* implicit */int) arr_25 [i_11] [i_11] [(signed char)12] [11LL]))))));
        var_33 = arr_5 [1LL] [i_11];
    }
}
