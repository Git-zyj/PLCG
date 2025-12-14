/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61482
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
    var_14 = ((/* implicit */signed char) (short)32762);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (7763530924914850515ULL)));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_4))), (((/* implicit */unsigned int) min((((/* implicit */short) var_10)), ((short)-32760))))))) ? (((/* implicit */int) min((((/* implicit */short) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), ((short)(-32767 - 1))))) : (((/* implicit */int) var_13))));
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [5ULL] [i_0] = var_11;
                arr_5 [i_0 + 2] = arr_3 [(unsigned char)13] [i_1] [(unsigned char)20];
            }
        } 
    } 
}
