/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62617
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(var_3)))) : (var_5)))) ? (((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) 2147483647))))) % (2147483647))) : (((min((var_3), (var_12))) | (var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_5))));
                    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)15021)))), (max((arr_5 [i_0] [i_1 - 2] [i_2 + 2] [i_0]), (((/* implicit */int) arr_4 [i_1 - 2] [i_1]))))));
                    arr_7 [i_2] [i_1 - 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((1012713580), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))), (((15669919149311879405ULL) >> (((1012713591) - (1012713568)))))))) ? (var_7) : (8465384862106230694ULL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (((-(var_14))) > (((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_12))))))) & (((/* implicit */int) var_0))));
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_14)));
}
