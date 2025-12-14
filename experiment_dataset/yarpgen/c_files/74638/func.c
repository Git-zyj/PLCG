/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74638
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_17);
        arr_3 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((var_14) >= (((/* implicit */long long int) 1307932104U))))) & (((/* implicit */int) arr_0 [i_0])))));
    }
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_4))) >> (((((/* implicit */int) min(((unsigned char)44), (((/* implicit */unsigned char) var_18))))) - (23)))))) : ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49968))) : (7ULL)))))));
}
