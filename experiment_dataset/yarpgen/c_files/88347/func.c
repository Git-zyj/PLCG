/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88347
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
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0 + 1]));
        var_20 ^= ((/* implicit */unsigned short) ((unsigned int) max((min((((/* implicit */unsigned short) arr_1 [(unsigned char)12])), (arr_0 [i_0]))), (arr_0 [i_0 - 2]))));
        var_21 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 2]))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_1 - 2]) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_22 = var_9;
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((arr_7 [i_2]), (arr_1 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_2])) < (((/* implicit */int) arr_1 [i_2])))) ? (((/* implicit */int) max((arr_1 [i_2]), (arr_1 [i_2])))) : (min((((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */signed char) arr_4 [(unsigned short)4]))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) arr_6 [i_3]);
        var_26 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_9 [i_3])))) ? ((-(((/* implicit */int) arr_11 [i_3])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [4ULL])) : (((/* implicit */int) arr_11 [i_3]))))))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (min((((/* implicit */unsigned int) arr_11 [i_3])), (arr_8 [i_3] [(signed char)9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))));
    }
    var_27 *= ((unsigned int) max((4294967273U), (((/* implicit */unsigned int) max((var_13), (((/* implicit */short) (_Bool)1)))))));
    var_28 *= ((/* implicit */unsigned int) var_5);
}
