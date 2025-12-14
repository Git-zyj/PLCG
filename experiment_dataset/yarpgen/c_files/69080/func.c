/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69080
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)40572);
        var_15 = ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1] [i_1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)59);
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((var_0) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (unsigned short)49523)))))));
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_0 [i_2] [(unsigned char)17]) : (((/* implicit */unsigned long long int) arr_8 [i_2]))))) ? (((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) var_6))));
        arr_11 [i_2] [i_2] = min((((/* implicit */long long int) var_1)), (7225755420873027905LL));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_18 = (~(((/* implicit */int) ((signed char) arr_4 [i_3] [i_3]))));
        arr_14 [i_3] = ((/* implicit */unsigned char) (unsigned short)51917);
    }
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned char) var_11);
}
