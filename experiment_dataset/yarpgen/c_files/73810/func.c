/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73810
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
    var_16 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1)));
                            var_18 |= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7))))), (max((((/* implicit */unsigned long long int) (+(var_12)))), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_2))))))));
                            var_19 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-99))))) && (((/* implicit */_Bool) min((-1), (0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)0)) : (max((((/* implicit */int) (_Bool)0)), (2)))))) : (511LL)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (var_14) : (var_14)))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (max((var_2), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (var_7)))) : (((/* implicit */int) max((var_4), (var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_9))))) : (min((var_12), (var_12)))))));
            }
        } 
    } 
}
