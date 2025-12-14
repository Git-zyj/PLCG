/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70428
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))))));
                var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (16343695214461589067ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_6)) - (65009)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_6))))) : (max((8814601851856232405ULL), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48502)))));
}
