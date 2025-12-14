/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93578
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (11110596918838762858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((11110596918838762858ULL) + (11110596918838762858ULL)));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max(((-(max((arr_1 [0]), (((/* implicit */unsigned long long int) 750546096093649727LL)))))), (((((/* implicit */_Bool) 11110596918838762858ULL)) ? (11110596918838762853ULL) : (((/* implicit */unsigned long long int) 4560486095884648259LL)))))))));
        var_14 -= ((/* implicit */_Bool) (~(arr_2 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned int) (~(arr_2 [i_1])));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (signed char)1))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << ((((+(9223372036854775803LL))) - (9223372036854775788LL)))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_7);
    }
    var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (var_7))))) & (min((((/* implicit */long long int) (signed char)-1)), (-1349646486990758491LL)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) (signed char)-116)) : ((~((~(((/* implicit */int) (unsigned short)28761))))))));
}
