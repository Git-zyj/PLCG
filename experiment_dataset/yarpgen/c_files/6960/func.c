/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6960
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (2554191720U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)32768), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_4))))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)56)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) + (31735))))) <= (((/* implicit */int) max((var_6), (arr_0 [i_0] [i_0]))))))) : (((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)56)) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (31735))) - (32392))))) <= (((/* implicit */int) max((var_6), (arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            {
                arr_7 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_1])))) > (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) | (min((1740775565U), (((/* implicit */unsigned int) ((short) var_3)))))));
                var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) (short)32348))))));
                var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)79))))) ? (((/* implicit */int) (unsigned short)65521)) : ((-(((/* implicit */int) (unsigned short)26021))))))));
                arr_8 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2])))) : (((((/* implicit */_Bool) 6291614602799423009LL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
        {
            arr_15 [i_4 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-26722)) : (((/* implicit */int) (_Bool)1)))))));
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (signed char)83))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */short) (-(max((((/* implicit */unsigned int) arr_0 [i_5] [i_3])), (((unsigned int) arr_3 [i_3] [i_5]))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_22 [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)154)) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (-6291614602799423010LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((1132325316677544110LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)45741)))) : (((/* implicit */int) min((arr_17 [i_3] [i_3]), (((/* implicit */short) var_3))))))));
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned short) arr_17 [i_6] [i_7])), (var_10))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)70), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79))))) : (((((/* implicit */int) (unsigned char)217)) / (((/* implicit */int) (unsigned short)65529))))));
                        arr_29 [i_3] [i_7] [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)158))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((arr_13 [i_6] [i_3]), (((/* implicit */unsigned short) (unsigned char)110)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_3] [i_7] [(signed char)4] [i_7] [i_9] = ((/* implicit */signed char) (((+(((/* implicit */int) var_7)))) + (((/* implicit */int) var_4))));
                        var_21 = ((/* implicit */int) var_2);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) : (4294967295U))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)21)) ? (3186607145U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))));
                        var_24 = ((/* implicit */unsigned int) (unsigned char)181);
                        var_25 = ((/* implicit */unsigned char) ((long long int) ((int) arr_31 [i_3] [i_7] [i_6] [i_3] [i_3])));
                    }
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 6; i_11 += 4) 
                    {
                        arr_40 [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_6 [i_11 - 1] [i_11 - 1]))))) ? (((/* implicit */int) max((((signed char) (_Bool)1)), (((signed char) var_8))))) : (((((/* implicit */_Bool) ((arr_5 [i_5]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)41761)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_6 [i_3] [(unsigned char)11]))))))));
                        var_26 = ((/* implicit */long long int) max((((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(arr_27 [i_3] [i_5] [i_3] [i_7] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_30 [i_11 - 1] [i_7] [9LL] [i_3] [i_3])) ? (4294967295U) : (var_5)))))));
                        arr_41 [i_3] [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (+(max((arr_16 [i_11 - 3] [i_11 + 1]), (((/* implicit */unsigned int) var_6))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) max((var_13), (((/* implicit */long long int) var_7)))))), (arr_21 [i_3] [i_5] [(_Bool)1])));
                        var_28 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 4008068806U)) ? (3942090710591454079LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65505))))) >> (((((/* implicit */int) (signed char)-125)) + (155))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_0)))))))));
                        var_29 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (5665307035994256848LL))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12623))) : (-5665307035994256849LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_19 [i_5] [i_3] [i_6])))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_50 [i_3] [i_5] [i_3] [i_13] [i_14] = ((/* implicit */short) (~(((/* implicit */int) (short)8184))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_14] [i_6] [i_3])) ? (((/* implicit */int) arr_20 [i_13] [i_6] [i_3])) : (((/* implicit */int) arr_20 [i_14] [i_5] [i_3])))))));
                    }
                    var_33 &= ((/* implicit */long long int) (_Bool)1);
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(-1LL))))));
                }
                for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_35 ^= ((/* implicit */unsigned int) ((unsigned short) var_13));
                    var_36 = ((/* implicit */signed char) arr_13 [i_3] [i_3]);
                }
                var_37 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_39 [i_3] [1] [i_5] [i_6] [(signed char)9]))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [(short)5] [i_6] [i_6] [(short)5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13))) >= (((/* implicit */long long int) var_0)))))));
            }
            /* LoopNest 3 */
            for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        {
                            arr_60 [i_16] [(_Bool)1] [i_16] [i_17] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_16]))))));
                            var_38 |= ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) < (5868489346289634362LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_16]))) : ((-(arr_16 [i_3] [i_3])))))));
                        }
                    } 
                } 
            } 
            arr_61 [i_5] = ((/* implicit */unsigned char) ((var_0) > ((+(max((((/* implicit */unsigned int) (short)8158)), (var_5)))))));
        }
        var_39 = (unsigned short)0;
        arr_62 [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21594))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (2218827023U)))));
    }
    for (unsigned char i_19 = 2; i_19 < 17; i_19 += 4) 
    {
        arr_67 [i_19] = ((/* implicit */_Bool) min((min((var_3), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) var_8))));
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (-5868489346289634357LL)))) ? (((/* implicit */int) arr_0 [i_19] [i_19])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_63 [i_19]))))))) : (arr_65 [i_19])));
    }
}
