/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61500
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
    var_13 = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) max(((unsigned char)223), ((unsigned char)223))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)27))))), (max((((((/* implicit */unsigned long long int) var_5)) ^ (0ULL))), (((/* implicit */unsigned long long int) var_11))))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)177))))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) - (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-78)), (arr_2 [(unsigned short)12]))))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)226)))))));
    }
    for (long long int i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */long long int) (unsigned char)16);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)22)) ? ((~(min((var_0), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_18 = ((/* implicit */unsigned char) (((~(18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (+(var_12)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (4921944177331717551ULL))))) >> (((((/* implicit */int) var_2)) - (84)))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_0))));
}
