/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99010
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
    var_20 = min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) 4611683819404132352LL)));
    var_21 = ((/* implicit */_Bool) var_16);
    var_22 = ((/* implicit */long long int) var_17);
    var_23 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_1 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_17))) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2]))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_1 + 2])) : (arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2])))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((min((((/* implicit */unsigned long long int) var_14)), (arr_6 [i_1] [i_2 + 1] [i_2] [i_2]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 2]))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (((!(((arr_2 [i_0] [i_0]) <= (((/* implicit */long long int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_4] [i_5]))))))));
                        var_26 = ((/* implicit */unsigned int) max((((long long int) arr_0 [i_3])), (((/* implicit */long long int) var_12))));
                        var_27 = (~(((((long long int) 9223372036854775807LL)) & (9223372036854775807LL))));
                        var_28 = ((/* implicit */unsigned long long int) var_8);
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (9223372036854775807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))), (min((9223372036854775807LL), (((/* implicit */long long int) var_9))))));
        }
        var_31 = ((/* implicit */_Bool) ((unsigned int) max((min((9223372036854775807LL), (-9223372036854775807LL))), (((/* implicit */long long int) arr_4 [(_Bool)0] [i_0] [i_0])))));
    }
}
