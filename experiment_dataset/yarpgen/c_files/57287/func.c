/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57287
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
    var_18 = ((/* implicit */int) min((var_18), ((+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [(unsigned short)9] &= (+(((/* implicit */int) arr_3 [i_0])));
        arr_5 [(unsigned char)10] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31049)) - (((/* implicit */int) (unsigned char)129))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) max(((short)31049), ((short)31055)));
        /* LoopNest 3 */
        for (short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */_Bool) (((-(max((-2018184828), (-693821145))))) / (((/* implicit */int) (short)13988))));
                        arr_19 [i_1] [i_2 + 2] [i_2] [i_3] [i_3] [i_4] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61138))))));
                        arr_20 [i_1] [i_2] [i_2] [i_1 + 2] [i_4] [12] = max((min((((/* implicit */int) (unsigned short)4395)), ((~(((/* implicit */int) (unsigned char)255)))))), ((~(max((arr_14 [(short)11]), (((/* implicit */int) arr_8 [i_2] [i_3] [i_4])))))));
                        arr_21 [(short)9] [i_2] [12ULL] [i_3] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_2 - 2])) : (arr_12 [i_2 - 4] [i_1 + 2] [i_3] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1] [6] [i_1]))))))));
    }
    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (unsigned short)61132)) | (((/* implicit */int) arr_22 [i_5] [i_5])))), (((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) arr_22 [0LL] [10LL])) : (((/* implicit */int) arr_23 [i_5])))))) >> (((10891029313195667904ULL) - (10891029313195667900ULL)))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5] [i_5 + 2]))))) ? (((((/* implicit */int) arr_23 [i_5 + 2])) >> (((((/* implicit */int) arr_23 [i_5 + 2])) - (25808))))) : (((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_23 [i_5 - 1])) : (((/* implicit */int) arr_22 [i_5 + 1] [i_5]))))));
        arr_24 [i_5] [i_5] = arr_22 [(unsigned short)7] [i_5];
        var_24 &= ((/* implicit */long long int) min((((/* implicit */int) (short)-31070)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31850)) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) (unsigned short)448))))) ? (((/* implicit */int) ((short) 673966124945922195LL))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) arr_23 [i_5 - 1]))))))));
    }
    var_25 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) > (max((((/* implicit */long long int) 262143U)), (-247784847945226878LL))))))) > (min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)7565)))), (((/* implicit */long long int) min(((unsigned char)167), ((unsigned char)202))))))));
}
