/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56572
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
    var_11 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) < (((unsigned int) var_9)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4362862139015168ULL)))) ? (((/* implicit */int) min((arr_14 [i_4 - 2]), (arr_4 [i_4 - 4] [i_4 - 4])))) : ((~(((/* implicit */int) arr_14 [i_4 - 1]))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((int) max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned short) var_8))))), ((+(arr_2 [i_3] [(signed char)7])))))))));
                                arr_16 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) arr_14 [i_0])), (-8482511114972458908LL)))))));
                                var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_12 [i_2] [i_4 + 1] [i_4 - 3] [i_4 - 4] [i_4 + 1] [i_4]), (var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) >= (var_2))))))) ? ((+(((var_8) ? (var_5) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 853253709U)) ? (var_2) : (var_2))) >= (((/* implicit */unsigned long long int) var_4))))))))));
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))) - (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (853253709U))));
}
