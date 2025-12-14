/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86596
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)(-127 - 1))))) | (((/* implicit */int) min((arr_4 [i_0] [i_0 + 2]), (((/* implicit */unsigned char) (signed char)85)))))));
                var_20 = ((/* implicit */int) min((var_20), ((~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)126))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)126))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) | (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)(-127 - 1)))))))) : (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (-2147483639))))))));
    var_22 = var_10;
}
