/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91414
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = ((((/* implicit */_Bool) ((1730648651) | (((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-71)));
        var_19 &= ((/* implicit */long long int) (-2147483647 - 1));
        arr_3 [10LL] [6LL] = (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_20 -= ((/* implicit */signed char) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) + (arr_2 [11])))) ? (arr_2 [i_0]) : ((+(arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_21 = (~(var_14));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_4 [2] [i_1])) ? (((/* implicit */long long int) ((1288700829) - (2147483647)))) : (var_9));
    }
    for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_22 *= ((/* implicit */unsigned int) ((min((arr_5 [i_2 + 3]), (arr_5 [i_2 - 1]))) == (((/* implicit */long long int) (+(arr_8 [i_2 + 1]))))));
        arr_9 [i_2] = ((/* implicit */long long int) arr_1 [13LL] [i_2]);
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ (var_17))))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2147483641)) ? (var_2) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((var_14) % (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) var_7))))));
}
