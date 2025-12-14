/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91503
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0])))) | (((/* implicit */int) ((unsigned short) (_Bool)0)))));
        var_12 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_1)))) ? ((+(var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) 2663147649U)) || (((/* implicit */_Bool) 14251837592202282554ULL)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_13 = ((unsigned int) arr_4 [i_1 - 1]);
            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)193))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])))))));
            var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])), (arr_9 [i_2])))) ? (((max((1631819633U), (var_7))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_2])) << (((((/* implicit */int) arr_8 [i_2] [i_2] [i_0])) - (126))))))));
            var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) -803777049690160710LL))))) + (((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_2])))))));
            var_18 ^= ((/* implicit */_Bool) ((long long int) ((signed char) ((((/* implicit */_Bool) 2663147659U)) ? (((/* implicit */int) (short)-10886)) : (-2123626093)))));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((-(var_7)))));
        }
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned short) var_5))))) < (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_3]) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_3])), ((unsigned short)23773))))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) (((~(var_2))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) - (1)))));
        arr_14 [i_3] = (+(((((/* implicit */_Bool) (short)15902)) ? (((/* implicit */unsigned long long int) arr_1 [i_3])) : (2750675266721334313ULL))));
        arr_15 [i_3] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) / (3995530887U))));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) min((var_8), (((/* implicit */int) arr_11 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (2663147649U)))) : ((+(((/* implicit */int) arr_4 [i_4])))))))));
        var_21 |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((arr_16 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : ((+(var_1))))));
    }
    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_4))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) 3883899902U))));
}
