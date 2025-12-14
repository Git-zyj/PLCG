/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64094
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
    var_15 = ((/* implicit */signed char) min((max((min((((/* implicit */long long int) var_9)), (var_14))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-26))))))), (var_13)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) var_8)) ? (var_13) : (max((((/* implicit */long long int) var_9)), ((+(var_14))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_7), ((unsigned short)50676)))) << (((((min((((/* implicit */long long int) var_2)), (var_13))) + (27411LL))) - (20LL)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_6))))) ? (var_9) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)56)), (var_10)))), (2784005098U)))));
    }
    var_18 = ((/* implicit */signed char) (short)-19568);
}
