/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83804
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)21767))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((unsigned short)21763), (((/* implicit */unsigned short) var_0)))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)43768))));
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43769)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)34028), (((/* implicit */unsigned short) (unsigned char)242)))))) : (min((((/* implicit */long long int) var_8)), (arr_3 [i_0])))))));
                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) max((arr_3 [14LL]), (((/* implicit */long long int) 2147483647))))) ? (arr_3 [(short)7]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (~(arr_1 [i_1]))))));
                arr_5 [i_1] [i_0] |= ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (-515564362983486324LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-7297)), (arr_2 [i_0] [i_1] [(unsigned short)9]))))));
                arr_6 [i_1] [i_1] [i_0] &= ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_14 -= var_10;
}
