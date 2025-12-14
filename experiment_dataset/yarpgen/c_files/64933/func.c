/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64933
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22268)))))) && (((/* implicit */_Bool) min((arr_2 [i_0]), ((unsigned char)251)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44819)) ? (((/* implicit */unsigned int) var_2)) : (var_18)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_0] [i_1 - 1] [i_1 + 1])) - (var_9))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8542))) | (max((((/* implicit */unsigned int) (unsigned short)8530)), (var_3))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_3 [i_2] [(unsigned short)18]))))))))));
                            arr_13 [(short)9] [i_2] [(short)9] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)75), (arr_2 [i_1 + 1]))))) >= ((-(var_5)))));
                            arr_14 [i_3] [i_3] [i_3] [i_3] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_3] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])), (var_4)))) ? (((/* implicit */int) max(((unsigned char)170), (var_16)))) : (((/* implicit */int) max(((unsigned char)180), (arr_3 [i_0] [i_0]))))))) != (max((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 + 1]))))));
                            arr_15 [i_0] [i_0] [(_Bool)1] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)37003)) ^ (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1] [i_1 + 1])) ? (-7704686487273114182LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) | (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)194)), (var_7))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59900)) >> (((((/* implicit */int) arr_8 [i_2] [i_2])) - (61230))))))))))))) : (((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)37003)) ^ (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1] [i_1 + 1])) ? (-7704686487273114182LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) | (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)194)), (var_7))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59900)) >> (((((((/* implicit */int) arr_8 [i_2] [i_2])) - (61230))) + (4294)))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [15ULL] [i_1 + 1] [15ULL] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (3754815889U))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1]))))) != (max((((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_16))))), ((+(((/* implicit */int) var_10))))))));
                            var_22 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((-5030038723689863122LL), (((/* implicit */long long int) (unsigned char)62))))) ? (min((arr_5 [i_1 + 1] [i_4] [i_5]), (((/* implicit */unsigned int) (unsigned short)8534)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)10)), (var_14))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_5]), (((/* implicit */long long int) arr_18 [i_5] [i_4] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [13] [i_0])) ? (arr_9 [i_0] [i_1] [i_4] [i_4]) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_17)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (((((/* implicit */_Bool) 3385470045U)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */unsigned long long int) max((arr_10 [i_1 + 1]), (((/* implicit */unsigned int) arr_2 [i_1 - 1])))))));
                var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_1 - 1])), (var_7)))) ? (((arr_5 [i_0] [i_1] [i_1 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1 + 1] [i_0])) && (((/* implicit */_Bool) var_14))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
    {
        var_25 += ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (arr_17 [i_6]))), (((((/* implicit */int) arr_21 [0ULL] [i_6])) >> (((/* implicit */int) var_0)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (485513216)))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_17))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                {
                    var_26 = ((/* implicit */_Bool) min((((-1979244457) + (((/* implicit */int) (unsigned short)37369)))), (((((/* implicit */_Bool) 1697914265)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))));
                    arr_29 [i_8] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)0)))), (max((8051823636773574185ULL), (((/* implicit */unsigned long long int) arr_6 [i_6] [i_6]))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_2)))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), ((~(2194593480U)))))));
                    var_27 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (var_1)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (arr_1 [i_6])))) : (min((var_9), (((/* implicit */long long int) arr_11 [i_6] [i_6] [i_8] [i_8 - 1] [i_6])))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((-4248375084077107100LL), (((/* implicit */long long int) arr_18 [i_6] [i_6 - 1] [i_6 + 1] [i_6]))))) && (max((var_6), (var_0)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        var_28 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_6 + 1]), (((/* implicit */unsigned long long int) (unsigned char)1))))) ? (min((arr_7 [i_6 - 1]), (arr_7 [i_6 + 1]))) : (((/* implicit */unsigned long long int) (~(8231568823549089658LL))))));
                        arr_32 [i_6] [i_6] [i_8 + 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)0)) - (((/* implicit */int) (unsigned char)131)))) / (((/* implicit */int) var_16))))) < (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_30 [i_6])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                        {
                            var_29 = max((((/* implicit */long long int) min((var_16), ((unsigned char)16)))), (min((arr_19 [i_7] [i_7] [i_10 + 1]), (((/* implicit */long long int) (unsigned char)240)))));
                            var_30 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_10 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_0 [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-4)) : (485513186)))))), (((/* implicit */unsigned long long int) ((((arr_23 [i_7] [i_8]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) << (((min((-485513187), (((/* implicit */int) var_14)))) + (485513214))))))));
                            arr_36 [i_8 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_8] [i_6]))) == (arr_30 [i_6 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (((((/* implicit */_Bool) arr_30 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_6]))) : (var_18)))))), (((((/* implicit */_Bool) ((10394920436935977422ULL) ^ (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10 + 3] [i_6 - 1]))) : (max((arr_31 [i_8] [i_8 + 1] [i_8]), (((/* implicit */long long int) var_8))))))));
                            arr_37 [i_7] [i_9] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned short) (unsigned char)1))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)9947)) && (((/* implicit */_Bool) var_1))))), (((arr_21 [i_6] [i_7]) ? (arr_19 [i_6 - 1] [i_6 - 1] [(unsigned short)12]) : (((/* implicit */long long int) 92908428))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            var_31 -= ((/* implicit */unsigned long long int) ((-1415199704) >= (((/* implicit */int) arr_28 [i_11] [i_11 - 2]))));
                            var_32 &= ((/* implicit */int) ((var_11) && (var_6)));
                        }
                        for (unsigned int i_12 = 3; i_12 < 13; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((max((((/* implicit */unsigned int) (unsigned char)4)), (var_18))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)(-32767 - 1))), (1858537204))))))), (max((max((((/* implicit */long long int) var_4)), (var_9))), (((/* implicit */long long int) max((arr_10 [i_8]), (((/* implicit */unsigned int) var_8)))))))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (1764664232U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_8 + 1] [i_8 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        }
                        var_35 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */unsigned long long int) var_18)) : (arr_7 [i_8]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6 - 2] [i_6 + 1]))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_35 [i_6 + 1] [i_7] [i_6 + 1])) : (((/* implicit */int) var_6)))))))));
                        var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 791458693U)) | (var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_2 [i_7])) - (61))))))))), (min((max((((/* implicit */unsigned long long int) (unsigned char)1)), (arr_30 [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9579682742719577696ULL)) ? (((/* implicit */int) arr_23 [i_6] [i_7])) : (((/* implicit */int) arr_22 [i_8] [i_8 - 1])))))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_6])) && (((/* implicit */_Bool) (unsigned short)34466))))), (var_4)))) >> (((max((max((3463326563U), (arr_33 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 2]))), (((/* implicit */unsigned int) ((485513193) | (((/* implicit */int) var_6))))))) - (3463326542U)))));
                    var_38 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3463326563U))) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_17)))))))) << (((((/* implicit */_Bool) max((((/* implicit */short) arr_28 [i_6] [6])), ((short)32766)))) ? (((((/* implicit */int) var_16)) & (-1858537215))) : (((/* implicit */int) arr_11 [i_13] [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                    arr_48 [i_6 - 1] [i_13] [i_6 - 1] = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) -6671849799809768731LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_22 [7ULL] [7ULL]))))), (((((/* implicit */_Bool) (unsigned char)34)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 1; i_15 < 13; i_15 += 1) 
                    {
                        var_39 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_6 - 1] [i_14] [i_15 + 1]) : (((/* implicit */unsigned int) arr_17 [i_6]))))) ? (((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */int) arr_35 [i_15] [(_Bool)1] [i_6])) : (((/* implicit */int) (unsigned char)107)))) : (((((/* implicit */_Bool) 13662557148352238113ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_41 [i_15 + 1])))))))));
                        var_40 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)225)) ^ (((/* implicit */int) arr_28 [i_6 - 2] [i_6 - 1]))))), (((((/* implicit */_Bool) (unsigned short)15925)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-6545173410051563836LL)))));
                    }
                    var_41 -= ((/* implicit */_Bool) max((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30883))) - (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_6 + 1] [10U])) ? (((/* implicit */int) (unsigned short)17728)) : (((/* implicit */int) var_14))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -246863326314067668LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) + (((/* implicit */int) min(((short)-17366), (((/* implicit */short) var_0))))))))));
                }
            } 
        } 
        var_42 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [2LL] [i_6] [i_6] [2LL])) ^ (((/* implicit */int) arr_23 [i_6 - 2] [i_6 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) max((-6211069415531094931LL), (((/* implicit */long long int) arr_45 [i_6 - 2] [i_6]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_22 [i_6 - 2] [13LL]), (((/* implicit */short) arr_28 [i_6] [8LL]))))), (min((var_12), (((/* implicit */unsigned short) arr_40 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6]))))))))));
    }
    var_43 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */int) var_16)) >> (((/* implicit */int) var_8)))), (((/* implicit */int) max(((_Bool)1), (var_11)))))), (((/* implicit */int) var_0))));
    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_6) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) ^ (max((((/* implicit */long long int) var_12)), (6597069766656LL)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_8))))) >= (((/* implicit */int) max((var_10), (var_16)))))))));
}
