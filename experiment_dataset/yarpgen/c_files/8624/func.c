/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8624
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)30201)) : (arr_1 [i_0])))))) ? (arr_2 [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)30186)), (-8160872804840765877LL)))) && ((!(((/* implicit */_Bool) var_10)))))))));
                var_12 &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) var_9)), (var_7))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_6))))));
    var_14 |= ((/* implicit */long long int) ((var_10) >> (((((/* implicit */int) var_5)) + (7351)))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) (~((+(((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-30201)))))))));
                var_15 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)30225)) : (((/* implicit */int) (signed char)127))))) ? (arr_9 [(unsigned char)22] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129)))))));
            }
        } 
    } 
}
