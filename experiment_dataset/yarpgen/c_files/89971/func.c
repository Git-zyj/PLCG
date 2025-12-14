/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89971
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
    var_20 = ((/* implicit */unsigned long long int) var_18);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)3)) ? (3295962612U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5818))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5824)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) (unsigned short)59717)) : (((/* implicit */int) (unsigned short)5826)))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5818)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49085))) : (4294967293U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)29), ((signed char)29))))) : (max((1125899906842623ULL), (((/* implicit */unsigned long long int) (unsigned short)16461))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1381148966)) ? (((/* implicit */int) (short)-15414)) : (((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) (unsigned short)5837)) ? (((/* implicit */int) (unsigned short)49073)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned char)230))))) : (((((/* implicit */_Bool) 5302641402267681101ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59719))) : (((long long int) 986626716862135041ULL))))));
            }
        } 
    } 
}
