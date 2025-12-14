/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9222
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
    var_15 = ((/* implicit */_Bool) ((unsigned short) var_14));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (2147483647)))), (var_9)))) ? ((~(((/* implicit */int) (signed char)-32)))) : (-1927898874)));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(min((0), (var_13))))))));
    var_18 = ((/* implicit */unsigned short) (~(-1)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min((max((arr_1 [i_0 - 3] [i_0 - 3]), (max((((/* implicit */int) (_Bool)1)), (-1))))), (max((1), (arr_1 [i_0 - 3] [i_0 - 3])))));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(var_0)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)42435)))) ? (-1) : (0)))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) 14LL);
        arr_3 [i_0] = ((/* implicit */_Bool) min((((int) ((((/* implicit */_Bool) (short)-29196)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29196))))), (((/* implicit */int) arr_0 [i_0] [i_0 - 3]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((short) max((((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 - 3])), (((0LL) ^ (((/* implicit */long long int) arr_1 [0LL] [i_0])))))));
    }
}
