/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71414
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0]))) >= (((int) var_6))));
                arr_7 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)32767)) / (arr_3 [i_0] [i_1] [i_1])))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)105)), (((unsigned short) var_1))))) - (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (arr_3 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_7))) << (((((/* implicit */int) (unsigned char)3)) % (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) var_6)) : (max(((~(4611686018427387648LL))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_3)))))))));
    var_12 = ((/* implicit */long long int) var_0);
    var_13 *= ((/* implicit */unsigned char) var_0);
}
