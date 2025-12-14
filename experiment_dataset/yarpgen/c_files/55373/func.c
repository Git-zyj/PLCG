/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55373
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
    var_17 = ((/* implicit */unsigned long long int) 4080596281800508188LL);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) % (2608703988U)))), (arr_0 [i_0] [i_1])));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((-5538416364019703241LL), (((/* implicit */long long int) 1048575)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) <= (max(((~(((/* implicit */int) (short)4095)))), (((/* implicit */int) (short)29748))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5228))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)5051)) & (-194334621)))), (((12116802340900674714ULL) >> (0U))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3720238134017169299ULL)))))))));
        /* LoopSeq 4 */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29762)) | (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (12116802340900674714ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) (unsigned short)5237)) : (min(((~(-2054681315))), (((((/* implicit */int) arr_7 [i_5])) ^ (((/* implicit */int) var_6))))))));
                var_22 ^= 556351828;
                var_23 ^= ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)12477)))) * (((/* implicit */int) (short)4095))));
            }
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                arr_22 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1131301058)))) ? (4294967288U) : (((/* implicit */unsigned int) 11754330))));
                arr_23 [6ULL] [2ULL] = ((/* implicit */short) ((9038075147009999214ULL) >> (((556351831) - (556351781)))));
            }
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_1 [i_2] [i_2]);
        }
        for (unsigned char i_8 = 3; i_8 < 7; i_8 += 1) 
        {
            arr_27 [i_2] &= ((/* implicit */_Bool) min(((unsigned short)56992), (((/* implicit */unsigned short) (_Bool)0))));
            var_24 = ((/* implicit */signed char) min((arr_12 [i_2] [i_8 - 3] [i_2]), (((((/* implicit */_Bool) 2490075633U)) && (((/* implicit */_Bool) (signed char)-8))))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                arr_32 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 5538416364019703240LL))))));
                var_25 ^= ((/* implicit */unsigned long long int) arr_11 [(signed char)2] [i_9] [i_9] [i_9]);
                arr_33 [i_10] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16320)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (-5538416364019703241LL)));
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9] [i_2] [i_2] [i_2]))) & (1073741824U)));
            arr_34 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)190)) || (((/* implicit */_Bool) -1LL))));
            arr_35 [(signed char)9] [(signed char)9] &= ((/* implicit */_Bool) var_9);
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_9])) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_9])) : (((/* implicit */int) (short)30549)))))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60307)) ? (1804891671U) : (((/* implicit */unsigned int) 787056121))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_4 [(short)9] [(_Bool)1] [i_13]))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (12116802340900674714ULL)));
                            var_31 = ((/* implicit */unsigned short) ((var_4) << (((((/* implicit */int) (signed char)127)) - (83)))));
                            arr_44 [i_2] [i_2] [i_12] [i_12] [i_2] [i_2] [i_14] = ((/* implicit */signed char) (short)14210);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) -1871124485)))))));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29872)) ? (((/* implicit */unsigned long long int) 1810764482U)) : (6329941732808876901ULL))))));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                for (short i_18 = 4; i_18 < 18; i_18 += 3) 
                {
                    {
                        var_35 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)123)), (2484202809U)));
                        var_36 = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 19; i_20 += 3) 
            {
                {
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1810764481U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) 787056132)) % (1804891677U)))))) ? (((((/* implicit */int) (unsigned char)137)) >> (((15795731973443249874ULL) - (15795731973443249868ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_48 [i_15])))))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) 0U)) : (9223372036854775790LL)));
                    var_39 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(4294967291U)))), (min((-5816888962071252254LL), (((/* implicit */long long int) 0U))))));
                    arr_61 [12] [i_15] [i_15] = ((/* implicit */unsigned short) arr_51 [i_15] [i_19] [8U] [i_20]);
                    var_40 -= min((arr_49 [i_15] [i_15] [i_15]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (unsigned short)512))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_21 = 2; i_21 < 19; i_21 += 1) 
    {
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */int) (unsigned char)125)) >> (((((/* implicit */int) (short)32765)) - (32746))))))));
        arr_64 [i_21 - 2] = ((/* implicit */long long int) var_11);
    }
}
