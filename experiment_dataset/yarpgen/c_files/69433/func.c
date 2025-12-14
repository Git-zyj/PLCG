/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69433
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
    var_10 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [21U] [i_1] = ((/* implicit */unsigned int) (unsigned short)2055);
                arr_6 [4ULL] [4ULL] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                var_11 = ((/* implicit */long long int) min((arr_2 [i_0 - 2]), (min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1])))));
                var_12 ^= (-(var_4));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (((+(((/* implicit */int) var_1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_8))))))));
}
