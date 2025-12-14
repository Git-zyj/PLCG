/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64363
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (642695304U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */int) ((642695304U) <= (var_3)))) : (1082361561)))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 4380866641920ULL)) ? (var_16) : (3552088744U)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (927034711064513026LL))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) 2147483647);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max(((~(18446739692842909684ULL))), (4235938198674222670ULL))) >> (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15644)))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9143781866945794362ULL))))))))));
    }
    for (short i_1 = 3; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) (short)27331)))), (((13328810562713923635ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))))));
        arr_7 [i_1] = ((/* implicit */int) max((4622272778676549492LL), (((/* implicit */long long int) 451074750))));
    }
    for (short i_2 = 3; i_2 < 8; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_16))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
    }
}
