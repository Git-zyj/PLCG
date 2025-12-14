/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9826
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) min((var_7), (arr_1 [i_0] [i_0 - 1])))) != (((/* implicit */int) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_2 [i_0 + 1])) - (46))))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)19398)) : (((/* implicit */int) var_4)))))))));
        arr_5 [i_0] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1]))) ? (arr_3 [(short)4] [(short)4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13765)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_12 [5ULL] [i_2] [i_1] [i_1])))), (((/* implicit */int) ((unsigned short) var_4)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_1);
                                arr_17 [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) max(((short)-19413), ((short)-19399)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_20 [7ULL] [7ULL] [7ULL] [i_6] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_1] [i_2] [(unsigned char)3] [(unsigned char)3])) / (((/* implicit */int) arr_19 [i_2] [(short)3] [i_2] [i_2]))))) ? (((((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_6])) & (((/* implicit */int) arr_19 [i_1] [(unsigned char)11] [i_1] [i_6])))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)127)), ((short)-1))))));
                        arr_21 [i_1] [(short)5] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_14))) >> (((((/* implicit */int) max(((unsigned char)231), (var_9)))) - (201)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_1])))))) : (((/* implicit */int) (unsigned char)60))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1] = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (unsigned char)41)))))) < (((/* implicit */int) arr_14 [i_1]))));
                        arr_26 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) ? ((~(((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_7 + 1])))) : (((((/* implicit */int) arr_14 [i_1])) >> (((((/* implicit */int) (unsigned char)176)) - (154)))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_1])), (var_8)))) ? (min((((/* implicit */unsigned long long int) (short)-19417)), (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned short)7] [(unsigned short)7] [i_7 - 1] [i_7 - 2]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_7), (var_7)))) % (((/* implicit */int) arr_23 [i_1] [i_2] [(short)9] [(short)9])))))));
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) < (((/* implicit */int) max((var_5), (var_13)))))), (((((((/* implicit */_Bool) (short)28836)) ? (((/* implicit */int) (short)19398)) : (((/* implicit */int) (unsigned char)231)))) < ((~(((/* implicit */int) var_6))))))));
                    }
                }
            } 
        } 
    } 
}
