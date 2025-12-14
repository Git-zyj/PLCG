/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89865
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
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_0 [i_0])))), (max((min((var_1), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)13)), (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_7);
    }
    var_16 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), (((/* implicit */int) var_0))));
}
