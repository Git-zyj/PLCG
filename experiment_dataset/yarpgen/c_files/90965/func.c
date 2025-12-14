/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90965
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((-2369312048526264742LL), (((/* implicit */long long int) (unsigned short)480)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) (signed char)-78)) ? (6788693692476375206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned short)186)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) -1595769118))))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_0 - 1])) : (((/* implicit */int) (unsigned short)65330))))));
                        var_18 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))));
                    }
                    var_19 = ((/* implicit */_Bool) max((3046468838U), (((/* implicit */unsigned int) var_6))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1366374516U)) ? (((((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) (short)9086))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [2ULL] [(unsigned char)14] [i_0 + 1]))) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6ULL]))))))) : (((max((6788693692476375220ULL), (((/* implicit */unsigned long long int) (unsigned char)252)))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (54)))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65354))) : (4294967295U))), (var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1366374516U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))))) && (((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26017))) : (13896876286068885343ULL))))))) : (((/* implicit */int) var_4))));
}
