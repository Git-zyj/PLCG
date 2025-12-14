/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85406
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
    var_13 -= ((/* implicit */unsigned short) ((signed char) max((var_7), (((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)120)))))));
    var_14 = ((((/* implicit */_Bool) max((988412660U), (((/* implicit */unsigned int) (short)-20313))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)24634))))) : (((/* implicit */int) (unsigned short)6556)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31672)) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))), (((((/* implicit */_Bool) (unsigned short)58982)) ? (((/* implicit */int) (short)-26)) : (arr_0 [i_0]))))) : ((-(max((((/* implicit */int) var_9)), (arr_6 [8U] [8U] [(_Bool)1])))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (2147483645) : (((/* implicit */int) (!(((((/* implicit */_Bool) 607495104)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((short) max((((/* implicit */int) ((((/* implicit */_Bool) 3087299947U)) && (((/* implicit */_Bool) (signed char)51))))), (var_7))));
}
