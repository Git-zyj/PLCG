/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87441
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
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_0), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (var_3)))))))));
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [16ULL] [i_0] = ((((/* implicit */_Bool) var_15)) ? (((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)220)) | (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18446744073709551612ULL))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [10] [i_0])) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [(signed char)14] [i_0])), (var_14)))) ? (((((/* implicit */_Bool) 16279029277002548479ULL)) ? (((/* implicit */int) arr_0 [(signed char)0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)2] [(unsigned char)2])))) : (((/* implicit */int) max(((unsigned char)185), (((/* implicit */unsigned char) arr_1 [8ULL] [(_Bool)1]))))))))))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_10))));
    var_20 = ((/* implicit */unsigned long long int) var_7);
}
