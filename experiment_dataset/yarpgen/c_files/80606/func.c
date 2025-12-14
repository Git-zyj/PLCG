/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80606
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [(_Bool)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_10 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 2]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4405164781304224590LL)), (18446744073709551615ULL)))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) arr_2 [(unsigned short)17])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_5 [i_1])))))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (1ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_0 [17U]), (arr_0 [i_1])))), (max((5U), (933338572U))))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2]))) : (((9223372036854775794LL) >> (((/* implicit */int) (_Bool)0))))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)65535))))))) : ((-(17169653054084880747ULL))))))));
    }
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) ((_Bool) var_8)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) var_1))))))));
}
