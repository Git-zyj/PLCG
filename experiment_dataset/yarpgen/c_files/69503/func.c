/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69503
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) var_8))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65527)));
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)127)))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (~(var_7))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) var_3);
        arr_12 [i_2] |= ((/* implicit */long long int) ((unsigned int) (signed char)-24));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)0)))) / (((/* implicit */int) var_6))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 16383LL))));
    }
    var_14 = ((/* implicit */short) max((0ULL), (((/* implicit */unsigned long long int) 7LL))));
}
