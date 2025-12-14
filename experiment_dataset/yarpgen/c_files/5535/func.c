/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5535
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_13)) < (((((/* implicit */int) arr_2 [i_0 + 1])) * (((/* implicit */int) arr_1 [i_0]))))))) << (((/* implicit */int) var_11))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (+(max((arr_0 [i_1 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1746)))))))));
        var_18 = ((/* implicit */signed char) (!(var_15)));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((signed char) ((((/* implicit */_Bool) max((18446744073709551610ULL), (((/* implicit */unsigned long long int) (signed char)69))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) (unsigned short)31839)) ? (35175782154240LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_2]), (((/* implicit */long long int) var_0))))) : (18446744073709551615ULL)))));
        var_20 = ((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_9))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)));
    }
    for (int i_3 = 1; i_3 < 10; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = arr_5 [i_3];
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (signed char)-16)) ? (876855727958839103ULL) : (4632050769225607961ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1]))))) : (((/* implicit */unsigned long long int) (+(1124800395214848LL))))));
        arr_14 [(signed char)3] [i_3] = ((/* implicit */int) (~(max((arr_12 [i_3 + 1]), (((/* implicit */long long int) var_2))))));
    }
    var_23 |= ((/* implicit */int) ((((/* implicit */long long int) min(((~(var_4))), (((/* implicit */int) ((signed char) (_Bool)1)))))) ^ (var_6)));
}
