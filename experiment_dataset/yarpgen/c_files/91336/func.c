/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91336
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */short) 1152975567U);
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_9))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1556726463)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (arr_11 [i_0] [i_1] [7LL] [i_3])));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 1556726458)))));
                            arr_15 [i_3] [i_1] [i_2] [i_1] [(short)13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_0 [i_3]))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_1 [i_2]))));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [14ULL]))));
                        }
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((min((arr_11 [i_5] [i_0] [i_0] [i_0]), (-1588181598))) + (2147483647))) << (((((((int) 8840477791039917489LL)) ^ (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) - (1269435824)))));
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((~(var_9)))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) & (var_8)))))));
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) -8840477791039917490LL)) ? (8840477791039917489LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) / (((((/* implicit */_Bool) (short)32760)) ? (8840477791039917490LL) : (1374431738096085683LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((257909071U), (((/* implicit */unsigned int) arr_1 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1656546617)) != (118434603711439773ULL)))) : ((~(((/* implicit */int) var_1)))))))));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) -8840477791039917502LL)))));
                        arr_21 [i_1] [i_1] [i_1] = ((/* implicit */int) (-(max((((/* implicit */long long int) (~(-1556726484)))), (min((((/* implicit */long long int) (signed char)8)), (arr_5 [i_0])))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~((((_Bool)1) ? (8840477791039917502LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42054)))))))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((~(arr_11 [i_0] [i_1] [0] [i_7])))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (unsigned char)175))) >= (arr_3 [(unsigned char)7] [(unsigned char)7])))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (6523900426768199006ULL) : (var_10)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 3615484306967876412LL)) && (((/* implicit */_Bool) var_11))))))))));
}
