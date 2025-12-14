/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96358
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_18 += ((/* implicit */unsigned char) ((((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned char)118)))))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)36993))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) var_5)))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 27021597764222976ULL))) ? (((long long int) arr_7 [i_1] [i_2] [i_3])) : (((/* implicit */long long int) arr_1 [i_1]))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [(unsigned short)0]) : (((/* implicit */int) var_13))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_11 [(signed char)7] [i_0] [i_1] [i_1] [i_4]) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (3135606378987062314ULL)))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_11 [i_4] [i_2] [i_1] [12ULL] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_3 [i_0]))) < (((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)116))))))))) : (((((/* implicit */_Bool) 548279379201098012LL)) ? (arr_2 [i_0]) : (arr_0 [i_2]))));
                    }
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_5 - 1])) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))))) >= (((unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))))));
                        arr_16 [i_0] [i_1] [i_2] [13] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((~(arr_1 [i_1]))), ((+(((/* implicit */int) (short)24949))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [(_Bool)1] [i_2] [i_5])), (arr_11 [15ULL] [(unsigned short)2] [i_2] [i_2] [i_5])))) ? (arr_11 [i_0] [i_0] [i_0] [0LL] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073733632)) ? (-548279379201098008LL) : (1008806316530991104LL))))))));
                        arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (548279379201098012LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_5), (arr_5 [i_0] [19] [i_0] [13ULL])))))) : (min((var_10), (var_2)))));
                    }
                    arr_18 [(short)1] [i_1] [i_2] = ((((/* implicit */_Bool) (unsigned short)44378)) ? (max((((12220721788239440459ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7228))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11918)) || (((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_1);
    var_25 &= ((/* implicit */unsigned long long int) var_0);
    var_26 = ((/* implicit */long long int) var_5);
}
