/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64611
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */int) var_18);
                var_20 = ((/* implicit */short) min((max((var_1), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))))))), (((unsigned int) max((8131055384972421129ULL), (((/* implicit */unsigned long long int) (signed char)83)))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                var_21 *= ((/* implicit */unsigned char) (+(((int) (+(((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)56)))));
                arr_11 [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) 0)) & (((unsigned int) (signed char)-1)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_17))))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)246)))))));
            }
        } 
    } 
}
