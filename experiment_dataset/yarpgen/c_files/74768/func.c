/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74768
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) max(((signed char)(-127 - 1)), ((signed char)-112))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(182270992U)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -384149728)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((unsigned char) (-(arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_12 *= ((/* implicit */unsigned long long int) var_5);
        var_13 = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50679)) ? (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */int) (signed char)107))))) : (((unsigned long long int) 1702602704U)))) : (((/* implicit */unsigned long long int) (~(var_0))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_2)))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 182270992U)) ? (4112696304U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14857))))))) ? ((+(arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4112696304U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4112696303U))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65379))) + (18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (arr_9 [i_2] [i_2])))));
    }
}
