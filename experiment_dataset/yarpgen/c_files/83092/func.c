/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83092
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
    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) max((var_10), (((/* implicit */short) var_0)))))))) ? (((((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))))) : (((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_11))))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (min((var_9), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    var_16 = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned int) var_5)), (var_9))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (((((_Bool)0) ? (435093844) : (((/* implicit */int) (signed char)-77)))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_1 + 1])))) - (max((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_1]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)70)))) / (((/* implicit */int) (unsigned short)23307))))) : (((((/* implicit */_Bool) ((int) arr_1 [i_0 + 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(short)5] [(short)5])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))) : (max((arr_2 [(unsigned short)20]), (arr_2 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2 - 2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_1])), (arr_3 [i_1] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1])), (arr_1 [i_1]))))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_4 [(short)16]))), (max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_4 [(signed char)4]))))))) ? (((((/* implicit */_Bool) arr_8 [20LL])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) arr_10 [(signed char)12] [(signed char)12])) ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */int) arr_7 [(unsigned short)2])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [14] [i_2])) ? (((/* implicit */int) arr_7 [20ULL])) : (arr_11 [i_0 + 3] [i_1 + 1] [i_2] [i_3])))) < (((((/* implicit */_Bool) arr_6 [i_0 + 3] [(unsigned char)15] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [19U] [i_1]))) : (arr_1 [0LL])))))))))));
                        }
                    } 
                } 
                arr_13 [i_0 + 3] [i_0 + 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) < (arr_2 [i_0]))) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1])))) != (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [1LL] [i_1] [i_1])) : (arr_0 [i_0] [i_1 - 1]))))))) : (((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_7 [i_1])))))));
                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) max((((arr_7 [2U]) ? (((/* implicit */int) arr_7 [(unsigned short)12])) : (arr_8 [(_Bool)1]))), (arr_0 [i_1] [i_0 + 2])))) ? (((/* implicit */int) ((signed char) min((arr_11 [i_0 + 2] [i_0] [i_0] [i_1]), (arr_0 [i_0 + 2] [i_1]))))) : (((int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [18U] [(signed char)4] [i_0 + 2]))) : (arr_1 [i_0 + 3]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 7; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 - 1] [i_4 + 3]))) : (arr_2 [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_5])) ? (((/* implicit */int) arr_17 [i_4] [i_5 + 1])) : (((/* implicit */int) arr_9 [i_4] [i_5 + 2])))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)36138)) : (((/* implicit */int) (signed char)65))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_2 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4])))))))) : (min((arr_2 [i_4 + 3]), (((/* implicit */unsigned int) ((signed char) arr_16 [i_5]))))))))));
                arr_19 [i_4] [i_5 - 1] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_4 + 1] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)22])) ? (arr_0 [i_4 - 2] [5]) : (((/* implicit */int) arr_4 [i_5]))))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)7] [i_4 - 2] [i_4]))) : (arr_2 [(unsigned char)15]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_5 - 1] [i_4 + 2])) - (((/* implicit */int) arr_3 [i_4 - 2] [i_5])))))));
            }
        } 
    } 
}
