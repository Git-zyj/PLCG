/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77936
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_17 |= ((/* implicit */_Bool) max((max((min((8386560LL), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (unsigned short)19)))), (((/* implicit */long long int) ((signed char) ((unsigned long long int) 9ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11476408329081981259ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (9ULL)))) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (((((/* implicit */_Bool) 401931366578772853LL)) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
            arr_4 [i_0] [i_0 + 2] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) > (var_6))));
            var_19 = ((unsigned char) (-(((/* implicit */int) arr_1 [i_1]))));
            arr_5 [i_0] [i_1] [8LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))))));
        }
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_12 [i_2] [i_3] = ((28ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_3]))));
            var_21 = ((/* implicit */unsigned long long int) ((((var_5) | (((/* implicit */unsigned int) arr_6 [i_2] [i_3])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14))))));
        }
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -751185059006284427LL)) && (((/* implicit */_Bool) (short)6199)))))) : (((unsigned long long int) (signed char)127))));
        var_23 = ((/* implicit */int) ((unsigned char) arr_7 [i_2]));
        var_24 = (~(18446744073709551614ULL));
    }
    var_25 = ((short) (+(((/* implicit */int) max((var_3), ((_Bool)0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] |= ((/* implicit */_Bool) arr_15 [i_4]);
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_17 [i_4] [i_4 - 1]))) ? ((-(10034276712990509962ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_9))))))));
            var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1]))) + (1359022974630141144ULL)))) ? (3883914045264123348ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5])) | (((/* implicit */int) var_16)))))));
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_22 [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */int) arr_13 [i_4]))))) ? (((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))) : (arr_17 [(unsigned short)4] [i_6]))) : (((((/* implicit */_Bool) (signed char)-22)) ? (arr_17 [i_4] [(signed char)14]) : (var_7)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    {
                        arr_29 [i_4] [(short)4] [(_Bool)1] [(short)4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (signed char)123)) - (92)))))) / (((((/* implicit */_Bool) (unsigned short)36505)) ? (((/* implicit */unsigned long long int) arr_24 [i_8] [i_8 + 1] [i_8] [i_8])) : (var_0)))));
                        arr_30 [i_8] [i_8] [i_7] [i_7] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8 - 1] [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (+(arr_24 [i_6] [i_6] [i_6] [i_6])))) : (((arr_13 [i_4]) ? (arr_20 [(unsigned char)14] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 24U)) ? (arr_28 [i_8] [i_8 + 1] [14ULL] [i_8 + 1] [i_8 + 1]) : (((/* implicit */int) arr_23 [i_8] [i_8 + 1] [i_8] [i_8 - 2]))));
                        var_29 = ((/* implicit */unsigned int) arr_20 [i_4] [i_4]);
                        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) | (((/* implicit */int) var_10)))) >> (((-5345112173676489960LL) + (5345112173676489974LL)))));
                    }
                } 
            } 
        }
    }
    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_33 [i_9] [i_9] = (signed char)9;
        var_31 |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (signed char)-5)))))) - (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (3ULL))))) != (((/* implicit */unsigned long long int) ((int) ((arr_18 [i_9]) ? (arr_28 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) arr_15 [i_9]))))))));
        var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)250))))) : (18446744073709551614ULL)));
        arr_34 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_31 [i_9])) * (arr_14 [i_9])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? ((-(((/* implicit */int) arr_18 [i_9])))) : (((/* implicit */int) (signed char)-22))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((5029333785201938905ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29057))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned char)130)))))))));
    }
    var_33 = ((/* implicit */long long int) ((short) max((((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)172)))), (((/* implicit */int) var_4)))));
}
