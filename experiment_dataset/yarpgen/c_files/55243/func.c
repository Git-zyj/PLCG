/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55243
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)0))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */signed char) arr_0 [i_0 + 4] [i_0 + 1]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_1 [3LL] [i_1]);
                    arr_14 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)26138))));
                    var_14 = ((/* implicit */_Bool) arr_10 [(unsigned char)6] [(short)2]);
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39397)) + (((/* implicit */int) (_Bool)1)))))));
                    arr_15 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2182)) ? (3489145931U) : (805821365U)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)39397)) >> (((((/* implicit */int) var_9)) - (68)))))) | (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_4] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((-3154947647710285160LL) | (arr_0 [(unsigned short)14] [i_7]))) >= (((-1658361705116166846LL) - (-8058948152583153342LL))))))));
                            arr_26 [i_6] [i_5] [i_6] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_19 [i_5] [i_6] [(unsigned short)11])) + (((/* implicit */int) (short)-7278)))) : ((+(((/* implicit */int) var_4))))))));
                            arr_27 [i_4] [i_4] [(_Bool)1] [i_7] = ((unsigned char) min((-8080755800438802445LL), (((/* implicit */long long int) arr_16 [i_4 - 1]))));
                        }
                    } 
                } 
                arr_28 [(_Bool)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_4 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_4] [i_4 - 1]) : (arr_0 [i_4] [i_4 + 1]))) : (arr_0 [i_4] [i_4 - 1])));
                arr_29 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_4] [i_5] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2])) + (2147483647))) >> (((/* implicit */int) ((_Bool) (unsigned char)19)))))) ? ((~((-(((/* implicit */int) (unsigned short)39397)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_4] [i_4] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_24 [(unsigned char)8] [(unsigned char)20] [i_4] [(unsigned char)13] [(unsigned char)13] [i_5]))))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_5] [i_4]);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39397)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) arr_0 [i_4] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_21 [i_4] [18LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) : (268402688U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_4] [i_9])), (((((/* implicit */_Bool) 8080755800438802452LL)) ? (min((var_2), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                    arr_36 [i_5] = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned int) arr_21 [i_4] [i_4])), (var_3))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (3489145931U))))))), (((unsigned int) ((arr_20 [i_4] [(_Bool)0] [i_9]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26138))))))));
                }
                arr_37 [i_5] [i_5] [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
