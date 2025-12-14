/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96288
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35647)) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_3 [(signed char)19] [i_0]))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned int) ((unsigned char) arr_1 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1372))) | (0ULL)));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                var_19 -= ((/* implicit */unsigned short) arr_7 [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 24; i_4 += 3) 
                {
                    var_20 += ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (arr_12 [i_0] [i_2] [i_4 - 2] [i_0]) : (arr_12 [i_0] [i_0] [i_4 - 2] [i_5])));
                        var_22 = ((/* implicit */long long int) ((((18446744073709551594ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [19U] [i_2] [i_5])) : (((/* implicit */int) (_Bool)1)))))));
                        arr_17 [i_0] [i_0] [i_3] [(signed char)17] [i_4 + 1] [i_5] = ((/* implicit */unsigned int) arr_4 [i_0] [i_3] [i_4 - 2]);
                        var_23 = ((/* implicit */unsigned short) ((int) (~(arr_9 [(_Bool)1] [i_0] [i_3] [i_0]))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        var_24 -= ((/* implicit */unsigned int) (unsigned char)148);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 12289873672790421377ULL)) && (((/* implicit */_Bool) arr_16 [i_4 + 1] [i_2] [24LL] [5U] [(unsigned short)11]))))))))));
                    }
                }
            }
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_7]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_7]))));
                arr_23 [20U] [i_2] [i_7] [20U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)19))))) || (((/* implicit */_Bool) (unsigned short)65535))));
                var_27 = ((/* implicit */long long int) arr_21 [i_0] [i_0]);
            }
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_1 [(signed char)8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) 4052473262U)) ? (32767ULL) : (((/* implicit */unsigned long long int) -5544035809264709770LL))))));
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [5LL] [i_0]) : (((/* implicit */int) arr_21 [i_2] [i_2]))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_13 [i_0] [(signed char)11] [i_0])) / (((/* implicit */int) arr_22 [i_0] [i_8] [i_8]))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)64164))))) : ((+(1213754250U))))) << (((max((((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_8] [i_0] [i_0])))), (((((/* implicit */_Bool) 2147483621)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) : (var_5))))) - (2042231638ULL))))))));
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 24; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 3; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)65535)))), (((-1190073840) - ((-(((/* implicit */int) (unsigned char)13))))))));
                            arr_37 [i_0] [i_0] [i_0] [i_10] [(unsigned char)20] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_35 [i_0] [i_0] [i_9 + 1] [i_10] [i_11]) == (((/* implicit */int) arr_3 [i_0] [i_0]))))), (max((22ULL), (((/* implicit */unsigned long long int) (unsigned short)48165))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (14008074312447261977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_0] [i_11]))))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_27 [i_10] [(signed char)19])) : (arr_5 [i_8] [i_9]))) >= (((/* implicit */unsigned long long int) min((110900134U), (((/* implicit */unsigned int) var_0))))))))));
                            arr_38 [i_8] [i_10] [i_11] = (short)-28263;
                            var_31 = ((/* implicit */long long int) max((var_31), (min((min((min((((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_11])), (-2867848002239129538LL))), ((+(2867848002239129538LL))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (var_8)))))));
                        }
                    } 
                } 
            } 
            var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)0))))))) || (((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_8] [(signed char)21]))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63538))) * (33ULL)));
        }
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (arr_1 [i_0])))))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)128))) | (1091909645U)))) ? (((((/* implicit */_Bool) (signed char)39)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [2U])))))));
    }
    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_42 [i_12] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (_Bool)1)), (min((arr_2 [(short)4] [i_12]), (((/* implicit */long long int) (unsigned char)122))))))));
        var_35 = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1410962513940777570LL)) ? (var_3) : (((/* implicit */int) (_Bool)1))))), (((arr_9 [i_12] [i_12] [0] [i_12]) + (2887633773U))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_36 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        var_37 = ((_Bool) (~(((/* implicit */int) var_13))));
    }
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(max((((/* implicit */long long int) (short)31)), (549755813887LL)))))));
    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (~(var_8))))));
}
