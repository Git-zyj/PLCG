/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91079
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_17)) : (var_16)))) ? (arr_0 [i_4] [i_2]) : (((/* implicit */int) ((unsigned short) arr_9 [i_0])))))), (min((min((((/* implicit */unsigned int) var_2)), (arr_7 [(_Bool)1] [i_1 + 1] [i_1] [i_1 - 1]))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0] [i_0])))))));
                                var_19 -= max((((((var_0) >= (var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_1] [i_3] [i_4]))), (((/* implicit */unsigned long long int) min((187141084), (((/* implicit */int) (unsigned char)252))))));
                                arr_10 [11U] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((arr_9 [i_0]), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9))))))), (((unsigned int) var_6))));
                                var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) min((var_12), (var_3))))), (min((((long long int) var_14)), (((/* implicit */long long int) arr_1 [i_2]))))));
                                arr_11 [i_3] [i_2] [i_2] [i_3] [i_2] [16ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((arr_4 [i_0] [17ULL] [i_2]), (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_4] [i_3] [i_0 - 1]))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_4] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_3] [i_4])) : (var_17)))))) : (min((((var_11) + (arr_2 [i_3] [i_3] [i_3]))), (((arr_2 [i_4] [i_3] [i_1 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [0U] [(short)11] [i_1] &= ((/* implicit */unsigned int) ((((unsigned long long int) arr_6 [i_0 - 1] [i_1])) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (max((var_5), (var_17))) : (((/* implicit */int) var_3))))));
    var_22 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_11))))) * (min((max((var_0), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)14164)))))))));
}
