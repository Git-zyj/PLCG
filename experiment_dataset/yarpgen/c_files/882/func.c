/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/882
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 &= ((/* implicit */signed char) (-(-316099687)));
        arr_3 [i_0] [(short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1405686469)) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_2)))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) -316099689);
        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (1405686459) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) arr_0 [(unsigned char)3] [(signed char)5])), (min((-1937172245327893574LL), (((/* implicit */long long int) var_4))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((632919146) % (((/* implicit */int) (short)-27199))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) % (((/* implicit */int) var_6))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) (short)-18739)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2]))) || (((/* implicit */_Bool) var_3)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        var_21 = (~(arr_2 [i_2]));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -316099661)) % (6993027481732024895ULL)));
    }
    var_23 = ((/* implicit */short) min((min((((/* implicit */unsigned short) var_4)), (min(((unsigned short)5676), ((unsigned short)1920))))), (((/* implicit */unsigned short) var_3))));
}
