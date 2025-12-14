/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76402
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)0)), (315392671U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) 2088960U)) ? (((/* implicit */int) (short)9241)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4292878336U)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = (~(min((arr_0 [i_0]), (((/* implicit */int) (signed char)120)))));
                var_14 ^= ((/* implicit */signed char) ((min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) == (((/* implicit */unsigned int) ((int) 3812020377724004920ULL)))));
                arr_5 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_1] [i_1])))) == ((~(arr_0 [10U]))))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (130023424U)))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) max((min((((((/* implicit */int) (unsigned short)12213)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_3)))), (((/* implicit */int) var_3))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (-1079025339)))) * (((min((((/* implicit */unsigned long long int) (signed char)47)), (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_9)))))))));
}
