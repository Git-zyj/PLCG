/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92097
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((((((/* implicit */_Bool) 520093696)) || (((/* implicit */_Bool) -520093696)))) && (((/* implicit */_Bool) 520093708))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3]))))))));
                var_15 *= ((/* implicit */short) ((520093709) / (((/* implicit */int) (unsigned char)45))));
                arr_5 [i_1] [i_1] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)219)) <= (-520093695)));
                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)171)) : (((arr_1 [i_0 - 3] [i_0 + 2]) / (520093701)))));
                var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned short)45113)) : ((-2147483647 - 1)))) < (((/* implicit */int) (unsigned short)34441)))) ? (((/* implicit */int) (short)-6609)) : (-520093697)));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) min((((/* implicit */short) var_11)), (var_0)));
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_19 |= ((/* implicit */_Bool) arr_1 [i_2 - 1] [i_3]);
                arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)113)) / (((/* implicit */int) arr_2 [i_2 - 3] [i_2 + 1]))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))));
            }
        } 
    } 
}
