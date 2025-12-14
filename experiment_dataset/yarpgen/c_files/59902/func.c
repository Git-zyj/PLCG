/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59902
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (((~(((((/* implicit */unsigned int) 119942816)) & (var_7))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29078)))));
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36457)) | (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)2541)))))))), (var_10)));
        arr_4 [(unsigned short)19] [i_0] = ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (var_9)))) <= (min((((/* implicit */unsigned long long int) var_9)), (var_1))))) ? (((/* implicit */int) var_0)) : (56202799));
    }
    var_15 -= ((/* implicit */unsigned long long int) ((unsigned int) (~(56202793))));
}
