/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70920
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
    var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 145591816)), (2584831076U)))) ? (var_2) : ((+(var_4))))), (((/* implicit */long long int) var_1))));
    var_12 = ((/* implicit */unsigned short) var_3);
    var_13 = (+(131071LL));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((max((var_6), (var_8))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2251799813685247ULL))))))))) : (((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))) ^ (var_7)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [(unsigned char)8] [i_0 - 1]) : (((/* implicit */long long int) var_9))))) ? (max((((/* implicit */long long int) var_3)), (arr_1 [i_0] [i_0 - 1]))) : (max((((/* implicit */long long int) var_9)), (arr_1 [i_0] [i_0 - 1])))));
    }
}
