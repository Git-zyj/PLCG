/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92696
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
    var_13 *= ((/* implicit */unsigned long long int) var_4);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))))) : (((((/* implicit */int) (short)63)) & (1194560601))))))));
    var_15 ^= ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_1])), (var_11))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [(signed char)10]))))) ? (((/* implicit */int) arr_4 [i_1])) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) (unsigned char)128)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) min(((unsigned char)41), ((unsigned char)16))))), (((((_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [(signed char)17] [i_2]))))) : (arr_0 [i_1] [i_0])))));
                        arr_13 [i_2] [i_3 - 3] [i_2] [i_1] [6U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_1]) : (var_2)))))), (var_7)));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((min((arr_3 [i_4 + 1]), (((/* implicit */unsigned int) arr_2 [i_2] [i_4 + 1] [i_4 + 1])))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_4 + 1] [i_0])))))));
                        var_18 = max((((/* implicit */int) arr_12 [(signed char)0] [(signed char)16] [(unsigned char)0] [(signed char)16] [(signed char)16] [4])), (((((/* implicit */int) arr_7 [i_2] [i_2] [4U])) << (((((/* implicit */int) arr_4 [i_1])) - (164))))));
                        var_19 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [(short)17] [(short)17]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_1] [(signed char)7] = ((/* implicit */int) var_0);
                        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) > (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))), ((~(((/* implicit */int) arr_10 [(signed char)3] [i_0] [13U] [i_2] [i_2] [i_5]))))));
                        arr_19 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1]))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
}
