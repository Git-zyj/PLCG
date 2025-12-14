/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94806
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (2863781664U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)31)) && (((/* implicit */_Bool) 8552260446773726548LL)))))) : (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)112))));
        var_13 = ((/* implicit */long long int) (short)-11193);
        var_14 *= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) arr_0 [i_0])), (4095U)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((((unsigned int) arr_2 [(short)4] [i_1 - 1])) == (((unsigned int) (unsigned char)148))));
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (unsigned char)247)))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL] [2ULL]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)10] [(signed char)10]))) & (var_7))) < (((/* implicit */long long int) var_6))))), ((((-(3ULL))) | (18446744073709551605ULL))))))));
        var_18 = min((((((unsigned long long int) 32767)) * (((/* implicit */unsigned long long int) max((1925274464), (((/* implicit */int) arr_5 [i_2]))))))), (((((72057594037927936LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551612ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) arr_5 [10ULL])) : (((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) (+(((12590246917594048246ULL) << (((((/* implicit */int) arr_7 [5LL])) - (24030)))))))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) arr_0 [1U]);
    }
    var_20 = var_1;
}
