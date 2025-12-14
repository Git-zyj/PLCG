/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69389
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((274877906943ULL), (((/* implicit */unsigned long long int) -7LL))))) ? (((arr_3 [(unsigned char)17]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))))) : (arr_2 [i_0 - 1] [i_0 - 1]))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)5])) & (1102699946)))) ? (((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 1]))) : (arr_0 [i_0] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_4 [i_0 - 1] = arr_3 [i_0];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((arr_2 [i_1 - 1] [i_1 - 1]) & (arr_2 [11ULL] [i_1 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [13] [i_1 - 1])) || (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1]))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (short)8128))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)32747)) < (((/* implicit */int) arr_5 [i_1] [i_1]))))) << (((/* implicit */int) ((6LL) != (arr_3 [19LL]))))));
        var_17 = ((/* implicit */short) (unsigned short)0);
    }
    var_18 ^= ((/* implicit */unsigned char) (!((((+(var_12))) > (((/* implicit */int) var_6))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1107592599U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (1040623406U))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) - (43206)))));
}
