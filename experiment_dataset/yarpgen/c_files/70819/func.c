/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70819
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0 - 3] [13LL]))) == (6993835430270947321ULL))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2147483647)) : (6993835430270947321ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 11452908643438604294ULL)))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (8263957143059165167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_2 [i_0 - 1]) ? (((arr_0 [i_0 - 3] [i_1]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max(((+(((1797276030) << (((/* implicit */int) var_2)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (11452908643438604294ULL)))))));
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (_Bool)1))));
}
