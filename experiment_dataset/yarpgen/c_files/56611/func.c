/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56611
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 8051804629502031456ULL))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0 + 2]))))) * (max((10394939444207520158ULL), (((/* implicit */unsigned long long int) var_3)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10394939444207520154ULL)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) : ((-(arr_0 [i_0]))))))))));
        var_18 = (-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1])))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [i_0]))))))) + ((~(10394939444207520158ULL)))));
        var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 1]))))) >= (((/* implicit */int) arr_1 [i_0 - 2])));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) : (8051804629502031465ULL))));
        var_21 ^= ((/* implicit */signed char) arr_5 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (-(10394939444207520184ULL)));
        arr_8 [i_1] = ((/* implicit */unsigned short) var_1);
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) / (((long long int) (unsigned char)202))));
        var_22 = ((/* implicit */short) (+(((unsigned long long int) ((3806434962574994393LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4365))))))));
    }
    var_23 = ((/* implicit */signed char) (~(((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) max(((short)4486), (((/* implicit */short) var_15))))))))));
}
