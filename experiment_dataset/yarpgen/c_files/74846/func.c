/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74846
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_1 [i_2]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) (short)32767);
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-9223372036854775802LL)));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((int) (~(((/* implicit */int) arr_0 [i_1])))))));
                        var_23 &= ((/* implicit */unsigned long long int) ((9223372036854775796LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3631)))));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_5] [i_1 + 2] [i_2] [i_5] [i_5]) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))))) : (arr_9 [i_5] [i_2] [i_2] [i_0] [i_0])))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_11 [(unsigned char)6]);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_5);
    var_26 = ((/* implicit */_Bool) max((var_26), ((!(((((/* implicit */_Bool) 19U)) && (((/* implicit */_Bool) (unsigned char)67))))))));
    var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */long long int) var_18)), (-2931753071736054608LL))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))))));
}
