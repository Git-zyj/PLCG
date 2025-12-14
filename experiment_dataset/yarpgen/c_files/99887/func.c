/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99887
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) ? (var_3) : (var_15)))))))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_6 [i_1]), (var_7))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned char) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (((arr_3 [i_0] [i_1]) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [3LL] [3LL])) : (((/* implicit */int) var_14))))) ? (arr_1 [i_0]) : (max((var_6), (((/* implicit */long long int) arr_7 [i_0])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (arr_1 [i_0]))) : (max((((/* implicit */long long int) arr_7 [i_1])), (arr_1 [i_1]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */int) var_10)))))))))));
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((var_5) + (2147483647))) << (((/* implicit */int) var_13)))) : (((int) var_9))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(var_15))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) : (max(((~(var_8))), (((/* implicit */unsigned int) ((short) var_2)))))));
}
