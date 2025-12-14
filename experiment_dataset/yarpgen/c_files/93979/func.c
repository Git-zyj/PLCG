/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93979
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
    var_20 = ((/* implicit */unsigned int) var_13);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))));
    var_22 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (var_9))))) | ((~(var_19))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)19481)) : (((/* implicit */int) var_5)))) << (((max((953656709U), (953656713U))) - (953656703U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((((/* implicit */int) ((short) arr_7 [i_0]))), (((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) (unsigned short)26873))))));
                    var_24 = ((/* implicit */unsigned char) var_1);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (((/* implicit */int) ((3341310591U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((-(1467085267U))))))));
                    arr_8 [i_0] [(_Bool)1] [i_2] [i_0] |= ((/* implicit */long long int) arr_6 [(short)12] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_26 = ((long long int) (~(((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) (signed char)-15)))))));
}
