/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66194
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
    var_16 ^= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) || (((/* implicit */_Bool) (signed char)-64))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)25543)) ? (arr_5 [i_0] [0ULL] [i_1] [17ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))));
                    var_19 = ((/* implicit */unsigned int) (signed char)-60);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_12 [2] [6U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_9 [i_3 + 1]))))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) (((+(-2016055321494371839LL))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)73))))))));
        var_21 = ((/* implicit */unsigned long long int) arr_9 [i_3 + 2]);
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(min((arr_10 [i_3]), (((((/* implicit */_Bool) 2016055321494371834LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (3891261636U))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_10 [i_4]) : (arr_10 [i_4]))) : (arr_10 [i_4])));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_4] [i_4]), (((/* implicit */unsigned short) (signed char)52))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_4] [i_4]))))) : (max((((/* implicit */unsigned int) arr_2 [i_4] [i_4])), (3891261624U)))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) var_4);
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3891261643U)) + (arr_0 [i_4] [i_4])))) ? (((((/* implicit */long long int) arr_18 [i_4] [(unsigned short)7] [(unsigned short)9] [(unsigned short)0])) % (arr_17 [i_4] [(unsigned short)2] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_27 = ((/* implicit */short) var_7);
                var_28 |= var_7;
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 = ((/* implicit */int) max((var_29), (((int) min(((+(arr_0 [i_4] [i_5]))), (((/* implicit */unsigned long long int) arr_20 [i_4] [i_5] [i_5] [i_7])))))));
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21557)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-32)))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_31 += ((/* implicit */_Bool) max((403705683U), (max((arr_14 [i_5]), (arr_14 [i_8])))));
                            arr_26 [i_4] [3U] [i_4] [i_4] [3U] [(short)6] = ((/* implicit */unsigned short) 524909235);
                            arr_27 [i_8] [i_9] [i_9] [i_4] [i_9] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_1), (((/* implicit */short) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2016055321494371818LL)));
                        }
                    } 
                } 
            }
            for (int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) var_6);
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 3891261613U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)21556)))) * (((/* implicit */int) arr_33 [i_10] [i_11]))))), (((long long int) var_2))));
                    arr_34 [(unsigned short)2] [(unsigned short)2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) / (((/* implicit */int) arr_22 [i_11 - 1] [(_Bool)1])))) << (((((/* implicit */int) var_1)) - (24775)))));
                    arr_35 [i_4] [i_5] [i_4] [(unsigned short)0] = ((max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))) >= ((+(max((4294967283U), (arr_28 [i_4] [i_4] [i_4] [1ULL]))))));
                    var_34 = ((/* implicit */_Bool) min((((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11 - 1] [1LL] [i_11 - 1] [i_11]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_4])) <= (((/* implicit */int) (unsigned short)13))))))))));
                }
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */_Bool) ((2273448935U) + (arr_1 [i_4])))) ? (((/* implicit */int) ((short) ((arr_6 [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(signed char)2] [(_Bool)1]))))))) : (((/* implicit */int) var_2))))));
                    var_36 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (signed char)-54)) | (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_37 = ((signed char) ((unsigned char) ((_Bool) arr_18 [i_4] [0ULL] [i_10] [0ULL])));
                        arr_43 [i_4] [i_4] [i_10] [i_12] [(unsigned short)5] = ((min((((/* implicit */unsigned int) var_6)), (arr_14 [i_4]))) >> (((((/* implicit */int) var_0)) - (51800))));
                    }
                    arr_44 [i_4] [2ULL] [i_10] [2ULL] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) ((arr_37 [i_4] [i_4] [9] [9] [(unsigned short)4]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))))))));
                    var_38 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (((unsigned short) 403705676U))))), (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_12] [16U])))));
                }
            }
            var_39 += ((/* implicit */unsigned short) arr_20 [i_4] [i_5] [i_5] [i_4]);
            var_40 = var_13;
            var_41 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_33 [9ULL] [i_4])) : (((/* implicit */int) arr_9 [i_4])))));
        }
        for (long long int i_14 = 2; i_14 < 7; i_14 += 2) 
        {
            arr_47 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_42 *= ((/* implicit */unsigned int) var_7);
        }
    }
}
