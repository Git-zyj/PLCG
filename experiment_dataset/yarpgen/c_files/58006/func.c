/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58006
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) 1368857137))))), (min((((/* implicit */short) arr_9 [i_0 + 1] [i_1 - 1] [(signed char)9] [i_3])), (arr_0 [i_3])))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) 
                            {
                                var_15 ^= ((/* implicit */int) (signed char)62);
                                var_16 += ((unsigned short) max((((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [12LL] [i_2] [i_3] [13]))) : (2256591996002377489ULL))), (((/* implicit */unsigned long long int) (+(4122395911176596958LL))))));
                            }
                        }
                    } 
                } 
                var_17 += ((/* implicit */unsigned char) 2130706432U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 24; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    arr_23 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) ((unsigned char) 1445655902030384613ULL));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) : (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned int) 1271810875)) : (515820795U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) | (((/* implicit */int) arr_18 [i_5]))))) || (((/* implicit */_Bool) ((signed char) var_2))))))) : (16U)));
                    arr_24 [i_5] [i_6] = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_5 - 2])))))));
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (signed char)52))) | (((/* implicit */int) ((unsigned char) ((1152921504606846976ULL) >> (((arr_21 [i_8]) - (7877207092167023539ULL)))))))));
                    var_20 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -957960262)) >= (29ULL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 3; i_10 < 23; i_10 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned int) arr_22 [i_9 + 3] [i_5 - 1]);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9 + 1])) ? (arr_21 [i_5 - 3]) : (((/* implicit */unsigned long long int) arr_26 [i_9 - 2]))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 5521163500209726980ULL)) ? (8504499667345408885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) | (7507103471174208447ULL))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)223)) : (arr_17 [i_5]))) - (172)))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -459791243)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12])))))));
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1906)) ? (524213573U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6] [i_8] [i_9 + 3] [i_12] [i_12] [i_12 - 3])))));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) | (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || ((_Bool)0))))));
                        arr_37 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_6] [11U] [i_9])) ? ((-(((/* implicit */int) arr_33 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5] [(signed char)11])))) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                arr_44 [i_5] [i_6] [i_8] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)-35), ((signed char)-55))))))) ? (max((((((/* implicit */_Bool) arr_28 [i_6] [i_8])) ? (((/* implicit */unsigned long long int) 1309414777)) : (arr_21 [i_13]))), (((/* implicit */unsigned long long int) (-(3653348919U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)1), (((short) arr_30 [i_14] [i_13] [i_8] [i_6] [i_5]))))))));
                                var_27 = arr_25 [i_6] [i_13] [i_14];
                            }
                        } 
                    } 
                }
                var_28 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (3029114947U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (2560167998U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) (signed char)73))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_18 [(signed char)18])))) : ((+(arr_17 [i_5]))))))));
            }
        } 
    } 
}
