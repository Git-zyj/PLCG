/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94491
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
    var_19 = max((var_14), (((/* implicit */short) ((min(((-2147483647 - 1)), (((/* implicit */int) (short)28877)))) == (min((((/* implicit */int) var_12)), (2147483647)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 2] [i_2] [i_2] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) min((max((3316771467U), (((/* implicit */unsigned int) arr_2 [i_2] [i_0 + 2] [i_0 + 2])))), (((/* implicit */unsigned int) arr_6 [(short)9] [i_1 - 1] [i_0 + 2] [i_0])))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) var_12)), (arr_5 [i_0] [i_1]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 2]))) >= (((unsigned long long int) 2272014432U)))))))))));
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((short) 2504926696U)));
                }
            } 
        } 
    } 
}
