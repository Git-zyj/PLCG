/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57901
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
    var_19 = ((/* implicit */unsigned short) 203769359U);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [23] [i_0])) ? (var_1) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : ((-(((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) & (160977359U))))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((-(((long long int) 9223372036854775807LL)))) / (max((var_16), (((((/* implicit */_Bool) -1515754559)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (short)32755)) ? (1310798330U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))))));
        var_23 += ((/* implicit */long long int) min((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((arr_8 [i_2]) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))))));
        var_25 = ((/* implicit */unsigned short) 289778501U);
    }
}
