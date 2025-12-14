/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77872
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
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))) ? (188472988U) : (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (var_12))))))));
    var_19 = ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned char)10] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) var_6)) : (max((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (arr_4 [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (arr_5 [i_0] [i_0]))))));
                arr_7 [7ULL] [9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4106494307U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) : (((unsigned int) (_Bool)1))))), (min((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_9)))), ((~(arr_0 [(unsigned char)18])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-17199)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [9U] [i_2 + 1] [9U]))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 1) 
                            {
                                var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (((0ULL) - (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (arr_0 [i_0]) : (((long long int) arr_13 [i_2])));
                                arr_14 [(unsigned char)0] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1] [i_3])), ((((_Bool)1) ? (0U) : (4106494307U)))))) ? (((/* implicit */long long int) (~(arr_10 [i_0] [i_1] [i_2] [i_2 - 2] [i_4 - 2])))) : ((-(((((/* implicit */long long int) 2683371025U)) % (arr_0 [i_2])))))));
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) var_3);
                            }
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] = max((max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_5 [(unsigned char)18] [i_0])) ? (var_9) : (((/* implicit */int) (signed char)58)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned char)19] [(unsigned char)19] [i_2])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])) ? ((~((~(var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_4 [i_2]), (((/* implicit */unsigned int) arr_1 [13ULL]))))) & ((~(var_15))))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_2 [i_0] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) var_5)), (((unsigned int) var_10))));
}
