/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76615
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+((~(((/* implicit */int) (short)32265)))))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (max((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_10))))))))));
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (signed char)-20)), ((short)-18458))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))))), (((unsigned long long int) (unsigned char)51)))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)65503)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0]))))), (max((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) var_3))))));
        var_19 += ((/* implicit */unsigned short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48)))))))));
    }
    var_20 = ((/* implicit */unsigned short) (_Bool)0);
}
