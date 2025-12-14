/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60103
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((int) var_3))))), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))) << (((((((/* implicit */int) var_9)) & (((/* implicit */int) var_6)))) - (63)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [(signed char)0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 3])) != ((-(((/* implicit */int) arr_2 [i_0 + 3]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) << (((((/* implicit */int) max(((signed char)52), ((signed char)49)))) - (28)))));
            }
        } 
    } 
}
