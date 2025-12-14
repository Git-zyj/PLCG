/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91920
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535))))), (min((68719476736LL), (((/* implicit */long long int) 2022424919U))))))) ? ((+(((/* implicit */int) (signed char)-3)))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), ((~(max((max((391603825U), (((/* implicit */unsigned int) arr_1 [i_0])))), (max((((/* implicit */unsigned int) arr_1 [i_0])), (2366207195U)))))))));
    }
    var_18 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 524286)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (140737488355327ULL)))) && (((/* implicit */_Bool) (+(var_5)))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))) <= ((~(var_14)))))));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_19 -= (unsigned short)62795;
        var_20 = ((/* implicit */unsigned char) 533156266U);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 24; i_3 += 1) 
            {
                {
                    var_21 -= max((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) & (var_5)))), (((((/* implicit */_Bool) arr_3 [17ULL])) ? (((arr_3 [(short)2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 1]))))));
                    var_22 = ((/* implicit */long long int) ((unsigned short) arr_2 [5ULL]));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
    }
    var_24 = ((/* implicit */signed char) max((var_14), (((/* implicit */int) ((var_15) <= (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)4032)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_25 |= ((/* implicit */unsigned int) 0LL);
        var_26 -= ((/* implicit */unsigned short) (short)237);
        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35293)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65367))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)149)) / (((/* implicit */int) (signed char)-123))))) ? (arr_3 [i_4]) : (((((/* implicit */_Bool) 1062636031U)) ? (18446603336221196296ULL) : (228335155234199356ULL)))))));
    }
}
