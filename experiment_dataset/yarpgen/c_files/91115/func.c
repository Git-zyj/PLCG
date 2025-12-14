/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91115
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((var_12), (min((((/* implicit */unsigned long long int) var_11)), (var_7))))) : (var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)33)), (arr_1 [i_0 - 2]))))) + (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31640)))))))));
        var_14 = ((/* implicit */long long int) ((short) var_12));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) var_9)), (var_12)))))));
        arr_3 [i_0 + 1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (unsigned char)105)))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 6001594389331601260ULL)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_1)))))))));
}
