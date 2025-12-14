/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96657
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
    var_15 ^= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1]))))) : (((long long int) arr_4 [i_0 - 1]))));
                    arr_9 [i_0 + 1] [i_0] [i_0] [i_0] = (((_Bool)1) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [1ULL])), (var_3)))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((562400197607424LL) / (-562400197607424LL)))) < (((((/* implicit */_Bool) 2103533382U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (15905403539215977882ULL))))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), ((((_Bool)1) ? (10297615212666241448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((((var_0) || (((/* implicit */_Bool) var_8)))) ? (-562400197607447LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((var_8) | (var_10))))));
}
