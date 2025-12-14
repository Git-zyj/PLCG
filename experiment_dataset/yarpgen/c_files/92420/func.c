/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92420
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
    var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    var_21 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((+(var_7))) : (var_14)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [13] |= ((/* implicit */_Bool) min((min(((+(arr_2 [i_0]))), (((arr_2 [i_1]) + (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [(unsigned char)6]), (arr_0 [i_1 - 3])))) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 - 3] [i_1 + 1]))))) ? (((/* implicit */int) (unsigned short)43116)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43116))))) ? (((/* implicit */int) (unsigned char)61)) : ((+(-1040834008)))))));
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) 1040834013);
}
