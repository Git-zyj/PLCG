/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92362
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) var_9))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) 413438758U);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)17859)) * (((/* implicit */int) var_4)))) / ((-(((/* implicit */int) var_3))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (var_2))), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)126)))))));
    var_13 = ((/* implicit */unsigned long long int) var_0);
}
