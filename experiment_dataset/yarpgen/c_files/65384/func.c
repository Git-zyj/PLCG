/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65384
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0 + 2]) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) ((signed char) var_10)))))) ? (((((/* implicit */unsigned long long int) var_1)) | (((unsigned long long int) 3414556660U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775792LL))) + (35LL))) - (7LL)))))))))));
                    var_13 = ((long long int) (signed char)0);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)0)))))));
}
