/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62607
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = (unsigned char)109;
        arr_5 [3ULL] = ((/* implicit */signed char) (~(-14LL)));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) 0ULL);
        arr_7 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-25))));
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)46)) ^ (((/* implicit */int) (unsigned char)146))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_12 [i_1] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */int) (unsigned short)30584)) - (((/* implicit */int) (short)0)))), (((/* implicit */int) min(((unsigned short)11331), (((/* implicit */unsigned short) var_6))))))), (max((-19), (974532689)))));
        arr_13 [i_1] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (unsigned short)255)), (4611686018427387903LL)))));
        arr_14 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)11591))));
    }
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6))))), (min((((/* implicit */long long int) -2147483641)), (16383LL))))))));
}
