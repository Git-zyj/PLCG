/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95848
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7407778659039878469LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_1)));
                        arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                        var_12 = ((/* implicit */int) (_Bool)1);
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    }
                    arr_13 [i_0 + 1] [(unsigned short)9] [i_0] [i_1] = ((/* implicit */int) ((unsigned long long int) (-(4294967295U))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned short) 178553349U);
}
