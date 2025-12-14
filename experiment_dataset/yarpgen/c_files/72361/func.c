/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72361
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
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((var_4) & (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) var_13)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-27391))))))))));
        var_19 = ((/* implicit */unsigned int) 1351886154);
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)246))))), (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (var_0)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) (~(var_15)));
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) / (((long long int) arr_6 [i_0]))));
                }
                for (int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_24 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) var_2)) : (arr_10 [i_0] [(short)0] [i_2 - 1])));
                    arr_11 [i_0] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_2 + 1]) : (((/* implicit */int) (unsigned short)49290)));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (-(arr_6 [i_2 + 1])));
                        arr_14 [i_0] [i_0] [i_2 - 2] [i_0] [i_4] [i_5 - 1] &= ((/* implicit */unsigned char) ((8203357777583735421LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_2 [i_2 - 2] [i_2 - 2])) >= (var_2)));
                        var_27 = ((/* implicit */_Bool) (~(arr_7 [i_0] [i_1] [i_2 - 3] [i_2 - 1])));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35490)) - (((/* implicit */int) (unsigned short)35490))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                    }
                    for (int i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_29 *= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_15))) ? (((/* implicit */int) arr_5 [i_2] [i_7 - 1])) : ((-(-1047931952)))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_2 [i_7] [i_7 + 1])));
                    }
                    for (int i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_30 = var_6;
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9888)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)121))));
                        var_31 ^= ((arr_10 [i_2 + 1] [i_2 + 1] [18]) + (arr_10 [i_2 - 1] [i_8] [i_8]));
                    }
                    var_32 = ((/* implicit */unsigned char) (~(arr_15 [i_0] [i_0] [i_2] [i_4] [i_1])));
                }
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_2))))));
            }
            for (short i_9 = 3; i_9 < 20; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_32 [(short)13] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_10)) ? (-5264698456212427555LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_9] [i_10])))))));
                    arr_33 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [i_9 - 3] [i_9 - 3] [i_9 - 1] [i_1] [i_10])) || (((/* implicit */_Bool) 4294967275U))));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                var_34 += ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) (unsigned char)255))))));
                arr_35 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_9 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_9]))));
            }
            for (short i_11 = 3; i_11 < 20; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_12 = 1; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    arr_41 [i_0] [i_11 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
                    arr_42 [i_0] = ((/* implicit */short) arr_8 [i_11 - 2] [i_11] [i_12] [i_12 - 1] [i_12]);
                }
                for (int i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) (-(arr_1 [i_1])));
                    arr_46 [i_0] [i_1] [20U] [i_13 + 2] [i_13 + 2] [i_13 + 2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) <= (arr_6 [i_13 + 1])));
                    var_36 = ((/* implicit */int) arr_44 [i_0] [i_1] [i_11 - 2] [i_13 + 1]);
                    var_37 = ((/* implicit */long long int) arr_43 [0] [i_11 + 1] [i_1] [i_1] [i_0]);
                }
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (short)2047)))))));
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 20; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [15] [i_14] [i_11 - 3] [i_1])))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_11 - 2] [i_11] [i_14 - 1])) : (((/* implicit */int) var_12))));
                            arr_52 [i_0] [i_1] [i_11] [i_0] [i_15] [i_1] [i_15] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)218))))));
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(-427538176))) : (((/* implicit */int) ((var_7) >= (var_7)))))))));
                            var_42 *= ((/* implicit */short) arr_28 [i_0] [i_1] [i_14] [i_0] [(unsigned char)5]);
                        }
                    } 
                } 
                arr_53 [i_0] [i_1] = ((/* implicit */unsigned char) ((((arr_39 [(unsigned char)15] [i_1] [i_11 - 2] [i_0]) / (((/* implicit */unsigned int) -1654496980)))) & (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                var_43 = ((/* implicit */int) var_5);
            }
            for (short i_16 = 3; i_16 < 20; i_16 += 4) /* same iter space */
            {
                var_44 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-(8022902326042040115LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) > (arr_30 [i_0] [i_0] [i_16 - 1] [i_0] [i_0] [(unsigned char)16])))))));
                var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_16 - 3]))));
            }
            var_46 += (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_2)))));
        }
    }
}
