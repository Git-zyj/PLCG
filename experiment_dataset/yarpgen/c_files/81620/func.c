/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81620
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10875610171044579644ULL)) && (((/* implicit */_Bool) (unsigned short)11181)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (5129376519736830210ULL)))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-83))))) <= (((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) var_8))))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_4)), (282716479911524604ULL))) ^ (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_18)) ? (14342437569593894235ULL) : (((/* implicit */unsigned long long int) 2147483647))))))));
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (((+(729913316987108399ULL))) <= (((/* implicit */unsigned long long int) (~(28)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */_Bool) ((unsigned short) 2147483647));
    var_23 = ((/* implicit */unsigned int) max((var_23), ((+(((unsigned int) ((var_15) && (((/* implicit */_Bool) var_10)))))))));
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned char)21)), (-1793071816))), (((/* implicit */int) var_17)))))));
}
