/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7260
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
    var_15 = ((/* implicit */long long int) ((max((((((var_3) + (9223372036854775807LL))) << (((var_7) - (1120873617476198926ULL))))), (min((9223372036854775797LL), (var_3))))) >= (((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_0 [6ULL]))))) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_11))))) : (min((((/* implicit */unsigned long long int) 134217728)), (8662397953625437769ULL)))))) ? (((((/* implicit */_Bool) 9223372036854775783LL)) ? (((((/* implicit */_Bool) (short)-26072)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14336))) : (3357277879U))) : (3357277874U))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-16)), (arr_2 [i_0])))) ? (((937689407U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 4] [i_0]))) / (arr_2 [i_0 - 4])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_7), (9784346120084113847ULL)))) ? (((/* implicit */unsigned long long int) max((3357277879U), (((/* implicit */unsigned int) var_6))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (var_7))))) / (((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) 9784346120084113847ULL)))) ? (((/* implicit */unsigned long long int) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (8662397953625437769ULL)))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16739017022599710857ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12288))) : (arr_2 [i_0 + 3])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))) : (max((var_12), (var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1232478763)) ? (0U) : (0U)))) ? (((/* implicit */unsigned long long int) 4294967279U)) : (min((((/* implicit */unsigned long long int) 3357277887U)), (1653398276667934453ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4194300)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4541)))))), (max((9223372036854775803LL), (var_5))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) 16793345797041617162ULL)))))) % (max((((/* implicit */unsigned int) var_0)), (498026653U)))))) != (((max((((/* implicit */unsigned long long int) var_10)), (var_7))) + (((/* implicit */unsigned long long int) max((2806051974U), (arr_2 [i_0]))))))));
    }
}
