/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68852
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */unsigned int) (+(min((arr_1 [i_0]), (arr_1 [i_0])))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-22308)) / (((/* implicit */int) (short)27552)))))))));
            }
        } 
    } 
    var_16 += var_1;
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_7 [i_2] [8U] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) ((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) arr_5 [i_2])))))), (((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_5 [i_2])) - (16263)))))))));
        var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) (short)22307)))) + (((/* implicit */int) arr_5 [i_2]))))), (min(((~(18446744073709551597ULL))), (((/* implicit */unsigned long long int) ((arr_6 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))))));
    }
}
