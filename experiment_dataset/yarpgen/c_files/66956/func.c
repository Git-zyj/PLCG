/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66956
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((9026924690368606779ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))));
                    arr_7 [(signed char)13] [(signed char)7] [i_2] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(arr_4 [i_0 - 2])))), (min((8ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (349967315))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))))));
                                var_21 *= ((/* implicit */short) ((int) ((var_19) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4294967279U)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_1]);
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) var_11);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 8589918208LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]))) : ((~(arr_8 [(short)5] [i_1] [0ULL])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)113), ((signed char)69))))) != (arr_13 [i_1] [i_1]))))));
                        arr_21 [i_0 - 3] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0 + 1] [i_1] [i_1] [i_7] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8627244158064772788ULL)) && (((/* implicit */_Bool) 8589918208LL))));
                        arr_27 [(signed char)4] [i_7] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -137924447)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [(signed char)13] [i_1] [i_1] [9LL]))))), (((/* implicit */unsigned int) arr_11 [i_2]))))) ? (((/* implicit */int) (unsigned short)52765)) : (((/* implicit */int) ((short) 4294967275U)))));
                        var_26 = ((/* implicit */signed char) arr_15 [i_0 - 2] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 2]);
                        var_27 = ((/* implicit */short) max((arr_8 [i_1] [15LL] [i_7]), (((/* implicit */unsigned long long int) ((signed char) (short)(-32767 - 1))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) (signed char)-1);
    var_29 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)2272));
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((263761159599760566LL), (((/* implicit */long long int) (unsigned short)52765)))))));
                    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)1))));
                }
            } 
        } 
        arr_35 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8]))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((4294967279U), (((/* implicit */unsigned int) (unsigned char)2)))))));
        arr_36 [i_8] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) var_11)) ? (arr_31 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((signed char) 15013136491804609303ULL)))))));
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_47 [i_8] [(signed char)7] [i_12] [i_12] [i_12] = max(((+(3127123300063992071ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_8] [i_8] [i_12] [i_11] [i_8]))))));
                            var_33 = (+(-8589918208LL));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_46 [i_8] [i_11] [i_12] [i_13] [i_13] [(signed char)1]))));
                            arr_48 [i_8] [i_8] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) arr_9 [i_8] [i_13] [i_12] [i_12] [i_11] [i_8]);
                        }
                        for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            arr_53 [i_8] [(signed char)3] [i_12] [(signed char)3] [i_8] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)87)) << (((((/* implicit */int) var_11)) + (3431)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52764)))))));
                            arr_54 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) ((_Bool) var_11)))));
                        }
                        for (int i_16 = 1; i_16 < 6; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */int) ((signed char) var_5));
                            var_36 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (short)-9648)) : (((/* implicit */int) (short)-1)))))));
                            var_37 = ((/* implicit */unsigned char) ((arr_28 [i_13]) / (((/* implicit */long long int) min((4294967279U), (((/* implicit */unsigned int) (unsigned short)52781)))))));
                            var_38 = ((/* implicit */signed char) var_5);
                            arr_57 [i_11] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) | (((1792163468U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52767)))))));
                        }
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((unsigned short) ((((/* implicit */_Bool) max(((unsigned short)52765), (((/* implicit */unsigned short) (short)12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8589918177LL)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (unsigned char)246))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) - (2502803828U))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (short i_20 = 1; i_20 < 6; i_20 += 4) 
                {
                    {
                        var_40 &= ((/* implicit */short) ((((/* implicit */int) arr_11 [4ULL])) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_46 [i_20 - 1] [i_18] [i_18] [(unsigned short)8] [i_19] [i_18])), (min(((unsigned short)52782), ((unsigned short)12803))))))));
                        arr_69 [i_17] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)12767)), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)111))))));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_58 [i_18]))));
                    }
                } 
            } 
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-18980)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)12768)) > (((/* implicit */int) (signed char)-3)))))) : (((-493430391485882731LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))));
            var_43 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (unsigned short)12771)) : (((/* implicit */int) max((var_15), (var_0)))))));
        }
        arr_70 [i_17] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) 0LL)) / (15013136491804609303ULL))));
    }
    for (unsigned char i_21 = 1; i_21 < 16; i_21 += 4) 
    {
        var_44 = ((/* implicit */unsigned short) min((var_44), (((unsigned short) max((arr_17 [i_21 - 1] [i_21] [i_21] [i_21] [i_21] [(unsigned char)1]), (arr_17 [i_21 + 1] [i_21] [i_21] [i_21] [i_21 - 1] [i_21]))))));
        arr_73 [i_21] = ((/* implicit */short) arr_8 [i_21] [i_21] [i_21]);
        var_45 -= ((/* implicit */_Bool) arr_5 [11LL] [i_21 - 1]);
        var_46 = ((/* implicit */unsigned short) ((short) (signed char)110));
        var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4398046511040ULL))));
    }
}
