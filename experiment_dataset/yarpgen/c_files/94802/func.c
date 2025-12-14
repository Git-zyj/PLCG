/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94802
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) (unsigned char)151)) ? (((long long int) arr_2 [(unsigned char)6] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(arr_2 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) arr_6 [i_1]);
        var_21 = ((/* implicit */unsigned char) var_17);
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_10 [19U] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) arr_8 [i_2])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) | (3188913619U)))))));
        var_22 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (max((-241344154), (-241344179))))))));
    }
    for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
    {
        var_23 += ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65516))))) * (arr_14 [i_3] [i_3]));
        arr_15 [i_3] = ((/* implicit */unsigned char) (-((~(arr_14 [i_3 - 1] [i_3 + 1])))));
        arr_16 [i_3] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(signed char)0] [i_3])) || (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3]))))) || (((/* implicit */_Bool) arr_12 [i_3 + 1]))))));
    }
    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_18)), (var_10)));
}
