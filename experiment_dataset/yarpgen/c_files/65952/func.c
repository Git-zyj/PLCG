/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65952
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_15))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? ((~(-353175910251880200LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)91)) + (((/* implicit */int) (unsigned char)153)))))))));
                    var_21 = ((/* implicit */unsigned short) (unsigned char)78);
                    var_22 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((2454824827822116860LL) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7))))))) + (((16155259285661746822ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_12);
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)107))))))))));
    var_25 = (!(var_1));
}
