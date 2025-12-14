/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6451
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
    var_19 = ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned short)3874))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61645))) * (4906566526200780089ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_15)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (min((((/* implicit */long long int) var_7)), (var_18)))))));
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)103)), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)3891))))), (arr_5 [i_0] [(_Bool)1] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [(unsigned char)11] [(unsigned char)3] [0] [i_3] [i_4] = ((/* implicit */unsigned short) (+(331616523U)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3966476364357974916ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3849))) : (331616506U)));
                                var_23 = ((/* implicit */unsigned int) ((max(((-(arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4] [i_3] [i_0])) <= (((/* implicit */int) (signed char)105))))))) << (((max((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_3] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17969))) : (arr_11 [i_0]))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2])))) - (21037U)))));
                                var_24 = ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1]))))), (arr_0 [i_0]))) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))))), (min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (arr_9 [i_0] [2] [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    var_25 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((arr_1 [i_2] [i_2]), (arr_1 [i_0] [i_2]))), (arr_1 [i_1] [i_1]))))));
                }
            } 
        } 
    } 
}
