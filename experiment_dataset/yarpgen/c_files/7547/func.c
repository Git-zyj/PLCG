/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7547
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
    var_19 = ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_18))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) min((var_20), (arr_0 [i_0])));
        var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */int) (short)-7039)) < (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_1))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) arr_2 [i_1] [i_1])) : (arr_6 [i_1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (short)7045)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_9)) - (38425))))))))))));
        var_23 ^= ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (max((((arr_6 [i_1]) >> (((((/* implicit */int) (short)7030)) - (7003))))), (((/* implicit */long long int) min((arr_5 [i_1]), (var_4)))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2137)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_1]))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)76)), (arr_1 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) << (((arr_6 [i_1]) - (9029502011894662677LL)))))) : (((8470146263223345444LL) % (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((8470146263223345435LL), (((/* implicit */long long int) (unsigned char)208))))) || (((/* implicit */_Bool) ((unsigned char) arr_5 [i_1]))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7046)) ? (8470146263223345444LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    }
}
