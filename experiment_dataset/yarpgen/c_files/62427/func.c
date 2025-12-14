/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62427
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
    var_16 = ((unsigned int) var_14);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + ((+(2373108456U)))))) ? (max((((/* implicit */unsigned long long int) max((2373108435U), (((/* implicit */unsigned int) (short)-29032))))), ((+(var_0))))) : (var_11)));
    var_18 = ((/* implicit */short) 9162352974639326661LL);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) max(((short)-29034), (arr_2 [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) 3347943264U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_15) * (((/* implicit */unsigned long long int) var_6)))))) - (24ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_3] [i_1] [i_1]) | (3885236510073110639ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-29032))) * (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2]))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1098964392) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))) | (((((/* implicit */_Bool) (signed char)-1)) ? (min((var_5), (((/* implicit */long long int) (signed char)119)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
