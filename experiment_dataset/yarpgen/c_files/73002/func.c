/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73002
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
    var_10 = ((/* implicit */_Bool) max((var_10), (var_1)));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_3)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_6)))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_9)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [(_Bool)1] [(_Bool)1] [18ULL] = ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_4))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                                arr_13 [i_2] [i_4] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_5)))))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_0))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_0))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(signed char)8] [(short)23] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_1)))) | (((/* implicit */int) var_1))));
                arr_15 [i_0] |= ((/* implicit */long long int) ((((var_0) - (((/* implicit */int) (unsigned short)19222)))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
