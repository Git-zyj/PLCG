/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93789
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) && (var_8))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) var_3))))))))) : (var_4))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (730526586282338511ULL) : (18446744073709551615ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_5), (((_Bool) (+(arr_2 [i_0] [(unsigned char)12] [i_2]))))));
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_1] [i_1] [i_1] [i_3])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [(short)10] [(short)10] [i_3])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max(((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_8))))))))));
                        var_15 = var_0;
                        arr_11 [i_0] [5LL] [i_0] [i_4] = min((((max((arr_6 [i_0] [i_0] [(unsigned char)3]), (((/* implicit */unsigned long long int) var_6)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])), (var_6)))))));
                    }
                    arr_12 [i_0] [i_1] [i_1] [i_0] = var_3;
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    arr_16 [i_0] [i_1] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [(short)4] [i_5] [i_5]))) : (max((((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((arr_5 [i_0] [i_0] [i_0]) >> (((/* implicit */int) var_0))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((min((((/* implicit */int) var_7)), (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [14LL] [15ULL] [i_1] [i_1] [i_0]))) : (var_4))))))))));
                    arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [(unsigned char)7] [i_0] [(unsigned char)7] [(unsigned char)7]))))), (var_7)))) | (((((((/* implicit */int) (signed char)-115)) + (2147483647))) << (((((/* implicit */int) min(((unsigned char)60), ((unsigned char)109)))) - (60)))))));
                }
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [(signed char)16] [i_1] [8ULL] [i_1] [i_0])) * (((/* implicit */int) var_0))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_0] [i_0] [i_1]))), (((/* implicit */unsigned long long int) min((var_0), (arr_15 [i_0] [9] [i_0])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
}
