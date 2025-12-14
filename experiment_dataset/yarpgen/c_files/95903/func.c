/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95903
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
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)62751))));
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) * (((/* implicit */int) (_Bool)0))));
        var_22 = ((/* implicit */long long int) arr_3 [i_1]);
        var_23 = ((/* implicit */long long int) min((var_23), (arr_1 [i_1] [i_1])));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_1 [i_1] [i_1]) - (arr_1 [i_1] [i_1])));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 536870880)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20235))))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((((/* implicit */_Bool) min((arr_7 [(unsigned char)14]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((var_6) << (((/* implicit */int) arr_8 [i_2]))))) : ((-(-5170353566426443744LL))))))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_7 [i_2]) - (max((((/* implicit */int) (_Bool)1)), (arr_7 [i_2]))))))));
        var_27 -= ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) min((var_13), (((/* implicit */short) (signed char)(-127 - 1)))))), (arr_7 [7])))) <= (arr_6 [i_2])));
    }
}
