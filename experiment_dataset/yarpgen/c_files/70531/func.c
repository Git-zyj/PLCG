/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70531
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16383LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned char)44)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56163)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (-16384LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))), (var_7)))) ? ((-(((long long int) var_14)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)40733))))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)44)))))))))))));
                arr_5 [i_0 - 2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))))));
        var_19 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
    }
    var_20 = ((/* implicit */signed char) (short)6473);
    var_21 = ((/* implicit */unsigned short) var_12);
}
