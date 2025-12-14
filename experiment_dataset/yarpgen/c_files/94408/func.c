/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94408
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
    var_20 = ((/* implicit */short) ((unsigned char) var_11));
    var_21 *= ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) ((((((var_16) + (2147483647))) >> (((((/* implicit */int) var_17)) - (22999))))) / (var_16))))));
    var_22 &= ((/* implicit */int) 16216192657240673604ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0] [i_1])), (2147483647)))), (max((((/* implicit */unsigned long long int) var_9)), (6426138848911976058ULL)))))))));
                arr_5 [i_0] = ((/* implicit */signed char) min(((unsigned char)195), (((/* implicit */unsigned char) (signed char)-72))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6806773979779351147ULL)) ? (4460078067807705802LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (max((11639970093930200468ULL), (16216192657240673617ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (unsigned char)58)), (var_17))), (max(((unsigned short)42455), (((/* implicit */unsigned short) var_7))))))))));
            }
        } 
    } 
}
