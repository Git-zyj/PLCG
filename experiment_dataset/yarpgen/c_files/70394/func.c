/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70394
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
    var_11 = ((/* implicit */_Bool) 18446744073709551606ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((((/* implicit */int) (short)-32729)) + (2147483647))) << (((9415978907972281511ULL) - (9415978907972281511ULL))))) : ((~(((/* implicit */int) var_6))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 3]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), ((+(-2508495788102150511LL)))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1])), (-6251298292163804074LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1])), ((unsigned char)179)))) : (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1])) % (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1]))))));
            }
        } 
    } 
}
