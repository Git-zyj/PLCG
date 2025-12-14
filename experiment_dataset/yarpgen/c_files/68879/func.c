/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68879
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
    var_17 = ((/* implicit */int) var_12);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 17729131297918721081ULL)) ? (568089748U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33328))))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)32195), (((/* implicit */unsigned short) (_Bool)1)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 -= ((/* implicit */unsigned int) var_15);
        var_20 = ((/* implicit */unsigned int) -1173576373);
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_21 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((var_0) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32216))))) : (((int) var_11)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32195))) & (437606398U)));
        arr_8 [i_1] = ((/* implicit */signed char) ((arr_0 [i_1]) | (arr_0 [i_1])));
        arr_9 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_2 + 1]))));
        var_24 = (-(((/* implicit */int) (_Bool)1)));
    }
    var_25 |= ((/* implicit */unsigned int) (unsigned short)32195);
}
