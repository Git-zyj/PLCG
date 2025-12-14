/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74049
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
                    var_14 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (signed char)67)), (var_4))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])) ? (13261935898840597598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0 + 1])) / (arr_5 [i_0 + 1] [i_1 + 3] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))) : ((-(((/* implicit */int) (short)7505))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) - (281200098803712LL));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((13261935898840597599ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))))))))));
                }
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_0 [i_0]))), (var_6)));
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) var_9)));
}
