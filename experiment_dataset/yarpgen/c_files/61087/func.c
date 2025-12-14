/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61087
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), (var_0))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0 + 1] [(unsigned short)11] = ((/* implicit */_Bool) min((4072330720U), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) / (((unsigned int) 1782527487U))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    var_13 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (!((_Bool)1)))) <= (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_7 [i_0])))))));
                    arr_8 [1ULL] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) max(((short)-31029), (((/* implicit */short) (_Bool)0))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_14 = var_11;
                    arr_11 [i_3] [i_1 - 1] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_0]))) : (var_3)))));
                    arr_12 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [(unsigned char)2] [i_1]))));
                }
                for (int i_4 = 3; i_4 < 14; i_4 += 1) 
                {
                    arr_16 [(_Bool)1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    arr_17 [(unsigned char)11] [i_1 + 3] [i_4 + 1] [i_4 - 1] = (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_10 [i_4] [8U] [8U] [i_0 + 1])))) : (((/* implicit */int) var_0)))));
                    arr_18 [(unsigned short)1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) arr_3 [13ULL] [i_1]);
                }
                var_15 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1]))) : (arr_15 [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((+(((/* implicit */int) (signed char)114))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-19810)), (18446744073709551615ULL)));
                            arr_23 [6U] [i_1] [i_5] [6U] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)26170)))), (((((/* implicit */int) (short)-16675)) | (((/* implicit */int) (unsigned short)20586))))))), (min((8058562980657173592ULL), (((/* implicit */unsigned long long int) (unsigned char)73))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)14374)) ? (8233311587547076427ULL) : (((/* implicit */unsigned long long int) -8760265313847819507LL)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) <= (((/* implicit */int) ((signed char) arr_1 [i_0 + 1] [(signed char)12]))))))));
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) min((var_0), (var_5))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */short) max(((unsigned char)234), (((/* implicit */unsigned char) (signed char)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    var_19 -= ((/* implicit */_Bool) arr_29 [i_7] [i_7]);
                    /* LoopSeq 2 */
                    for (signed char i_10 = 2; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        arr_33 [i_7] [i_7] = ((((/* implicit */_Bool) arr_26 [i_9 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)3659))) / (2799656082U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))));
                        var_20 = (~(((/* implicit */int) var_0)));
                    }
                    for (signed char i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        arr_36 [i_7] [i_7] [i_7] [i_8] [i_9 - 2] [i_11] = arr_27 [i_7];
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) var_2)) : ((-2147483647 - 1))))) ? (((unsigned int) arr_34 [i_7 - 1] [i_11] [i_9 - 1])) : (arr_28 [i_9 + 1] [i_9] [i_9 - 1])));
                    }
                    arr_37 [i_7] = ((/* implicit */unsigned char) (short)-14374);
                }
                for (unsigned char i_12 = 3; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */short) var_0);
                                arr_45 [i_7] [(unsigned char)16] [i_7] [i_8] [(unsigned char)16] = (unsigned short)26138;
                                var_23 = ((/* implicit */signed char) (-(arr_26 [i_8 - 1])));
                                arr_46 [i_7] [i_13] [(signed char)6] [i_8 - 1] [i_7] = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                    arr_47 [(unsigned char)16] [i_8] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((-34006869), (((/* implicit */int) arr_40 [14]))))) >= (arr_44 [i_7 + 1] [i_7 + 1] [i_8 - 1] [i_8] [i_7 + 1] [i_12 - 3]))))) <= (((unsigned int) (short)23443))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 3; i_15 < 16; i_15 += 3) /* same iter space */
                {
                    arr_51 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) (unsigned char)98))));
                    arr_52 [i_7] = ((/* implicit */_Bool) (-(1080863910568919040LL)));
                }
                /* LoopSeq 2 */
                for (unsigned char i_16 = 2; i_16 < 14; i_16 += 2) 
                {
                    var_24 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_39 [i_7] [i_7] [i_7])))), (((/* implicit */int) ((((/* implicit */unsigned int) arr_34 [i_16 + 2] [i_7] [i_7])) == (max((((/* implicit */unsigned int) var_4)), (2351022649U))))))));
                    arr_55 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_8] [(_Bool)1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 134954236781228833LL)))))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    arr_58 [i_17] [i_8] [i_8] |= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26140))))), ((+(((/* implicit */int) arr_40 [i_17]))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_3))));
                    var_26 = ((unsigned long long int) (-(((/* implicit */int) max((var_7), (((/* implicit */short) var_4)))))));
                }
                var_27 ^= max((((/* implicit */short) (!(((/* implicit */_Bool) 7776970518160655184LL))))), ((short)11258));
            }
        } 
    } 
}
