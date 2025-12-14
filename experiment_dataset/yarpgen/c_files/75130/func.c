/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75130
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1]))))))) < (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_4)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) (short)17187))))) ? (((/* implicit */int) ((var_8) == (((/* implicit */int) var_9))))) : ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_10)))) < (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1])))))));
                        var_18 = (!(((/* implicit */_Bool) (~(arr_5 [i_0] [i_0])))));
                        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-115)) + (2147483647))) << (((/* implicit */int) arr_4 [i_3] [(signed char)0] [i_1]))))), (((long long int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)62784)) : (((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_0 - 1] [i_2] [i_3]), ((_Bool)0)))) >= (1625477240))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) 3871532969339886003LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))))) << (((((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2]))) - (55347))))))));
                    }
                    for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_1)), (-3871532969339886003LL))), (((/* implicit */long long int) min((var_14), (arr_10 [i_0] [i_0] [i_2] [i_4] [i_1]))))))), ((-(11ULL)))));
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (min((5885684441011197773LL), (((long long int) (short)-17205)))) : (((/* implicit */long long int) (-(arr_10 [i_0] [i_4] [i_2] [i_1 + 2] [i_0]))))));
                    }
                    var_23 -= ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_1] [i_0] [17U])) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (((_Bool)1) || (arr_4 [i_2] [(signed char)1] [(signed char)1]))))))) : (15622877));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                                var_24 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_25 = arr_13 [i_1 + 2];
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        {
                            arr_30 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */signed char) ((short) ((long long int) ((int) var_13))));
                            var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_7 [i_7 - 1] [i_8] [3U] [1LL])), (17U))), (((/* implicit */unsigned int) ((int) arr_7 [i_7 + 1] [i_8] [14] [14])))));
                        }
                    } 
                } 
                arr_31 [10LL] [i_8] |= ((/* implicit */_Bool) (((!((!(arr_13 [i_8]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)2740))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned char)251)))) : (min((((/* implicit */int) var_12)), (var_5))))) : (((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_28 += (+(((/* implicit */int) ((_Bool) var_16))));
                            var_29 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (((((/* implicit */_Bool) var_6)) ? (arr_25 [i_8] [(short)9] [i_8]) : (((/* implicit */unsigned int) var_5))))))));
                            var_30 -= ((/* implicit */unsigned char) ((((int) min((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)62765)))) >= (((/* implicit */int) ((((/* implicit */int) min((arr_23 [i_12] [i_8]), (((/* implicit */short) (_Bool)1))))) <= (((/* implicit */int) min(((unsigned char)58), (((/* implicit */unsigned char) var_11))))))))));
                            arr_37 [i_7] [i_7] [i_7] [i_11] [10U] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_35 [i_7] [i_7] [i_8] [i_8] [i_11] [2LL])), (var_0)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)245)), (arr_23 [i_7] [i_7])))) : (((/* implicit */int) arr_32 [8LL] [8LL] [8LL]))))) ? (2835893415U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_31 = ((/* implicit */long long int) arr_36 [i_7] [i_7] [i_7] [i_12] [i_7] [i_7]);
                        }
                    } 
                } 
                arr_38 [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)4))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)122)) == (((/* implicit */int) (unsigned short)37048))))))))));
            }
        } 
    } 
}
