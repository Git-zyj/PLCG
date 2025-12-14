/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77589
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [(unsigned char)0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))) : ((~(arr_0 [20LL])))))) ? (var_3) : (((/* implicit */long long int) ((int) ((var_2) > (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)243))))) : (((long long int) (unsigned char)0)))), (((/* implicit */long long int) max((((((/* implicit */int) var_12)) | (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185))))))))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [(short)11])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_3)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)71))))) ? (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_20 = (unsigned char)0;
        arr_4 [9U] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_1 [(unsigned char)16])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (var_4)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_21 = min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(signed char)3] [(signed char)3]))))) ? (((/* implicit */int) min((arr_5 [i_1] [(_Bool)0]), (arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_6 [i_1] [5LL])))));
        arr_7 [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)45)))), (((((-1993809608) ^ (((/* implicit */int) arr_5 [i_1] [6])))) | (((/* implicit */int) var_15))))));
    }
    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (-2035759620815859521LL)))) ? (min((var_11), (var_4))) : ((~(var_3)))))));
    var_23 = ((/* implicit */unsigned char) (~(var_4)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                arr_14 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-951229612920081549LL)))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (var_6) : (var_6))))))) : ((-(max((((/* implicit */unsigned long long int) (signed char)-60)), (var_1)))))));
                arr_15 [i_3] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) ^ (var_10))) % (((/* implicit */long long int) arr_8 [i_3 + 1]))))));
            }
        } 
    } 
}
