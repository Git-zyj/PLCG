/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70623
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((((4289480724U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12))))))))));
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_1 [i_0 - 2])) == (-1386104266689611365LL)));
            var_17 = ((((/* implicit */_Bool) 2137887437U)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (arr_4 [(signed char)7] [i_1]));
        }
        arr_5 [(short)11] = ((/* implicit */_Bool) 7315207581075303267LL);
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((min((arr_4 [(unsigned char)0] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_7 [(short)4])))) >= (((/* implicit */unsigned long long int) ((-1386104266689611384LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1792))))))))), (min((min((arr_7 [i_2]), (((/* implicit */unsigned int) (short)127)))), (((/* implicit */unsigned int) ((unsigned short) arr_7 [i_2])))))));
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_2] [(signed char)0])) && (((/* implicit */_Bool) arr_6 [i_2] [10LL])))) ? (((252201579132747776ULL) >> (((((/* implicit */int) arr_3 [i_2])) + (18772))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) (_Bool)1)), (((signed char) 2013265920U))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((arr_2 [i_3]), (((/* implicit */signed char) ((arr_4 [i_3] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3])))))))))));
        arr_10 [1U] = 3952626238U;
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -7315207581075303264LL)) || (((/* implicit */_Bool) arr_6 [i_3] [i_3]))))) * (((((/* implicit */int) arr_6 [12ULL] [i_3])) % (((/* implicit */int) arr_6 [(_Bool)1] [(signed char)3]))))));
        var_22 = ((/* implicit */unsigned int) ((min((max((((/* implicit */unsigned long long int) arr_9 [i_3])), (arr_4 [i_3] [(signed char)5]))), (((/* implicit */unsigned long long int) arr_3 [i_3])))) > (((/* implicit */unsigned long long int) ((arr_8 [(unsigned short)2] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) ((signed char) arr_0 [6] [(short)5]));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)131)) + (((/* implicit */int) arr_0 [i_4] [i_4]))))));
            var_24 = ((/* implicit */unsigned char) arr_8 [i_5 - 1] [i_5 + 1]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_4])) - (((/* implicit */int) ((((/* implicit */_Bool) 11810015680212543913ULL)) || (((/* implicit */_Bool) arr_9 [i_5])))))));
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 3; i_6 < 10; i_6 += 1) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((2137887437U) << (((((/* implicit */int) arr_12 [(signed char)2])) - (140)))))) ? (arr_15 [i_6 + 3] [i_6 + 3] [i_6 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 - 1])))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_11 [i_6 + 2] [i_6 - 2]))));
                            var_28 -= ((/* implicit */signed char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_8] [i_9])))));
                            var_29 = ((/* implicit */int) arr_12 [i_4]);
                            var_30 = ((/* implicit */unsigned int) ((arr_20 [i_4] [i_6 + 3] [i_9 - 2] [i_6]) <= (arr_20 [i_6 + 3] [i_6 - 2] [i_9 - 2] [i_6])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (arr_23 [i_10 + 3])))) % (((/* implicit */int) arr_25 [i_6] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 1] [i_10 + 3]))));
                arr_32 [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54135)) && (((/* implicit */_Bool) (short)19463))))) < (((/* implicit */int) ((short) 2013265920U)))));
                arr_33 [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_10 - 1] [i_10 - 1] [i_10 + 3])) > (((/* implicit */int) arr_19 [i_10 - 1] [i_10 - 1] [i_10]))));
            }
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6 + 2]))) < (7819131601469520356ULL)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [6])) >= (((/* implicit */int) (unsigned short)65535))));
                            var_34 = ((/* implicit */unsigned int) ((short) arr_4 [i_6 - 3] [i_6 - 1]));
                        }
                    } 
                } 
                var_35 ^= ((/* implicit */int) ((arr_28 [i_4] [i_6 + 1] [i_11] [12U] [i_6] [i_4]) * (arr_28 [i_4] [i_6 + 1] [0LL] [i_4] [i_4] [i_6])));
            }
        }
        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            arr_54 [i_14] [(unsigned char)0] [i_16] [i_16] [i_17] = ((/* implicit */unsigned short) ((long long int) arr_16 [i_14 + 1]));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967284U)) & (-836263060133911734LL)));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_15] [i_14 - 1] [i_14 + 2] [i_14 - 1])) ? (15122739493187598244ULL) : (((/* implicit */unsigned long long int) 833350774U)))))));
                        }
                    } 
                } 
            } 
            arr_55 [i_14] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -836263060133911750LL)) ? (((/* implicit */unsigned long long int) -1716667654)) : (11810015680212543912ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_14 + 1] [i_14 + 2])))));
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((arr_50 [i_4] [i_4] [i_4] [i_4]) && (((/* implicit */_Bool) arr_45 [i_4] [(signed char)10] [(unsigned char)12] [6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((7045588206294934588ULL) >> (((/* implicit */int) (_Bool)1)))))))));
        }
    }
    var_39 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) min((var_5), ((_Bool)1)))))))) & (2013265926U));
    var_40 = ((/* implicit */unsigned int) var_9);
}
