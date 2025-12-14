/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64417
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
    var_11 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_4)))) != (((/* implicit */int) max((var_7), (((/* implicit */short) var_5))))))) ? (((((/* implicit */_Bool) (short)-2510)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2493)))) : (((/* implicit */int) var_10))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1334175510)) | (((1230588560U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (640808525)));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_1]))));
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_16 = (_Bool)1;
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_7 [i_0] [i_1] [i_3] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [(_Bool)1] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                                arr_15 [i_4 + 2] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [(short)0] [i_0] [i_0]) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (-562391555232617234LL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_4] [2ULL] [i_1] [i_0])) > (((/* implicit */int) arr_9 [i_1] [i_1]))))))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_4] [i_4] [i_0] [i_4 + 3] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)7)))) && (((/* implicit */_Bool) arr_5 [i_3] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1]))))))));
                                arr_16 [i_0] [i_1] [i_3] [i_4 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-19067), (((/* implicit */short) arr_11 [i_0] [i_0] [i_3 + 1] [i_4] [i_5])))))) - (((((/* implicit */_Bool) arr_2 [i_5] [i_4 + 3])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-2572))))));
                            }
                        } 
                    } 
                }
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_0))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_3))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) max((11213842145725989980ULL), (((/* implicit */unsigned long long int) (short)2523)))))))) : (((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((_Bool) var_5))))) ^ (max((((/* implicit */int) min((var_7), (var_2)))), (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) + (var_8))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7))))))))));
}
