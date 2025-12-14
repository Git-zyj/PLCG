/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84351
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
    var_16 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) var_11)), (-1454085182831055912LL))) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) (signed char)-67)) ? (min((((/* implicit */long long int) var_6)), (-1222252686357888323LL))) : (((/* implicit */long long int) max((-571609087), (((/* implicit */int) (signed char)-102)))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), ((((+(((/* implicit */int) max(((short)-8192), (var_14)))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)45721))));
        var_20 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + ((-(arr_1 [i_0] [(unsigned char)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    var_21 = ((/* implicit */long long int) (short)8191);
    var_22 = ((/* implicit */long long int) max((var_6), (((/* implicit */int) var_11))));
}
