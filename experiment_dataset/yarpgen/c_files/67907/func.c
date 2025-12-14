/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67907
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned char)96);
        var_21 += (_Bool)0;
        arr_2 [5LL] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((7718511737651022894LL), (((/* implicit */long long int) 450692940U))))))));
        arr_3 [i_0 - 2] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) arr_1 [11]);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_9 [(unsigned char)12] [i_1] = (-(((arr_6 [i_1]) - (arr_6 [i_1]))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_12 [i_2])))) ? (min((((/* implicit */long long int) var_9)), (arr_12 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_11 [i_1] [i_1] [i_1]))), (arr_10 [i_2])))) : (var_7)));
            var_22 += ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)92))));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        arr_15 [(unsigned char)3] = ((/* implicit */unsigned long long int) var_2);
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (unsigned short)65535)), (arr_12 [i_3])))));
        arr_19 [i_3] = ((/* implicit */int) 450692940U);
        var_24 += ((/* implicit */long long int) var_0);
    }
    var_25 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_16)), (var_5))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 15120241147041248274ULL))))))));
}
