/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92889
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
    var_17 -= ((/* implicit */int) ((var_4) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 1522541558388703418LL))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_11))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) var_2)))))) : (var_7)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)204))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_3)) ? (-1522541558388703418LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((2147483647) / (((/* implicit */int) min((((/* implicit */unsigned short) (short)18133)), ((unsigned short)24370)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-2530)) ? (var_6) : (((/* implicit */int) var_3)))) > (471928521))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((-1) & (((/* implicit */int) (signed char)3))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1005430115)) - (var_4)))) ? (471928530) : (((((/* implicit */_Bool) 2080885337)) ? (((/* implicit */int) (short)-9687)) : (((/* implicit */int) (signed char)28)))))))));
                                var_23 -= ((/* implicit */signed char) ((int) (+(((/* implicit */int) (short)18133)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 9223372036854775807LL);
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_9 [i_0])))))))));
    }
}
