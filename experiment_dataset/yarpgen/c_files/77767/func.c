/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77767
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */int) (unsigned short)58368)) : (((/* implicit */int) (unsigned short)58368))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_15))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [(short)5])))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58368)))))));
                            var_19 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)7168)) + ((-(((/* implicit */int) arr_5 [i_1])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58368)) || ((_Bool)1))))) * (arr_4 [i_0] [4U] [i_1 - 4]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned short)58362))));
}
