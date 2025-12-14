/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76700
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))))))));
                var_20 = ((/* implicit */long long int) 202739121259213388ULL);
                arr_6 [i_0 + 1] [i_1] [i_1] &= ((/* implicit */_Bool) 18244004952450338240ULL);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 202739121259213395ULL))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [18LL] [i_0 - 1])) < (arr_0 [i_0 - 1]))))))) <= ((~(17330405643433083849ULL)))));
                var_22 = ((/* implicit */unsigned char) var_13);
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)121)) << (((10005315323747012034ULL) - (10005315323747012022ULL)))));
}
