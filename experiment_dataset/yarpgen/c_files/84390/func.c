/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84390
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-123)) / (((((/* implicit */_Bool) var_5)) ? (-1563106855) : (((/* implicit */int) (short)(-32767 - 1))))))) % (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) var_3)))))));
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((unsigned int) var_4)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */long long int) (unsigned short)6725)), (min((((/* implicit */long long int) 1511301493U)), (6945018775324636624LL))))));
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_8)), (274877906943ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-20)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) > (18446743798831644672ULL))))));
}
