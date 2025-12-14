/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68832
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) var_12))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 268419072U)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned short)16);
        arr_5 [i_0 + 1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_1]))))), (min((min((((/* implicit */unsigned int) (unsigned short)17)), (arr_9 [i_1]))), (((/* implicit */unsigned int) arr_7 [i_1] [i_1]))))));
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_13 [i_3]))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */long long int) arr_8 [i_1]);
                            arr_25 [i_1] = ((/* implicit */unsigned short) (+((+(4026548223U)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9768)) ? (arr_20 [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) arr_9 [i_1]))))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))))) : (((/* implicit */int) var_13)))))));
            }
            arr_26 [i_1] = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) arr_21 [i_1] [i_2] [i_2] [i_1] [i_1]))))) : ((((!(((/* implicit */_Bool) arr_12 [i_1])))) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_22 [i_1] [i_1] [i_2 - 1] [i_2] [i_2 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (-393573567))))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_19 ^= ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_28 [i_6 + 1] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))))));
            var_20 = (+(min((var_8), (((/* implicit */unsigned int) ((var_4) >= (arr_14 [i_1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -146296597)) ? (arr_17 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1])))))) : (arr_21 [i_1] [i_6 + 1] [i_7] [i_7] [i_6])));
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */unsigned int) ((var_16) + (((/* implicit */int) arr_12 [i_1]))))) : (arr_9 [i_1])));
                var_23 = ((/* implicit */short) ((((unsigned int) arr_12 [i_1])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_6] [i_7])) ? (((/* implicit */int) (short)9768)) : (((/* implicit */int) var_11)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                arr_36 [i_1] [i_1] [i_8] &= ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [i_8]);
                arr_37 [i_1] = ((short) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8]);
                arr_38 [i_1] [i_1] [i_6 + 1] [i_8] = ((/* implicit */int) arr_6 [i_1] [i_1]);
                arr_39 [i_8] [i_6 + 1] [i_1] = ((/* implicit */short) arr_21 [i_1] [i_6] [i_1] [i_8] [i_8]);
            }
            arr_40 [i_1] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)69)), ((unsigned short)0))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_1])))))) | (((((/* implicit */_Bool) (unsigned char)180)) ? (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_11 [i_1] [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_9])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_43 [i_9] [i_1]))))) : (((arr_31 [i_9] [i_1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (min((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            arr_44 [i_1] [i_9] = ((/* implicit */int) (unsigned short)17);
            arr_45 [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_1]))));
        }
        arr_46 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1])) ? (arr_27 [i_1]) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((arr_13 [i_1]), (((/* implicit */short) arr_29 [i_1])))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (146296581) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_4)))))))));
    var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_8)))) : (max((((/* implicit */unsigned long long int) var_14)), (1382612359310251055ULL))))))));
}
