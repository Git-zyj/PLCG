/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9210
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned int) min((var_2), (((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_0 [(signed char)0]))))) == (((/* implicit */int) arr_0 [(signed char)0]))))));
        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) ((-250852646) / (((/* implicit */int) (short)-2296)))))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), ((!(var_10)))));
        var_17 = ((/* implicit */unsigned short) (!(var_13)));
        var_18 = ((/* implicit */signed char) (!(var_13)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_7 [i_2] |= ((((arr_5 [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) < (arr_5 [i_2]));
        arr_8 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [(signed char)20]))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_11 [i_3] = ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_9 [(_Bool)1] [i_3])));
        arr_12 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (0ULL))))));
    }
    var_19 |= ((/* implicit */short) ((((((((/* implicit */_Bool) 4250745394U)) || (var_10))) && (var_13))) || (((((var_3) || (((/* implicit */_Bool) (signed char)-119)))) && (((((/* implicit */_Bool) var_6)) || (var_3)))))));
    var_20 = ((/* implicit */int) 3473590796U);
    var_21 = ((/* implicit */unsigned short) (!((!(((((/* implicit */int) var_1)) == (((/* implicit */int) var_13))))))));
}
