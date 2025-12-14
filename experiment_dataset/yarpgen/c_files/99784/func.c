/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99784
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)65)) : (((((/* implicit */int) (unsigned char)220)) | (((/* implicit */int) var_6)))))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) -1756036148));
                var_16 = ((/* implicit */unsigned char) max(((+((+(((/* implicit */int) (unsigned char)255)))))), ((-(((arr_3 [i_1]) | (((/* implicit */int) arr_1 [i_0]))))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) (+(14LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1756036148)))))) : (((unsigned long long int) (unsigned char)22)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) | (arr_3 [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (16563323869349748663ULL)));
    var_19 = ((/* implicit */short) (((~(((/* implicit */int) var_14)))) ^ (((int) (~(var_7))))));
}
