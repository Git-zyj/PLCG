/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87892
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)198);
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((var_12) || (((/* implicit */_Bool) 71364948))))), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -702751462)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1]))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((unsigned long long int) var_3))));
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 8400512864324951739ULL)) && (((/* implicit */_Bool) var_15)))))));
    }
    var_22 = ((/* implicit */int) 14587516001841876152ULL);
    var_23 = ((/* implicit */unsigned char) var_10);
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)55)))), (((/* implicit */int) (short)16384)))))));
    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_7)), ((+(4540914427379208926ULL)))))));
}
