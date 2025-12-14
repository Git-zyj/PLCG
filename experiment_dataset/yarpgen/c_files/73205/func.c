/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73205
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)88)))) & (1888342237U)))) ? ((~(max((((/* implicit */int) var_0)), (-954133114))))) : (((/* implicit */int) ((((/* implicit */long long int) 3106709127U)) == ((~(-4008818315777593657LL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_0 + 2]))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5901981952013788049LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (((((/* implicit */_Bool) 3017578143U)) ? (2113567376U) : (3017578143U)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (5009629292030403398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [(_Bool)1] [i_0 + 1] = (~(((/* implicit */int) arr_1 [i_0] [i_0 - 1])));
            arr_6 [i_0] = arr_0 [i_0 - 1] [i_0 + 1];
        }
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_2))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (arr_4 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 1263015620)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned short)55013)))) : (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) var_9)) : (1207357548))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24726)))))));
        var_15 = max((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)34917)))) : (2018528169))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)2127)), (arr_4 [i_2] [i_2])))) ? ((-(((/* implicit */int) arr_8 [i_2] [i_2])))) : (var_6))));
    }
}
