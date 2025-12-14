/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92906
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
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (~(((unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1]))));
                    arr_6 [i_0] [i_0] = (short)8412;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((((((/* implicit */long long int) var_3)) > (var_15))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6)))), (((var_8) % (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_21 = var_3;
        var_22 &= ((/* implicit */unsigned short) ((unsigned char) var_1));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_7 [0U]) ? (((/* implicit */int) arr_7 [(unsigned short)7])) : (((/* implicit */int) arr_7 [i_4]))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_15)) : (5811272374911013371ULL)));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_4] [i_4]))));
            arr_19 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_4] [i_5]))));
            arr_20 [i_4] [i_4] [(unsigned short)4] = ((/* implicit */short) (!(var_12)));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 24; i_6 += 2) 
    {
        var_25 = (i_6 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) var_16)))) + (2147483647))) << (((arr_21 [i_6 - 1]) - (13554088141145165572ULL)))))) : (((/* implicit */short) ((((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) var_16)))) - (2147483647))) + (2147483647))) << (((arr_21 [i_6 - 1]) - (13554088141145165572ULL))))));
        arr_24 [4ULL] [i_6] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!((_Bool)0))))));
    }
}
