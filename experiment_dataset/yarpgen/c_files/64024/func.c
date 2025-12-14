/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64024
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) var_2))))) - (((((/* implicit */int) var_9)) * (((/* implicit */int) var_10)))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_0))))))))));
                    arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((unsigned char) arr_6 [i_1] [(unsigned char)7] [(unsigned char)7] [i_1]))) >> (((max((var_11), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [3] [i_2])))) - (12159129220683907493ULL))))), (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2 + 1] [i_0] [3U] [i_4 + 2] [i_1] = (-(((/* implicit */int) arr_12 [i_1] [i_3 - 3] [i_1] [i_1])));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [1ULL] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3] [i_3 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_1]), (((/* implicit */int) var_2))))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [0] [i_3] [i_4 + 2])) : (var_4)))) : (((((/* implicit */_Bool) 3773582057U)) ? (3773582057U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4 + 2] [i_1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])) | (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 1] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) (~(((arr_8 [i_1]) + (((/* implicit */int) arr_11 [i_1] [i_3] [i_2 - 2] [i_0] [i_1]))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) ((arr_4 [i_4 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_3 - 3] [i_3] [i_3 - 2]))))));
                                arr_17 [i_0] [0] [i_2] [i_3] [i_4 - 1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) - (min((var_5), (((/* implicit */long long int) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_2))))) > (max((((/* implicit */unsigned long long int) var_6)), (8080257783368690448ULL))))) ? (((/* implicit */int) var_0)) : (var_3)));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (var_12))))) : (var_8)));
    var_16 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))))))));
    var_17 = min((((((/* implicit */_Bool) ((unsigned int) var_3))) ? ((-(var_4))) : (((int) 3335540538U)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_7))))));
}
