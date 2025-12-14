/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79523
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
    var_17 = ((/* implicit */short) var_14);
    var_18 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (824633720832LL)))));
    var_19 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51320)))))) + (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((-1850068479210704153LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */long long int) ((int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (17179860992LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))) << (((/* implicit */int) ((((/* implicit */int) min((arr_6 [i_1] [i_1]), ((_Bool)1)))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (_Bool)0)))))))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)11)))) | (((/* implicit */int) min(((unsigned short)29359), (((/* implicit */unsigned short) (_Bool)1))))))))));
        arr_8 [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((((/* implicit */int) var_11)) == (((/* implicit */int) min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))));
    }
}
