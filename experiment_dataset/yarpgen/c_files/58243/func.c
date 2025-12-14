/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58243
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)22819)) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))))))));
    var_17 = (~((-(var_14))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)21187)) ? (((/* implicit */int) (short)21187)) : (((/* implicit */int) (short)12877)))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)12900)), (var_11))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)9] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15365796374532476244ULL)) || (((/* implicit */_Bool) var_7)))))) : ((-(arr_2 [i_1] [0])))))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_1] [1LL])) && (((/* implicit */_Bool) var_10)))), (((arr_0 [i_0]) < (arr_0 [i_1])))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_2] [i_1] [i_0])) != (arr_5 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_0] [i_0] [(short)5] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 1308052555)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (_Bool)0)))) & (((arr_12 [i_0] [i_1] [i_0]) + (((/* implicit */int) var_0))))));
                                arr_18 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1]);
                                var_19 = max((var_8), (var_2));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_12 [i_2] [i_2 - 1] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_14 [i_0] [i_5 + 1] [i_2] [(unsigned short)9] [(short)13] [(short)13] [i_5 - 1])))) ^ (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))), (arr_7 [i_0] [i_5] [i_2 - 1] [i_5 + 2])))));
                        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_21 [i_0] [i_0] [i_2 - 1] [i_5 - 2])))), (((unsigned long long int) (+(arr_2 [i_0] [i_0]))))));
                    }
                    var_23 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)-26893)) % (((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_10 [i_6 + 1]), (arr_10 [i_6 + 1]))))));
        var_24 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 1] [7LL] [i_6 + 1])))));
    }
}
