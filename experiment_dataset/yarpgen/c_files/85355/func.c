/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85355
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_14 = ((((/* implicit */int) (short)16368)) << (((((/* implicit */int) (signed char)-21)) + (33))));
        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)13436))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((int) 1099511627760ULL)))));
        var_17 = (-((+(max((((/* implicit */unsigned long long int) (signed char)48)), (13687697124569801199ULL))))));
    }
    var_18 = var_11;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_2]));
        var_20 ^= ((/* implicit */signed char) ((int) (+(((/* implicit */int) (unsigned char)63)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)16598)) < (((/* implicit */int) (unsigned char)193))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13452))) * (2077475543U)));
    }
    var_22 = var_3;
    var_23 -= var_8;
}
