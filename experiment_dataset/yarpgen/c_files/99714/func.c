/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99714
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [22] [i_0] = ((/* implicit */unsigned long long int) (~((-((~(var_18)))))));
        arr_3 [i_0] = ((/* implicit */short) var_18);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) <= (151908284)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(max(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (-3835798603712179007LL))))))));
        var_20 = ((/* implicit */unsigned char) ((((long long int) ((var_18) != (((/* implicit */unsigned int) ((/* implicit */int) (short)26270)))))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-115))))) ^ (var_5))))));
    }
    var_21 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26270))) : (var_6)))))));
}
