/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69317
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? ((((_Bool)1) ? (5332370771190531412LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))) ? (((/* implicit */long long int) -658773154)) : (((((/* implicit */_Bool) (short)22137)) ? (1315721748750052279LL) : (-9223372036854775795LL))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 &= ((/* implicit */short) arr_2 [3] [i_0]);
        var_16 = ((/* implicit */unsigned short) max((((min((3413529969653767314ULL), (((/* implicit */unsigned long long int) 665307157U)))) / (((13017358671074223870ULL) * (((/* implicit */unsigned long long int) -1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)1] [i_0]))))) : (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_6)))))))));
        arr_3 [(short)1] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_5))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (short)-9171)) : (((/* implicit */int) (short)14942))))) : (max((arr_0 [5U]), (((/* implicit */unsigned long long int) var_12))))))));
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_9))));
}
