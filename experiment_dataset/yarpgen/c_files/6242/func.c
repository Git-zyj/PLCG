/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6242
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_0)) ^ (var_9))))) ? (((/* implicit */unsigned long long int) ((((unsigned int) 4294967295U)) | (((((/* implicit */_Bool) (unsigned char)146)) ? (1838732747U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (13412476325197658407ULL)))));
        var_11 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (70368744177663ULL) : (((/* implicit */unsigned long long int) var_6)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_0 [(signed char)9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))));
        arr_7 [i_1] = var_4;
        var_12 = ((/* implicit */unsigned int) ((((unsigned long long int) -1682213827)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    var_13 ^= (~(((/* implicit */int) ((((unsigned long long int) var_9)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 252201579132747776ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) : (var_8))))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_2))));
}
