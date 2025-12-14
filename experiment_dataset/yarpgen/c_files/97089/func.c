/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97089
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */int) var_3)), (var_6))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 2147483642)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -780492410)) ? (-780492411) : (((/* implicit */int) (unsigned char)22))))), (arr_0 [i_0 + 3]))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_17 -= ((/* implicit */short) arr_1 [i_1 + 4]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((arr_2 [i_1] [(signed char)8]), (arr_5 [i_1] [i_1]))) >> (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1])) < (((/* implicit */int) (unsigned char)235)))))))) ? (((arr_0 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_0 [i_1]), (arr_0 [i_1]))) > (((((/* implicit */_Bool) 2147483630)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_5 [i_1] [i_1])))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) min((arr_2 [i_2] [i_2]), (15304244713657898703ULL))));
        arr_10 [i_2] = ((signed char) min((15535257141812717376ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_2] [i_2])))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 780492392)) * (arr_8 [i_2]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) >= (((/* implicit */int) arr_9 [i_2]))))))));
    }
    var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned int) var_11)) <= (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_1)) : (((var_6) / (((/* implicit */int) var_5))))))));
}
