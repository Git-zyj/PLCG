/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84919
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) | (var_3)))), ((+(((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9145)) || (((/* implicit */_Bool) (unsigned char)16))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -9223372036854775804LL))))));
        arr_4 [i_0] = (-(2621057504031927197LL));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (var_11)));
        arr_6 [i_0] [i_0] &= ((/* implicit */unsigned short) ((-1093902367) != (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_6)), (var_5)))))));
        arr_11 [i_1] = ((/* implicit */signed char) var_11);
        arr_12 [i_1] [i_1] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) max((4879714382857615255ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_17 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65530))));
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_20 [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_13 [i_3])) ? (((long long int) var_2)) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1930)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (841202006U))))));
        arr_21 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)178)) ? ((~(((/* implicit */int) (unsigned short)57960)))) : (((/* implicit */int) (unsigned short)28982))));
    }
}
