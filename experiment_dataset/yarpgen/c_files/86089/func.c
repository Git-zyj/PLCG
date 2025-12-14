/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86089
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) max(((signed char)-81), (arr_4 [i_0 + 2] [i_1 + 1] [i_1] [i_2]))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) arr_3 [i_1])) : ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3])) ? (arr_5 [i_0 - 1] [(short)23]) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                        var_15 = ((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1 + 2] [i_0] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_7 [(short)19] [i_0 - 2] [i_1 + 1]))))));
                        arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2])))) ? (min((((/* implicit */int) arr_2 [i_1])), (arr_5 [i_0] [(unsigned char)1]))) : ((~((+(((/* implicit */int) var_4))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_14 [i_4] |= ((/* implicit */unsigned char) -7923554137769564660LL);
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)93))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (arr_13 [3LL] [i_0 - 1] [i_1] [i_1 - 1] [i_1 + 1] [i_2]) : (arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1])));
                        arr_16 [i_0 + 1] [(_Bool)1] [i_2] [i_1] [(short)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_0 - 1] [i_0])) ? (arr_11 [i_1 - 2] [(unsigned char)23] [i_0 + 1]) : (arr_11 [i_1 + 1] [i_0] [i_0])));
                    }
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_19 [(unsigned char)10] [i_1] [i_1] [i_5] [i_0] [i_1] = ((/* implicit */long long int) max((max((arr_11 [i_0] [i_1 + 1] [i_5]), ((~(arr_11 [i_5] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((signed char)62), ((signed char)62)))), (((((/* implicit */int) (signed char)62)) >> (((((/* implicit */int) (unsigned short)20525)) - (20509))))))))));
                        var_17 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_4 [i_0 - 2] [i_0] [i_0] [i_0 - 1])))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_0)))));
                        arr_20 [i_1] [i_2] [i_1] [(signed char)22] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_5] [i_2] [i_1] [i_0])), (max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_2] [i_5])) << (((((/* implicit */int) (unsigned char)147)) - (147))))))))));
                    }
                    for (int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        arr_24 [i_0 - 1] [i_1] [i_2] [i_6] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)45010))))) ? ((~(((/* implicit */int) arr_9 [i_6] [i_2] [i_1 - 1] [i_1] [(short)2] [i_0])))) : ((~(((/* implicit */int) (signed char)-109))))))) ? (max((((/* implicit */int) min(((signed char)-81), ((signed char)81)))), (((arr_23 [i_1] [i_2] [i_1] [i_1] [22LL] [i_1]) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) var_7)))))) : (arr_22 [i_0] [i_1] [i_2] [i_6 + 1] [i_2])));
                        arr_25 [i_6 - 1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [19] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [(signed char)4] [(unsigned char)22] [(signed char)2] [i_6 + 3] [i_6 + 1])) : (((((((/* implicit */int) (signed char)-98)) + (2147483647))) >> (((3848290697216ULL) - (3848290697212ULL))))))));
                    }
                    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_23 [i_2] [i_1] [i_1] [i_1] [i_0] [i_2]))))) ? (((/* implicit */int) ((unsigned char) arr_2 [(signed char)6]))) : ((~(arr_5 [(unsigned short)12] [i_2])))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2] [i_2] [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]))))) / (((unsigned long long int) arr_22 [i_2] [i_2] [i_1] [i_0] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_20 = (unsigned short)45025;
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) (short)-21680)) ? (((/* implicit */int) arr_17 [i_7] [3] [i_8] [i_8])) : (((/* implicit */int) arr_18 [i_7] [i_7] [12LL]))))))));
                arr_31 [(_Bool)1] &= ((/* implicit */unsigned short) (~(480628039)));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_27 [i_7]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_7])))) * (((/* implicit */int) arr_28 [i_7]))))) ? (((int) max(((short)-31324), (((/* implicit */short) arr_29 [i_7] [i_8] [i_7]))))) : ((-(((/* implicit */int) arr_0 [(_Bool)1]))))));
            }
        } 
    } 
}
