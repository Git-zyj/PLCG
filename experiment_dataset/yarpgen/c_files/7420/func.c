/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7420
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2993818368925862162ULL)) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) (short)1204))))) : (((((/* implicit */_Bool) (~(2993818368925862162ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-49595292) : (((/* implicit */int) var_2))))) : (max((5017032699764616604ULL), (((/* implicit */unsigned long long int) var_10))))))));
    }
    var_12 = ((/* implicit */unsigned int) var_1);
}
