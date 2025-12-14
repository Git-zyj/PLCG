/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81507
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_6))));
    var_13 = ((/* implicit */unsigned short) ((max((0U), (((/* implicit */unsigned int) var_5)))) != (((/* implicit */unsigned int) var_8))));
    var_14 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) ((4294967295U) ^ (1171993946U)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (unsigned char)116)))))) | (var_9)));
        arr_4 [i_0] = ((/* implicit */unsigned char) 1325139799U);
        arr_5 [i_0] = ((/* implicit */int) var_9);
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) (((((~(3122973338U))) << (((3122973338U) - (3122973310U))))) ^ ((((-(1266251310U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (-1)))))))));
        var_16 = ((/* implicit */unsigned long long int) var_6);
        arr_10 [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (7335692163666372642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 8992601901003674906ULL)))))))))));
    }
}
