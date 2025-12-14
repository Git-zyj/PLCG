/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99479
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15120988363936354277ULL)))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(3325755709773197356ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)69))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((min((((3325755709773197338ULL) % (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 4]))));
                var_15 += ((/* implicit */int) var_9);
                arr_6 [10LL] [i_1] [i_1] &= ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(235678306U)))) ? ((~(max((var_11), (arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (104873543))) | ((~(((/* implicit */int) (short)-1)))))))));
                var_16 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_0 + 3])))) + (((/* implicit */int) min(((short)0), (((/* implicit */short) (unsigned char)42)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)));
}
