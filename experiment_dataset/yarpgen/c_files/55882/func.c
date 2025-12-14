/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55882
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_9))), (((/* implicit */unsigned int) var_2))))) ? (min((min((var_4), (((/* implicit */long long int) var_0)))), (((((/* implicit */long long int) var_0)) ^ (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((var_9), (((/* implicit */unsigned int) -855032842)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((((+(((/* implicit */int) var_7)))) >> (((((/* implicit */int) var_2)) - (36444)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-113)) == (((/* implicit */int) (signed char)-91)))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_7))));
        var_14 -= ((/* implicit */unsigned int) var_5);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1]))) + (max(((+(arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [4U])) - (((/* implicit */int) var_8))))))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)112)), (arr_0 [i_1]))))))))))));
    }
}
