/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63658
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [9ULL]), (arr_4 [i_0])))) || ((!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (arr_0 [i_0]))))) ? (((unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))) : ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (arr_0 [i_0])))))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
            }
        } 
    } 
    var_22 = (((((~(var_11))) ^ (max((((/* implicit */unsigned long long int) var_18)), (var_1))))) << (((max((max((((/* implicit */unsigned long long int) var_9)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((var_1) - (11657445710812029605ULL)))))))) - (18446744073709520293ULL))));
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_11)))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */int) var_15)))))) == (((/* implicit */int) var_14))));
}
