/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88208
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) var_7);
        var_20 = ((/* implicit */signed char) ((int) 3351931779U));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_8)))) ? (((/* implicit */long long int) (+(var_0)))) : (var_5)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((3351931777U), (((/* implicit */unsigned int) (short)32766))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_4)), ((short)32766)))) ? (min((((/* implicit */long long int) -2116081214)), (2902032439552093565LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)-22)))))))));
        arr_5 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), (2009109184)))), (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [(short)6]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_21 ^= ((/* implicit */signed char) ((unsigned int) arr_7 [i_1 - 1]));
        var_22 ^= var_4;
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_7 [i_1 - 2])) : (arr_6 [i_1] [i_1])))) ? (((unsigned int) 943035529U)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-16)))))));
    }
    var_23 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned int) var_11)), ((-(var_0))))));
}
