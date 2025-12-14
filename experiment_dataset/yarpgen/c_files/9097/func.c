/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9097
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_13 = arr_0 [i_0] [i_2];
                    arr_9 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-117))))), (((unsigned int) arr_4 [i_0] [i_0])))), (((/* implicit */unsigned int) ((unsigned char) ((0) ^ (((/* implicit */int) arr_1 [1ULL]))))))));
                    arr_10 [i_0] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)38211);
                    var_14 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned short)35017)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (7475343740106584628ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((signed char) 2798235228U))))))));
                }
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */long long int) 2798235238U)) ^ (-4602538742967513758LL))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) var_0);
                            arr_16 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_3 + 1]);
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_14 [i_0] [(unsigned short)2] [i_0] [(unsigned short)2] [i_1]) | (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0])))) & (max((0ULL), (((/* implicit */unsigned long long int) var_3))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) ((unsigned short) 9223372036854775787LL)))))) ? (((((/* implicit */_Bool) (unsigned short)20169)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8442))) : (2798235221U))) : (max((((/* implicit */unsigned int) (unsigned short)49512)), (((((/* implicit */_Bool) var_5)) ? (2218537590U) : (((/* implicit */unsigned int) var_0)))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1871293968725598163ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (2076429686U)));
}
