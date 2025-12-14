/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97016
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
    var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_15)))));
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 += ((/* implicit */_Bool) min((var_4), (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_5 [(short)20] [i_1] [i_1 + 2]))) >> (((min((arr_3 [i_1]), (arr_3 [i_1 - 1]))) + (1202168954))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1]))) ? ((+(arr_5 [i_1 - 1] [i_0] [i_1 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (arr_1 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 + 2])))))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_5 [i_1] [i_1] [i_1]))))) : (((((arr_0 [i_1]) + (arr_0 [i_0]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_3) : (var_3))))))));
                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(arr_1 [15ULL] [i_1 + 1]))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)4667)), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -3638564131550324409LL)) : (var_16))), ((+(var_16)))))));
}
