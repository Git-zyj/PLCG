/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92092
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2059925183U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2235042113U))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((signed char) ((_Bool) ((2059925182U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+(arr_1 [(short)5])))) : (18446744073709551608ULL))) - (((/* implicit */unsigned long long int) (~(((2235042122U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))))));
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((2235042114U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (signed char)127)))))) | (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) (+(arr_0 [i_1])));
        }
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_11)) - (((/* implicit */int) var_11))))))) == ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (var_6))) + (((/* implicit */unsigned long long int) -8255862493435361885LL))))));
    var_17 = ((/* implicit */unsigned short) max((2059925191U), (((/* implicit */unsigned int) (unsigned short)48518))));
}
