/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7786
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 4084557655U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((long long int) -1393269971)))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((unsigned long long int) var_7)) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6182816682325402409ULL), (((/* implicit */unsigned long long int) (unsigned char)127))))) ? (min((2648201948U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (6623362845813653824LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47879))) - (var_11))))))))));
}
