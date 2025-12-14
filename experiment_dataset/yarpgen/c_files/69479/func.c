/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69479
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
    var_19 *= var_10;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (short)-10830);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_2 [(unsigned char)6]))));
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18096129294048670231ULL), (((/* implicit */unsigned long long int) 504848991U))))) ? (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))) : ((~(((/* implicit */int) arr_3 [i_1 + 1]))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((504848991U) >= (2345384709U)));
    }
    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (61295247665218178LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((var_17) * (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22356)))))) && (((/* implicit */_Bool) var_10))));
    var_24 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-35)), (3622824997U)))) ? (((/* implicit */long long int) 1949582587U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (-2130622471577838630LL) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (max((((/* implicit */long long int) var_6)), (4863704487849810654LL))))));
    var_25 = ((/* implicit */unsigned int) var_13);
}
