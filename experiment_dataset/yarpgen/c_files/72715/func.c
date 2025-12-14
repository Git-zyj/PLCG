/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72715
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_13) ? (var_3) : (var_14))) > ((+(var_3))))))) % (var_12)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+((+(arr_1 [i_0]))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((-(arr_1 [i_0]))) >= (arr_1 [i_0]))))));
        var_18 *= ((/* implicit */short) ((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 1397128533)) : (3774786155U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        arr_6 [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) ^ (var_5)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1]))) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1]))) : (arr_4 [i_1] [i_1])))) ? (((arr_5 [10ULL]) ? (var_6) : (arr_4 [i_1] [i_1]))) : ((+(arr_4 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_5 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) arr_9 [i_2])))))));
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3220320274394775237LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11339))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_15 [i_3] = arr_9 [i_3];
        var_22 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_8 [i_3] [i_3])))));
    }
    var_23 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_4)) : (var_10)))))))) : (((((/* implicit */_Bool) (signed char)-93)) ? (((((/* implicit */_Bool) (short)8488)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)32256))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))));
}
