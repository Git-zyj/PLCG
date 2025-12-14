/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83701
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
    var_17 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)14)))) != (((/* implicit */int) var_14)))))) == (var_12)));
    var_18 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)26595)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)55)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) <= (((/* implicit */int) var_9))))))))));
    var_19 = ((/* implicit */long long int) ((unsigned short) var_9));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(short)18] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (16345125547023187152ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)24))))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)247)), (var_16)))) + (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)(-32767 - 1)))))), (min((((/* implicit */unsigned int) var_2)), (arr_2 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */signed char) (unsigned char)240);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-79)))), (((/* implicit */int) var_11)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7)))))));
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1])), (var_11)))) - (arr_1 [i_1])))) < ((+(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))))));
    }
}
