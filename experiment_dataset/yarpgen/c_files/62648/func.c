/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62648
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) var_0);
                var_10 = ((/* implicit */signed char) max((var_10), ((signed char)127)));
                var_11 = ((/* implicit */_Bool) (-((((((~(((/* implicit */int) (unsigned char)41)))) + (2147483647))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)112))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) (unsigned char)202))));
    var_13 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3))) ^ (((/* implicit */unsigned long long int) ((int) var_1))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_1)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61299))))));
                arr_14 [i_2] [i_2] = ((unsigned int) (unsigned short)64203);
                var_14 += ((/* implicit */unsigned short) (((-(((unsigned long long int) var_5)))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)65535))))) ? (((unsigned long long int) 576459652791795712ULL)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (~(((unsigned int) (!(((/* implicit */_Bool) 3ULL)))))));
}
