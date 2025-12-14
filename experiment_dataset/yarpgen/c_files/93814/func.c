/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93814
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2)))))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)15))))) <= (((var_10) - (((/* implicit */long long int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) var_9);
                arr_6 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) var_5);
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))))) << (((var_1) - (123764942))))) <= (var_1)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                        var_14 = ((/* implicit */_Bool) var_9);
                        var_15 += ((/* implicit */_Bool) var_5);
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) var_8))));
                        var_17 = ((/* implicit */long long int) var_2);
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) var_2);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((((/* implicit */int) var_9)) >> (((var_10) - (7441773322370609432LL)))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (var_3)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_22 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_0))))) >> (((((((/* implicit */int) (unsigned char)240)) << (((((/* implicit */int) var_2)) - (95))))) & (((/* implicit */int) var_9))))));
                        var_21 |= ((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_3) - (2446871050U))));
                        var_22 = ((/* implicit */long long int) max((var_22), (var_10)));
                        var_23 = ((/* implicit */int) var_10);
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) var_0);
                        var_25 &= ((/* implicit */unsigned char) var_0);
                        var_26 |= ((/* implicit */unsigned long long int) var_7);
                        var_27 += ((/* implicit */unsigned int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_2))));
                    }
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_4);
    var_30 |= ((((/* implicit */_Bool) ((8773557434761870163LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) var_4))))))))) && (((/* implicit */_Bool) ((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
}
