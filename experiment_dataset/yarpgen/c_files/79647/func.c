/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79647
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
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -2147483632)) <= (5481715203763920813ULL))) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)65535))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_1])))) ? (min(((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_2])))), (((/* implicit */int) (unsigned char)222)))) : ((-(max((503316480), (var_6)))))));
                    var_13 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_4 [i_0])) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(-503316502)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_2])), (arr_3 [i_0] [i_0] [i_0]))) : (((arr_6 [i_0] [(unsigned short)12] [i_2] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((var_5) < (var_12)))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)22)))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) (+(var_12)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_12);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (4294967295U)));
}
