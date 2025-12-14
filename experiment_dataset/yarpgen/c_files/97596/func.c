/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97596
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
    var_15 -= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_12)))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((-1613195177), (((int) 1613195176))))), (max((((/* implicit */long long int) arr_2 [i_0])), (max((((/* implicit */long long int) 1613195177)), (3633110339622938759LL))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) -1613195177));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_17 = (+((~(arr_10 [i_2]))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)8954)) ? (16777152U) : (2763465202U)));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                arr_15 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((int) (_Bool)0))))));
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    arr_18 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (-2019694942)))), ((+(arr_10 [10LL])))))));
                    arr_19 [i_2] [i_2] [i_3] [4LL] = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_4]));
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned short)14081)))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */signed char) arr_12 [(unsigned short)4] [i_3] [i_2] [(unsigned short)4])), (var_3))))));
                    var_21 += ((/* implicit */_Bool) 11827718270795184954ULL);
                }
                for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (15749486825185758945ULL)))) ? (((/* implicit */int) ((short) (~(var_8))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (arr_20 [i_3])))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) 1613195177))));
                    arr_24 [2LL] [2LL] [i_3] [i_3] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((arr_10 [i_6]) < (((/* implicit */unsigned long long int) var_0))))), (6619025802914366661ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1419997516))))));
                }
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_7])))))));
                var_25 ^= (+(arr_20 [i_7]));
            }
        }
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(111899549)))), (max((((((/* implicit */_Bool) 8189557162108235711LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (1449121727388069672ULL))), (var_12)))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_35 [i_8] = ((/* implicit */int) ((arr_30 [i_8] [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_9])))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_9] [i_9])) > (520128991)));
            arr_36 [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [i_9] [i_8]))));
        }
        for (long long int i_10 = 4; i_10 < 12; i_10 += 3) 
        {
            arr_39 [i_8] = ((/* implicit */unsigned short) -697677094);
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((long long int) (~(var_0)))))));
        }
        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            arr_43 [i_8] = ((/* implicit */unsigned short) ((short) arr_11 [i_8] [i_11 - 2] [i_11 - 1] [i_11 + 1]));
            var_29 = ((/* implicit */short) ((unsigned short) ((unsigned int) -520128985)));
            var_30 += ((/* implicit */unsigned short) arr_31 [i_11 - 1]);
        }
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_8])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7883660374528699056ULL))) : (((/* implicit */unsigned long long int) -1631744707))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((unsigned int) arr_13 [i_14]));
                            var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_12] [i_13] [i_15]))));
                            arr_58 [i_8] [i_12] [i_8] [i_8] = ((/* implicit */int) var_9);
                        }
                        arr_59 [i_14] [i_8] [i_12] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_6)));
                    }
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        arr_62 [i_8] [i_8] [i_13] [i_16] [i_13] [i_8] = ((/* implicit */unsigned int) arr_30 [i_8] [i_8]);
                        var_34 ^= ((/* implicit */int) ((short) (-(((/* implicit */int) arr_37 [i_8])))));
                        arr_63 [i_13] [i_8] = ((/* implicit */unsigned long long int) ((int) ((_Bool) var_5)));
                    }
                    arr_64 [i_12] = (-(((/* implicit */int) var_6)));
                    arr_65 [i_13] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_8] [i_8])) * (((((/* implicit */int) var_6)) >> (((561850441793536ULL) - (561850441793510ULL)))))));
                    arr_66 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_71 [i_17] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_6)))));
        var_35 -= ((/* implicit */unsigned short) ((-1835731548) >= (((/* implicit */int) (unsigned short)9))));
    }
    var_36 = ((/* implicit */signed char) var_4);
}
