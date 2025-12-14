/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77159
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = ((/* implicit */short) max((var_3), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0 + 3] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) ((8ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (short)24176))))))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) ? ((+(((arr_0 [i_0]) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))), (arr_2 [i_0 + 3])))));
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) -1858091666)), (arr_2 [(short)14]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [3LL]))))))) : (((((/* implicit */_Bool) arr_3 [7ULL] [i_0 + 3])) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)5])))))));
    }
}
