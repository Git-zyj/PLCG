/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8443
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_1))));
        arr_2 [i_0 - 1] = (((~(((/* implicit */int) var_12)))) == (-1709400037));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */long long int) (~(1709400037)));
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))));
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((min((-1LL), (((/* implicit */long long int) 1709400037)))), (((/* implicit */long long int) var_10))))), (var_5)));
        }
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-1LL)))));
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1LL)))), (var_14)))));
        arr_8 [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (1709400055)))) ? (((/* implicit */int) var_9)) : (742468718)));
        var_22 = ((/* implicit */signed char) ((short) (!(var_0))));
    }
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        var_23 |= ((/* implicit */long long int) ((((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1496))))) ? ((+(((int) var_7)))) : (max((1709400037), (1709400040)))));
        arr_11 [i_3] = ((/* implicit */int) ((unsigned long long int) ((long long int) -1LL)));
    }
}
