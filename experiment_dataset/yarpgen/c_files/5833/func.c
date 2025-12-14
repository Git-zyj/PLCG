/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5833
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
    var_20 = ((/* implicit */unsigned short) (unsigned char)226);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 1] [i_1] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (signed char)-105))))) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0 - 2])))))));
                var_21 ^= (+((+(((/* implicit */int) (unsigned char)201)))));
                arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) ((unsigned short) -1169177090));
            }
        } 
    } 
    var_22 = max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (short)13359)) : (((/* implicit */int) var_9))))) & (max((7U), (((/* implicit */unsigned int) var_16)))))), (((/* implicit */unsigned int) var_9)));
    var_23 = ((/* implicit */unsigned short) var_8);
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((max((var_1), (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) max(((unsigned char)0), (var_10))))))))))));
}
