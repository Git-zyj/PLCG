/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68105
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((short) (signed char)98)), (((/* implicit */short) ((((/* implicit */int) (signed char)83)) >= (((/* implicit */int) (signed char)98))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max(((+((+(((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) arr_1 [i_0]))))))));
        var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_11 = ((signed char) arr_6 [i_1]);
        arr_7 [i_1] [12LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (7576601076744377368LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)17473))))) ? (((/* implicit */int) arr_6 [(unsigned char)14])) : (((((/* implicit */_Bool) (short)-31661)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    var_13 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_7)), (var_1))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (short)-3571)) + (3572))) - (1))))))))));
    var_14 = ((/* implicit */unsigned int) (+((+(((var_2) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_15 = (!(((/* implicit */_Bool) (short)13544)));
}
