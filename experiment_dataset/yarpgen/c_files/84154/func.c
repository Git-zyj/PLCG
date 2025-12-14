/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84154
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
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (short)6232)) * (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) (short)32767))))))));
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */int) -6163324620822465495LL);
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */int) max(((unsigned char)163), ((unsigned char)142)))) : (((((/* implicit */_Bool) (unsigned short)38917)) ? (((/* implicit */int) (unsigned short)26603)) : (((/* implicit */int) (unsigned short)38921))))))));
                var_16 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
}
