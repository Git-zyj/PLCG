/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83802
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)11592)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0])))) ^ (((/* implicit */int) var_10))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64512)) ? (((/* implicit */int) min(((unsigned char)4), ((unsigned char)118)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)255))))));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28893)) | (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % ((~(var_0)))))));
    var_19 = ((/* implicit */unsigned short) var_4);
    var_20 = ((/* implicit */long long int) var_12);
}
