/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94828
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
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_5)), (var_9))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */short) var_12)))))))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) >= (arr_1 [i_0]))))))), (((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0])), (arr_2 [i_0] [i_0 + 1] [i_0])))) * (((/* implicit */int) max((((/* implicit */short) arr_3 [(unsigned short)18])), (var_3))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_4] [8LL] [i_4] [i_4] [i_4 - 4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) >= (-6482122873639614696LL)))), (var_0)));
                                var_17 ^= min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (var_5)))), (min((var_2), (((/* implicit */unsigned int) var_5)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
