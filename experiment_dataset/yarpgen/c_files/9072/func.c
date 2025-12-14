/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9072
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)19687);
        var_21 = ((/* implicit */signed char) ((long long int) (+(arr_1 [i_0]))));
        arr_2 [(signed char)18] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_0 [i_0]))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min(((unsigned short)19687), (var_10)))) : (((((/* implicit */_Bool) (unsigned short)45849)) ? (((/* implicit */int) (unsigned short)19687)) : (((/* implicit */int) var_10))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned short) -2147483626);
        var_23 = (~(((/* implicit */int) (short)23534)));
    }
}
