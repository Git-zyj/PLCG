/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7827
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
    var_10 = ((/* implicit */unsigned short) 6618829532010368902ULL);
    var_11 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) var_0)), (11827914541699182713ULL))) == (max((6618829532010368902ULL), (((/* implicit */unsigned long long int) var_5)))))) ? (max((((var_4) + (((/* implicit */int) var_2)))), (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */int) var_0)) == (((/* implicit */int) var_8)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_7)) > (((/* implicit */int) var_5)))) ? (((((/* implicit */int) arr_3 [i_0] [2] [i_2 - 1])) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_1]))))))) + (((/* implicit */int) var_3))));
                    arr_8 [i_0] [i_1] [8] [i_1] = (((-((+(((/* implicit */int) (unsigned short)45554)))))) + (arr_4 [i_0]));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45554)) || (((/* implicit */_Bool) (unsigned short)45545))))) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    for (int i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (var_6)));
                                arr_25 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (signed char)-56);
                                var_13 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_3] [i_4] [i_4]))))), (max((-7003266630324404918LL), (((/* implicit */long long int) var_6)))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_3 - 3] [i_4] [i_5]))))))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_4 [(_Bool)1])))) ? (((/* implicit */int) (((-(arr_15 [i_3] [i_3] [(unsigned short)10]))) < (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) 1294318832U)) && (((/* implicit */_Bool) (unsigned char)199))))), (((((/* implicit */_Bool) arr_24 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3])) ? (arr_4 [(unsigned short)2]) : (arr_14 [i_3] [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_15 += ((/* implicit */unsigned long long int) (-(8040314635381576952LL)));
            arr_29 [i_3] [i_3] [i_3] = (+((~(((/* implicit */int) (short)-10204)))));
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_16 = ((/* implicit */short) (_Bool)0);
                var_17 ^= ((/* implicit */signed char) (~(arr_34 [i_3 - 2] [i_3 - 2])));
                arr_35 [i_3 - 3] [i_9] [i_10] |= ((/* implicit */short) (_Bool)1);
            }
            arr_36 [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_22 [8] [i_3 - 2] [8] [i_3 - 1] [i_3 + 1]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_18 [i_3 - 1] [i_3 + 1] [(signed char)1])) - (((/* implicit */int) arr_32 [i_3] [i_9] [i_3]))))))));
        }
        /* LoopNest 2 */
        for (short i_11 = 3; i_11 < 14; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_12 [i_3 - 3]), (((/* implicit */unsigned long long int) 266988520))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 3; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) 
                        {
                            {
                                arr_47 [i_3 - 3] [i_3 - 1] [i_11] [i_3] [i_3 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_21 [i_3] [i_3 - 2] [i_3 - 1] [i_3] [i_3]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_12] [i_11] [i_12] [i_13 - 2] [i_11] [i_14])) ? (((/* implicit */int) (unsigned char)208)) : (var_1)))) : (arr_34 [i_3 - 2] [i_11 + 1])))) && (arr_42 [i_3] [i_11] [i_12] [i_13] [i_13] [i_13])));
                                arr_48 [i_3] [i_12] [i_3] [i_3] [i_3 - 3] |= ((/* implicit */unsigned char) max(((unsigned short)45554), (((/* implicit */unsigned short) (short)-14))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (short)14))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_15 = 3; i_15 < 14; i_15 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_3 - 1] [i_15 - 3] [i_15])))) : (((((/* implicit */_Bool) -642943357)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45554))) : (4876674627120237615LL))))))));
                        arr_51 [i_11] [(_Bool)0] [i_12] [(_Bool)0] = ((/* implicit */signed char) arr_18 [i_11] [i_11] [i_11]);
                        arr_52 [i_12] [i_12] [i_12] &= ((/* implicit */signed char) (-(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_22 [i_3 - 1] [i_12] [i_15] [i_15] [i_15 - 1])))))));
                    }
                    arr_53 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_18 [i_3] [i_3] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 3; i_16 < 13; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            {
                                arr_60 [i_12] [i_12] [i_12] [i_16 - 3] [i_17] [i_16 - 3] [i_17] |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) || (((/* implicit */_Bool) max(((-(((/* implicit */int) (short)14)))), ((+(((/* implicit */int) var_9)))))))));
                                arr_61 [i_3] [i_11 - 1] [i_12] [12U] [i_16 - 3] [i_16 - 3] [i_11] = ((/* implicit */int) ((((arr_57 [i_16 - 3] [i_16] [i_16 - 2] [i_16 + 1] [i_16 - 2]) + (9223372036854775807LL))) >> (((max((arr_57 [i_16] [i_16] [i_16 - 3] [i_16 + 1] [i_16 + 3]), (((/* implicit */long long int) arr_45 [i_16] [i_16 - 2] [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16])))) - (1025279131LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_18 = 3; i_18 < 13; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 13; i_21 += 2) 
                    {
                        for (int i_22 = 3; i_22 < 12; i_22 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (+((-(arr_72 [i_18] [i_18] [i_20] [i_21] [i_22 + 2])))))) ? (max((min((arr_30 [i_18] [i_19] [i_22]), (((/* implicit */unsigned long long int) arr_20 [i_20] [i_21] [i_20] [i_19])))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) (signed char)119))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((min((min((((/* implicit */long long int) arr_59 [i_22] [i_21 - 2] [i_20] [(signed char)12] [(signed char)12])), (arr_67 [i_18] [i_20] [i_21] [i_21]))), (((/* implicit */long long int) max((var_8), (((/* implicit */short) (signed char)30))))))), (((/* implicit */long long int) arr_19 [i_18] [i_18] [i_18])))))));
                                var_23 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    arr_73 [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */unsigned long long int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 0U))));
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 2417625488U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_25 = 0; i_25 < 14; i_25 += 4) 
        {
            for (short i_26 = 2; i_26 < 11; i_26 += 3) 
            {
                for (int i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    {
                        arr_86 [i_18] [(signed char)4] [(signed char)4] [i_26] [i_27] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) arr_38 [i_18])), (2574437366U))))), (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (9741873616934186282ULL)))));
                        arr_87 [i_18] [i_18] [i_18] [i_18] |= var_3;
                    }
                } 
            } 
        } 
    }
}
