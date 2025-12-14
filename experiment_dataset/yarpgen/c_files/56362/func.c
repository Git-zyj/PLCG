/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56362
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
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) max(((+(min((4294967295U), (((/* implicit */unsigned int) (signed char)127)))))), (((/* implicit */unsigned int) (((-(4294967295U))) == (((/* implicit */unsigned int) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (+((~(arr_0 [i_0])))));
            arr_6 [i_0] [i_0] [5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)132))))) : (max((var_5), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) var_5);
            arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) var_11)) & (max((((/* implicit */long long int) arr_2 [12])), (arr_3 [i_0])))))));
            var_21 -= min((((arr_5 [i_2]) ^ (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (+(((var_9) << (((arr_3 [i_0]) - (805846078526257348LL)))))))));
        }
    }
    var_22 = ((/* implicit */unsigned long long int) var_14);
}
