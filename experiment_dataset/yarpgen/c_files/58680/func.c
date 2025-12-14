/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58680
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
    var_14 = ((unsigned short) (unsigned short)18143);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_2 - 1] [i_2 + 3] [i_2 + 4]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47393))) : (min((min((((/* implicit */unsigned int) var_2)), (arr_2 [i_0] [i_2 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (unsigned short)0)))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_3] [(unsigned short)20] [i_1]))) + (var_1)))) ? (((/* implicit */unsigned long long int) var_10)) : ((-(524593321066728427ULL)))))) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_2 + 1])) : (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                arr_15 [16ULL] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62255))) : (arr_2 [i_0] [i_2 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_9)) - (64357))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
