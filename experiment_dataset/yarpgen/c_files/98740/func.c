/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98740
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_2))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (var_11)));
    var_18 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) var_12)) : (arr_3 [i_0 - 1] [i_0] [i_0 + 2])))) ? (((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) - (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) || (((/* implicit */_Bool) 97357890U)))))));
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) 97357890U)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2533))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1]))) : (58685424U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 517066172U)))))) ^ ((+(373840092U)))))));
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_3] [i_3]))));
        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967284U) == (39U))))) : (var_4)));
        var_23 = ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3])));
    }
}
