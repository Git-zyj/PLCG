/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85511
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [5ULL] [(_Bool)1] [i_0] [(unsigned short)13] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_1 - 1] [(unsigned char)8] [(short)4] [(unsigned char)8] [i_0] [0]) + (arr_10 [i_1 - 2] [5LL] [2U] [(unsigned short)2] [i_0] [3LL])))) ? (((((/* implicit */_Bool) arr_10 [i_1 - 1] [14U] [9ULL] [13] [i_0] [(short)9])) ? (arr_10 [i_1 + 1] [7] [2LL] [3LL] [i_0] [(unsigned char)5]) : (arr_10 [i_1 - 2] [(_Bool)1] [9ULL] [1LL] [i_0] [13U]))) : (((/* implicit */long long int) ((/* implicit */int) (short)12224)))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [7])) * (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_2 [(unsigned char)14])) : ((+(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((3828159072U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (short)4830)) >> (((2030437261) - (2030437253))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_16 = ((/* implicit */short) arr_16 [12U]);
        var_17 += ((/* implicit */unsigned long long int) (unsigned char)194);
        arr_17 [19LL] = ((/* implicit */long long int) -1793185236);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_18 |= ((/* implicit */unsigned int) (+(536870911ULL)));
        var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [(short)20]))));
        arr_20 [10U] [14LL] = (~(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_19 [i_6])))));
    }
    for (long long int i_7 = 2; i_7 < 16; i_7 += 3) 
    {
        arr_25 [10ULL] [(short)17] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_23 [(unsigned short)16] [(signed char)14])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
        arr_26 [12LL] &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_15 [(unsigned char)17])) / (((int) 4294967295U))))), (((((/* implicit */_Bool) min((-9098851800385085687LL), (arr_21 [7ULL])))) ? ((+(-18LL))) : (var_9)))));
    }
    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((arr_28 [3U] [(_Bool)1]) == ((-(3905288185U))))))));
        var_21 = ((/* implicit */unsigned short) min((((unsigned int) arr_29 [19] [i_8 - 1])), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (arr_28 [1ULL] [19ULL])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (var_9)))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            {
                arr_34 [8LL] [(short)11] [(unsigned short)0] = ((/* implicit */unsigned short) (((-(arr_21 [i_10 - 2]))) > (((((/* implicit */_Bool) arr_21 [i_10 + 2])) ? (arr_21 [i_10 - 2]) : (((/* implicit */long long int) arr_28 [i_10 - 2] [(unsigned char)12]))))));
                arr_35 [(_Bool)1] [6LL] = ((/* implicit */int) 21ULL);
                var_22 -= ((/* implicit */int) ((min((((((/* implicit */_Bool) 524032)) ? (((/* implicit */int) arr_22 [(signed char)0])) : (((/* implicit */int) arr_16 [4LL])))), (((/* implicit */int) ((unsigned short) 4294967291U))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)178)))) < (((((/* implicit */_Bool) arr_29 [7LL] [(_Bool)1])) ? (((/* implicit */int) arr_31 [13ULL])) : (((/* implicit */int) var_3)))))))));
                arr_36 [14U] = ((/* implicit */signed char) (-(((arr_30 [i_10 - 1] [i_10 - 1]) / (arr_30 [i_10 + 1] [i_10 - 2])))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [7LL] [12ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))) : (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2926))) : (arr_24 [i_10 - 1] [i_10 + 2]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_2))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_8))));
    }
}
