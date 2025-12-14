/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90577
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [9LL] [i_0])), (arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((max((arr_2 [i_0]), (((arr_2 [i_0]) + (((/* implicit */long long int) arr_1 [i_0])))))), (min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [20LL]), (arr_2 [(unsigned char)0])))) ? (min((arr_2 [(signed char)16]), (arr_2 [(unsigned short)20]))) : (((arr_2 [18ULL]) + (arr_2 [(_Bool)1])))));
    }
    var_14 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    var_15 += ((/* implicit */unsigned int) (~(max((min((var_10), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) min((var_5), (var_11))))))));
    var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((-(var_1)))))));
}
