/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79317
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
    var_12 = ((/* implicit */short) ((-1239882029) / (((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (unsigned char)156))))) + (932218598)))));
    var_13 = ((((/* implicit */_Bool) max((min((135923520), (((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)105)))) == (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */int) ((((long long int) arr_6 [i_2 + 3] [i_0 + 1] [i_0])) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_0 - 1] [i_0])) + (((/* implicit */int) arr_6 [i_2 - 1] [i_0 + 1] [i_0])))))));
                    var_15 = ((unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_0))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((int) var_8)) : ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)231)), (var_7))))))));
                    var_17 = ((/* implicit */int) max((((unsigned int) (unsigned char)86)), (var_11)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) == (5399780716984248628ULL)))) & ((-((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
                        arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((((min((((/* implicit */long long int) (-2147483647 - 1))), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (154)))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
}
