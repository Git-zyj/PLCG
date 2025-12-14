/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93013
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = (-(((((/* implicit */_Bool) arr_5 [i_1 - 1] [2U] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_5 [i_0] [i_0] [i_1]))));
                    var_21 = ((/* implicit */_Bool) max((((arr_6 [i_1 + 1] [i_0] [8U]) - (arr_6 [i_1 + 1] [i_1] [i_1]))), ((+(arr_6 [i_1 + 1] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) -5900673034608539016LL);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((((!(((/* implicit */_Bool) arr_1 [i_2] [3])))) ? (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) 2097151)) : (var_15))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) (~(((int) 2862054753U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_3);
                                var_24 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_15 [i_6] [i_6 + 3] [(unsigned short)1] [i_5] [i_1] [i_1]))))));
                                arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) var_0)) / (arr_13 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65525), (((/* implicit */unsigned short) (unsigned char)78)))))))) : (((/* implicit */unsigned long long int) var_14))));
                                var_25 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (+(3223840033U)))), (min((4132970887358722465ULL), (((/* implicit */unsigned long long int) 1071127255U))))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1 + 1]))) & (var_0))), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (0ULL)));
                            }
                        } 
                    } 
                    var_27 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097166)) || (((/* implicit */_Bool) var_7))))), (min((((/* implicit */unsigned int) (unsigned char)93)), (arr_0 [i_1 + 1] [i_2]))));
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [10] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 3223840033U)) ? (((/* implicit */unsigned int) var_4)) : (var_15)))))));
        var_29 = ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_15))));
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_30 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [7LL])) ? (((/* implicit */long long int) var_0)) : (var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_9)))), (arr_22 [i_7]));
        arr_23 [i_7] [(unsigned char)12] &= ((/* implicit */unsigned long long int) -1439793162);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)30)))))) : (((((/* implicit */_Bool) (signed char)-76)) ? (var_11) : (((/* implicit */long long int) var_15))))));
                    var_31 &= ((/* implicit */short) (signed char)-63);
                    var_32 = ((/* implicit */long long int) ((_Bool) min((var_19), (((/* implicit */unsigned int) (unsigned short)26139)))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)360)) | (((/* implicit */int) var_3))))), (arr_22 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14)));
                }
            } 
        } 
        arr_29 [i_7] [14ULL] = var_3;
    }
    var_34 = ((/* implicit */signed char) (-((+(3223840064U)))));
}
