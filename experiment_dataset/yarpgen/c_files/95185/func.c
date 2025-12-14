/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95185
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_16)), ((unsigned char)0)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        var_22 *= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_18)) : (arr_0 [i_0 - 1]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 3843350271503450546ULL))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned short) ((arr_5 [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((arr_5 [i_2] [15U]), (((/* implicit */long long int) var_16))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) >= (min((4287198101U), (((/* implicit */unsigned int) -303256765))))))) : (((/* implicit */int) (!((_Bool)1))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */short) arr_5 [i_2] [i_2]);
            var_25 ^= ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min((arr_11 [i_2] [4U]), (((/* implicit */unsigned char) arr_9 [18]))))));
            arr_14 [i_2] [6] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (((((/* implicit */_Bool) var_15)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))));
        }
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned short)65535))));
    }
    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((1580388079U) % (4021385423U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17487115133394001188ULL)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    var_28 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21035))));
}
