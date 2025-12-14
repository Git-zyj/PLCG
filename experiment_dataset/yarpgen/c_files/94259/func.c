/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94259
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
    var_17 = ((/* implicit */unsigned int) var_10);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_16)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((~(arr_2 [i_0 + 1]))) << ((((-(arr_2 [i_0 - 1]))) - (1162933158))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 1])) ? (arr_5 [i_0 + 1] [i_2 - 1]) : (arr_5 [i_0 - 1] [i_2 + 2])))) ? (((((/* implicit */int) var_8)) << (((arr_5 [i_0 + 3] [i_2 - 2]) - (1366168629U))))) : (((((/* implicit */int) (short)14197)) << (((1456041854) - (1456041843)))))));
                    var_20 -= (((-(min((((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_1] [i_2] [i_1])), (var_12))))) << (((arr_5 [i_0 + 2] [i_0 + 3]) - (1366168586U))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_16)) : (arr_5 [i_0] [i_0]))) << (((arr_2 [i_0 + 2]) + (1162933168)))))) ? (((((/* implicit */int) arr_1 [i_0 + 3])) << (((((/* implicit */int) var_4)) - (13269))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 3])) + (13649)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65520)) - (((((/* implicit */_Bool) (short)-14170)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6258063125683507355ULL))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) 952103878U)) : (5776169945232490109ULL)));
    }
}
