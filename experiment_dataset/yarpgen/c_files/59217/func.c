/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59217
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
    var_20 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)15780)))))), (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)15796), (((/* implicit */unsigned short) (_Bool)1))))) > (((/* implicit */int) ((unsigned char) (unsigned short)39237))))))));
    var_21 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_8))))) : (min((((/* implicit */unsigned int) var_3)), (4294967295U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) min(((signed char)33), (((/* implicit */signed char) arr_0 [i_0] [i_0 - 4]))));
                arr_8 [i_0] [1U] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */int) max((arr_6 [i_0 + 2] [i_0 - 3]), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_0] [i_0 - 1])))))) - (min((((/* implicit */int) (unsigned char)14)), (-1)))));
            }
        } 
    } 
}
