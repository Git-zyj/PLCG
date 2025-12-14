/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67863
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
    var_20 = ((/* implicit */signed char) ((max((-2147483630), (((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) (signed char)56))))))) != (1811844402)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned char)25);
        var_21 = ((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (signed char)-39)))) ? (max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)212)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_1 [i_0])));
    }
    var_22 = ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((/* implicit */int) ((_Bool) var_16))))))));
}
