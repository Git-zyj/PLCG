/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85327
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_21 = min(((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_10) : (15977643323662886149ULL))))), (((/* implicit */unsigned long long int) var_12)));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? (((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : ((+(var_13))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-28159)) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_1]), (arr_4 [i_1])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33))))))) : ((+(((/* implicit */int) (signed char)57))))));
                    var_23 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_2 + 4])) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (signed char)-39)))) - (222)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26025)))))) : (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26025))) : (10533753490475524009ULL))));
                    var_24 = (signed char)106;
                }
            } 
        } 
    } 
}
