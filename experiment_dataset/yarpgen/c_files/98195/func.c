/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98195
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
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */int) (short)15180))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0 + 1]);
        var_13 = ((unsigned int) (short)-15191);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) arr_3 [i_1]);
        var_15 *= ((/* implicit */unsigned long long int) min((arr_3 [i_1]), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_1])))));
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-15181)))))));
    }
    var_17 = ((/* implicit */unsigned int) var_10);
}
