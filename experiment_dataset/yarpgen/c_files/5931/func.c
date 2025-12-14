/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5931
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
    var_18 = ((/* implicit */long long int) ((short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [8ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (1LL)));
                            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_3]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_5 [i_1] [i_2] [i_3])), (arr_8 [i_3] [i_2] [(_Bool)1] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2951)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_2 - 2] [i_1] [i_3])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1] [i_3] [i_1] [i_1])) : (((/* implicit */int) (short)3968))))) : (arr_6 [i_2 + 2] [i_2 - 3] [i_2 - 2])))) : (max((((/* implicit */unsigned long long int) max((arr_4 [i_3] [(short)4] [i_3]), (var_9)))), (arr_1 [i_3] [i_3])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((min((12ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (arr_4 [(signed char)7] [i_0] [i_0])))) >= (35184372088320LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_16);
}
