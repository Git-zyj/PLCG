/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64537
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
    var_18 = (-(((/* implicit */int) var_16)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) 1077272995)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (unsigned short)65535))))));
                var_20 = arr_3 [i_0];
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [(unsigned short)8] [(unsigned short)8] [(unsigned short)1] [i_0] [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)48)) ? (-8032897382604741276LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))));
                            var_21 *= ((/* implicit */signed char) arr_1 [i_3]);
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_3] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)67))));
                            arr_14 [i_0] [i_1] = ((/* implicit */short) (~((-2147483647 - 1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
        {
            {
                var_22 ^= arr_18 [(unsigned short)2] [i_4];
                arr_19 [i_4] [i_5] = ((/* implicit */short) arr_18 [i_4] [i_5]);
                arr_20 [i_5 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) var_15))))) ? ((+(((/* implicit */int) var_9)))) : (min(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_4])) ? (((/* implicit */int) arr_17 [(unsigned char)2] [i_5 - 3])) : (((/* implicit */int) arr_17 [i_4] [i_5 - 2]))))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((8032897382604741271LL) != (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5 + 2]))))) && (((/* implicit */_Bool) (signed char)41)))))) ^ (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_4] [i_4]))))) * (min((var_4), (((/* implicit */long long int) 1636866955))))))));
            }
        } 
    } 
}
