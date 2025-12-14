/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71357
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_5)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_1 + 1])), (var_6)))))));
                    arr_9 [(short)17] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_12 [i_2] [i_3 - 1] [i_0 + 1] [i_3]))))) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) ((signed char) (unsigned short)32764)))));
                                arr_16 [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41299)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (var_4)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) arr_8 [i_1 - 2] [i_3] [(unsigned char)21]))))))) : (min((((/* implicit */long long int) ((signed char) var_1))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) arr_6 [i_0])) : (-202845848567697374LL)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 1] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_11 [i_0] [i_0] [(unsigned char)21] [(signed char)11]), (((/* implicit */unsigned int) (short)-3)))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) ? (((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_0))))) / (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (+(((int) var_7)))))));
                }
            } 
        } 
    } 
}
