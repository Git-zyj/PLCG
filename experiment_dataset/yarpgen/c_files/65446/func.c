/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65446
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))) : ((~((-(var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(arr_0 [8LL])))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)180))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (var_9) : (-3LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 784384196U)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (17278733417419713586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                var_14 &= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) 727726824U)) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((~(((/* implicit */int) var_3))))))));
}
