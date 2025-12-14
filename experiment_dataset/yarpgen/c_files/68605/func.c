/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68605
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_10)) ? (-5155989304524022487LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [7LL]))))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 4] [i_2] [i_2] [i_0] [i_2] [i_0]))) | (((long long int) -324341044))))));
                                arr_15 [i_2] = ((/* implicit */long long int) var_4);
                                var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_8))))) : (min((arr_6 [i_4 - 3] [i_4 + 1] [i_4 - 3] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_7 [11U] [i_1] [11U] [i_3]))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */_Bool) min((max((324341044), (((int) (_Bool)0)))), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                    var_16 = ((/* implicit */int) var_10);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_11);
}
