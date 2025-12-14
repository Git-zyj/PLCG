/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7477
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
    var_15 = ((/* implicit */_Bool) max(((short)-6256), (var_1)));
    var_16 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (~(max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (short)-18453))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) min((((/* implicit */short) arr_3 [i_0])), ((short)18444))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        arr_7 [(short)12] = ((/* implicit */unsigned int) ((long long int) var_9));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_3 + 1] [i_3 + 1])) : (((((/* implicit */_Bool) 4119110180842579968LL)) ? (((/* implicit */int) arr_8 [i_3] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_3] [i_3]))))));
            var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((634314032580396514ULL) - (((/* implicit */unsigned long long int) var_13)))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 1] = ((/* implicit */unsigned short) ((((long long int) var_4)) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1])))));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)26474))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (17812430041129155090ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18452))) : (((((/* implicit */_Bool) arr_14 [i_6] [i_5])) ? (arr_16 [i_2] [i_4] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            arr_23 [i_4] [i_3 + 1] [i_4] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_7] [i_7])) - (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8019))) : (2199021158400LL)));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((_Bool) -3756659523354708237LL)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((634314032580396514ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26474)))))) ? ((-(((/* implicit */int) arr_22 [i_5] [i_4] [i_3] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2] [(_Bool)1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_21 [i_2] [i_3 + 1] [i_4] [i_5] [i_5] [i_7]))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) 17812430041129155100ULL))));
                        }
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_2] [13ULL] [i_4] [i_5]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_13))))));
                        var_26 *= ((/* implicit */short) ((unsigned int) arr_26 [i_9] [i_8] [i_3 + 1] [i_2]));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_2 + 1] [i_2 - 1]))) - (14LL)));
        }
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_2] [i_2] [i_10] [i_10] [9LL] [i_10])) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-47)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_38 [i_11] [12LL] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) var_0)))))), (((unsigned short) max((667987409U), (((/* implicit */unsigned int) var_10)))))));
                    arr_39 [(unsigned short)1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-18457)) ? (max((((/* implicit */unsigned long long int) 4758118640928569841LL)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) min(((short)-18438), (((/* implicit */short) (_Bool)1))))), ((unsigned short)39061)))))));
                }
                var_29 = ((/* implicit */short) (((!(arr_22 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) ((signed char) 2255543535U))) ^ (((/* implicit */int) ((unsigned short) (signed char)48)))))));
            }
            for (long long int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                arr_42 [i_2] [(unsigned short)12] [i_2 + 1] |= ((/* implicit */unsigned int) max((((((/* implicit */int) max((var_11), ((unsigned short)27265)))) - ((~(((/* implicit */int) (unsigned short)39061)))))), (((/* implicit */int) ((_Bool) var_8)))));
                var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) <= ((~(2645879175026989630ULL)))))), (((max((arr_17 [i_2] [i_10] [6LL] [(signed char)12] [i_13 - 1]), ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25809))))) : (((/* implicit */int) max((var_14), (var_5))))))));
                arr_43 [i_13] [i_10] [i_13 - 1] = ((/* implicit */unsigned int) (!(arr_24 [i_2] [i_2] [i_2])));
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            arr_46 [i_2] [i_2] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) -3366689536926495802LL))));
            arr_47 [i_2 + 1] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_2 + 1] [i_14])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)17))))))));
        }
        var_31 = ((/* implicit */long long int) min((var_31), (((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [(signed char)8])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_33 [i_2] [i_2 - 1]))))) : (((unsigned long long int) -863996571)))))));
    }
    for (short i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26475)) ? (1LL) : (2199021158400LL)));
                        /* LoopSeq 4 */
                        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 2) 
                        {
                            var_33 ^= (((!(((/* implicit */_Bool) arr_51 [i_15] [(_Bool)1] [i_18])))) ? (min((max((((/* implicit */unsigned int) var_9)), (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [(short)1] [(short)4] [(short)4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_52 [i_19]))))))) : (((((/* implicit */_Bool) (short)-18438)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) : (4145317772U))));
                            var_34 = ((/* implicit */unsigned int) var_2);
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13036846138675917733ULL)) ? (arr_51 [10LL] [5LL] [5LL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned short)65521)))))));
                            arr_59 [i_16] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_63 [i_16] [i_18] [i_17] [(_Bool)1] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [7LL])) ? (((/* implicit */unsigned long long int) -2199021158400LL)) : (634314032580396514ULL)));
                            arr_64 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_20])) ? (arr_49 [i_15]) : (arr_49 [i_15])));
                        }
                        for (int i_21 = 1; i_21 < 13; i_21 += 2) 
                        {
                            arr_67 [i_21 + 1] [i_21 - 1] [i_16] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((_Bool) (signed char)105));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-105)) & (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            var_37 ^= ((/* implicit */_Bool) ((unsigned short) arr_5 [i_17]));
                            arr_70 [i_15] [i_16] [2LL] [i_18] [2LL] [2LL] = ((unsigned int) ((((/* implicit */unsigned long long int) ((arr_61 [i_18]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_15] [i_16] [i_17] [i_18] [i_22]))) | (var_2)))));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (-(((((/* implicit */_Bool) -1LL)) ? (max((arr_26 [(short)13] [i_16] [i_18] [i_22]), (((/* implicit */long long int) arr_21 [i_22] [i_18] [i_17] [i_17] [i_16] [i_15])))) : (((((/* implicit */_Bool) (unsigned short)32414)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (18LL))))))))));
                        }
                        var_39 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) arr_61 [i_15])), ((short)25809))))))), (((unsigned int) var_12))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-5551103650747124995LL), (((/* implicit */long long int) min(((signed char)102), (((/* implicit */signed char) (_Bool)1)))))))) ? (4066048787U) : (((var_13) >> (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) 1LL)) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_71 [i_23 - 1])), (4970385874908479228LL)))), ((+(17812430041129155129ULL))))) : (var_8)));
        arr_74 [i_23] = ((/* implicit */signed char) 3509465865U);
        var_42 += (((((((_Bool)0) ? (((/* implicit */long long int) -1396204411)) : (18014398509479936LL))) & (((/* implicit */long long int) (+(((/* implicit */int) arr_73 [i_23 - 1]))))))) / (((long long int) var_0)));
        var_43 *= ((/* implicit */int) ((unsigned short) (+(arr_72 [i_23]))));
        var_44 -= ((signed char) min((((((/* implicit */int) (short)3181)) << (((13753689705078532330ULL) - (13753689705078532321ULL))))), (max((((/* implicit */int) (_Bool)0)), (-1396204411)))));
    }
    var_45 = ((/* implicit */_Bool) var_1);
}
