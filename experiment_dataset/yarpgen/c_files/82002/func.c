/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82002
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_7)))) % (max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_0)))))) ? (((max((2147483584U), (2147483584U))) << ((((~(2504402095U))) - (1790565198U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 126393612U)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_2 [4] [i_0])) : (var_9)))));
            var_17 = ((/* implicit */signed char) (-(arr_0 [i_0])));
            var_18 = ((/* implicit */unsigned short) (+(arr_1 [i_1])));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_2] [i_2])))));
            var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2]))));
        }
        var_20 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_6 [2LL] [i_0])) ? (3004844111U) : (arr_0 [i_0]))), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) ((int) var_6)))));
        arr_8 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [12ULL])) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned short)37670))))) + ((+(var_3)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (-4229076205490607417LL)))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((arr_2 [2] [2]) + (2147483647))) >> (((((/* implicit */int) (short)11162)) - (11136)))))) : ((-(arr_3 [i_0] [i_0])))))));
        var_22 = var_14;
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) max((((signed char) ((-1385170394) - (arr_10 [i_3])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_3])) : (arr_10 [i_3])))))))));
        arr_12 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (1990534001) : (((/* implicit */int) arr_11 [i_3]))))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_4]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) * (arr_13 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (max((arr_15 [i_4]), (((/* implicit */unsigned int) var_1))))))));
        arr_17 [(signed char)7] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((arr_15 [i_4]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) -1385170405)) : (min((arr_13 [i_4]), (((/* implicit */unsigned long long int) arr_11 [17ULL]))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6612))) : (4485727274137083566ULL))));
        var_25 = ((/* implicit */unsigned short) ((var_4) & (((/* implicit */unsigned long long int) 2147483712U))));
        arr_22 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >> (((((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))))) - (113576148654990222LL)))));
    }
}
