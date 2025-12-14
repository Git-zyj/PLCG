/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99344
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (arr_0 [i_0])))) << (((276534203U) - (276534192U))))) << (((((((/* implicit */_Bool) 519692180184413956LL)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_0])))))) + (44)))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (4294967295U))), (((((/* implicit */_Bool) 2543418576U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (276534203U))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] |= (unsigned char)255;
        var_21 -= ((/* implicit */short) max(((!(((/* implicit */_Bool) (unsigned char)0)))), ((!(((/* implicit */_Bool) (signed char)-21))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) + (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_4))))));
        arr_13 [(unsigned char)0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)29608)) << (((arr_6 [i_2] [i_2]) - (2994293133U)))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_16 [(unsigned char)8] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [(signed char)3]))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                arr_20 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [i_3] [i_2])) >> (((((/* implicit */int) arr_1 [i_2])) - (26)))));
                var_22 = ((/* implicit */unsigned char) ((((arr_15 [0LL]) + (9223372036854775807LL))) << (((((arr_15 [i_3]) + (1754296892739061202LL))) - (30LL)))));
            }
        }
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) ? ((-(276534203U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_5] [9U])) * (((/* implicit */int) arr_14 [i_5] [i_5] [i_5]))))) ? (((((/* implicit */int) arr_7 [i_5])) + (((/* implicit */int) arr_21 [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(_Bool)1]))))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((min((((-519692180184413975LL) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5]))))), (((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (arr_0 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(2147483647)))) | (min((276534203U), (var_19)))))))))));
        var_25 -= ((/* implicit */unsigned char) (((+(-8200187470163245242LL))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)3)), (arr_2 [i_5] [i_5])))))));
        arr_23 [12U] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (276534203U) : (arr_6 [i_5] [i_5]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_5] [i_5]) < (arr_6 [(signed char)2] [i_5])))))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) (+(0U)));
    }
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_11 [i_6 - 1] [i_6 + 1]), (max((((/* implicit */signed char) (_Bool)1)), (var_17)))))))))));
        var_27 = ((/* implicit */long long int) ((var_11) < (((((/* implicit */int) arr_21 [i_6 - 1])) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_6 - 1])), ((unsigned char)3))))))));
    }
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_4)) + (-1370775542))), (((/* implicit */int) var_4)))))));
    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_19))));
}
