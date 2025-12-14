/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72523
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
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) var_13);
        arr_2 [i_0] = ((/* implicit */signed char) 12189121234899353404ULL);
        arr_3 [(unsigned short)24] = ((/* implicit */unsigned int) 9095914931672008190LL);
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [(unsigned short)10] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
        var_18 *= ((/* implicit */unsigned short) var_4);
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (9095914931672008190LL))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)106)), (arr_8 [4U] [(unsigned short)8])))) ? (min((((/* implicit */long long int) (unsigned short)38071)), (-4766499365720810945LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_20 = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        arr_12 [i_3 + 2] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9095914931672008190LL)) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_13 [i_3] = ((/* implicit */unsigned int) arr_11 [i_3] [i_3]);
        arr_14 [i_3] = (unsigned short)49397;
    }
}
