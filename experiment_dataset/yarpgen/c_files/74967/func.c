/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74967
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
    var_12 = ((/* implicit */long long int) ((((-2147483631) & (-2147483632))) * (((/* implicit */int) (((!(((/* implicit */_Bool) 2147483632)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_0)) - (211)))))))))));
    var_13 = ((/* implicit */unsigned char) var_5);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((-2147483633) >= (-2147483626))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) | (2147483633))) * ((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) < (-2147483623))))))));
                var_15 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [10LL]);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (2147483633))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_1))))) >= (min((((long long int) var_0)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_7)))))))));
}
