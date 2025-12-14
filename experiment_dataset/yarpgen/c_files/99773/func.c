/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99773
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_10 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) arr_10 [i_0]))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) : (((/* implicit */int) (unsigned char)0))))));
                            var_11 = ((/* implicit */unsigned int) var_9);
                            var_12 = ((/* implicit */unsigned int) (unsigned char)255);
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_4))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_4]))))));
            arr_18 [12ULL] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) != (var_5)))))));
            var_16 = ((/* implicit */unsigned char) ((arr_16 [i_4]) || (arr_16 [i_4])));
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_15 [i_6]);
            var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60406))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (arr_13 [i_4] [i_6]));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_25 [i_4] [i_4] [i_4] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) 475349864U))) * (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [(_Bool)1] [i_6] [i_7] [i_7] [5U]))) / (var_7)))));
                arr_26 [i_4] = ((/* implicit */unsigned int) arr_0 [i_4]);
            }
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_18 *= ((/* implicit */unsigned char) ((int) (-(arr_15 [i_8]))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) (+(((/* implicit */int) arr_19 [(_Bool)1] [i_8] [(_Bool)1])))))));
            arr_29 [i_4] [i_4] = ((/* implicit */int) arr_9 [i_8 - 1] [(_Bool)1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
        }
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60406)))))))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned long long int) (-(max((arr_1 [i_9 + 1]), (((/* implicit */unsigned int) var_8))))));
        arr_33 [i_9 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)5129)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))) : (min(((-(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)60402)))))))));
        /* LoopNest 3 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    {
                        arr_42 [i_9] [i_9] [i_11] [i_12] = ((/* implicit */int) ((unsigned char) var_0));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_1);
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) arr_45 [i_11] [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60406))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54428)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11] [i_11])) ? ((~(min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_5 [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_46 [i_9] [i_9] [i_11] [i_9] [i_9 + 1] &= ((/* implicit */_Bool) min(((~(arr_43 [i_9] [i_9] [i_9 - 1] [i_10 - 1] [i_11] [i_11]))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_7 [i_9] [i_10 - 1] [i_9])))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            arr_50 [i_14] [i_12] [i_11] [i_10] [i_9 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-3)))) * (((/* implicit */int) var_8))));
                            var_24 ^= ((/* implicit */signed char) (_Bool)1);
                        }
                        arr_51 [i_9] [i_9] [i_10] [i_9] [i_10] [i_9] = ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_1)))))));
                        arr_52 [i_12] [i_11] [i_10] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) << (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        var_25 |= arr_1 [i_15];
        var_26 = ((/* implicit */unsigned short) (_Bool)0);
    }
    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
    {
        var_27 *= ((/* implicit */_Bool) ((1101993631788182327ULL) * (((/* implicit */unsigned long long int) var_7))));
        arr_59 [i_16] [i_16] = ((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_16] [i_16] [(_Bool)1])), ((~(((int) (_Bool)0))))));
        arr_60 [i_16] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) arr_56 [7] [10ULL])), (475349864U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))) : (((((/* implicit */unsigned long long int) arr_10 [i_16 + 1])) + (var_5)))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 8127072963222141961ULL)) ? (((unsigned long long int) (short)32737)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 2; i_17 < 17; i_17 += 3) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                arr_68 [12LL] [i_18] |= ((/* implicit */unsigned int) max((max((var_7), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_9)))))))));
                arr_69 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_18] [i_18] [i_17] [i_18] [i_17] [i_17])) < (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) var_8)), (arr_63 [i_17] [i_17])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_5 [(unsigned short)7]), (((/* implicit */unsigned long long int) 1958486605U)))) == (((/* implicit */unsigned long long int) arr_64 [i_17 + 4])))))) : (((((/* implicit */_Bool) arr_4 [i_17] [i_17 + 1] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) min((arr_1 [(unsigned short)2]), (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (var_5)))))));
                var_28 -= ((/* implicit */int) (+((+(arr_6 [i_17] [i_17 - 2] [(unsigned char)18] [(unsigned char)18])))));
                var_29 *= min((max((((/* implicit */unsigned long long int) arr_10 [i_17 + 3])), (11229517849938548057ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)60386), (((/* implicit */unsigned short) arr_4 [i_17 + 3] [i_17] [i_17 + 4] [i_17 + 3]))))));
            }
        } 
    } 
    var_30 += ((/* implicit */unsigned int) var_8);
}
