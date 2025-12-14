/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85981
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) + (1759141275)))) ? ((-(((/* implicit */int) (unsigned char)206)))) : ((+(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_7 [i_0] [i_0] [i_2])))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) (((~(((arr_7 [i_0] [i_1] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 3] [i_2 + 2])) < (((/* implicit */int) arr_1 [i_2 + 3] [i_2 + 3]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4294967286U) : (var_0)))) ? (-1759141275) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (var_1)))))) - ((+((-(var_5)))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-140598682) : (((/* implicit */int) (unsigned char)119))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_4))))) : ((((+(var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
}
