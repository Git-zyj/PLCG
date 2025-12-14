/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66166
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
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)52881))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(7188537684051726384LL))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)33)) & (((/* implicit */int) (unsigned char)211)))) & (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 1])), ((+(arr_2 [i_0] [i_0])))))) != (((((/* implicit */_Bool) arr_4 [i_1 - 1] [(unsigned char)14] [i_1])) ? (min((18116814871468083259ULL), (((/* implicit */unsigned long long int) (unsigned char)192)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (23) : (((/* implicit */int) (unsigned char)16)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (((-((~(var_0))))) << (((((((/* implicit */int) var_6)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)9)))))) - (23481)))));
}
