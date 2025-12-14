/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89771
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
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) 1491103232U);
        var_19 = max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned long long int) 6858653053858358618LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) max((min((4294967275U), (((((/* implicit */_Bool) (unsigned char)164)) ? (4294967275U) : (2308144528U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15)))))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) 490922420U)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2)))))))));
    }
    var_23 = ((/* implicit */unsigned short) var_7);
}
