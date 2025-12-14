/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82574
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) % (((/* implicit */int) (signed char)42))));
    var_17 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((unsigned short) (unsigned short)65514))), (((((/* implicit */int) (unsigned short)23)) ^ (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) min(((unsigned short)65513), (((/* implicit */unsigned short) (short)32767))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (min((arr_6 [i_0] [i_1] [12U]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 4; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) (-(var_4))));
                            arr_15 [0] [14U] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_3 - 2]))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3899295664U))))))))));
                            var_21 = ((/* implicit */signed char) ((35888059530608640ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_2])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(var_7))))));
                        var_23 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((1320984387U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : ((~(((/* implicit */int) (unsigned short)21))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                        arr_25 [13] [i_1] [i_2] [i_5] [i_1] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28113)) ? (arr_22 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    arr_28 [(signed char)1] [i_1] [(short)11] [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_29 [i_1] = ((/* implicit */_Bool) ((short) var_3));
                }
                arr_30 [i_0] [(short)14] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (unsigned short)19636)))));
                var_26 = ((/* implicit */unsigned int) arr_5 [i_2]);
            }
            for (int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                arr_34 [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)42)), ((unsigned short)12889)))) <= (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_27 = ((/* implicit */short) (~(arr_4 [i_0] [i_0])));
                arr_35 [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) ((short) ((signed char) -1135253622)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_0] [15U] [i_0] [i_0])) : (((/* implicit */int) arr_33 [(signed char)14] [i_1] [i_9] [(signed char)14]))));
                    arr_40 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_1]))));
                    arr_41 [i_0] [i_0] [i_9] [i_9] = var_5;
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((1761851415U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)4169)))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))));
                }
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (signed char i_12 = 1; i_12 < 18; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((1320984387U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24))))) : (((((/* implicit */_Bool) -429549995)) ? (3899295664U) : (((/* implicit */unsigned int) 429549999))))))) ? (((((var_7) - (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((unsigned int) var_2))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_12))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11] [8U]))) - (var_15)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((var_15) < (((/* implicit */unsigned long long int) 3722412486U))))));
                            var_32 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        }
                        for (short i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)44)) >= (((/* implicit */int) (short)5942))));
                            arr_55 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) var_4)))))) ? (((var_0) + (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_33 [i_0] [i_11] [(_Bool)0] [i_13])), (var_1))))))))));
                        }
                        arr_56 [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) var_12)), (arr_21 [(signed char)8] [(signed char)8] [i_12 + 1] [10U] [i_12])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_12] [i_13] [i_12 + 1] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_16 = 1; i_16 < 19; i_16 += 1) 
    {
        arr_60 [i_16 + 3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [14ULL]))) + (17925492906829110650ULL))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (((-(((/* implicit */int) var_14)))) == (((/* implicit */int) arr_58 [i_16 - 1])))))));
    }
    var_36 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (4294967270U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)9956)))) : (((((/* implicit */_Bool) 379285510)) ? (((/* implicit */unsigned long long int) 2169258443U)) : (var_8))))));
}
