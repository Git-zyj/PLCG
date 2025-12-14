/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99165
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (max((var_8), (((/* implicit */unsigned int) var_1)))))) >= (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_5 [9LL])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7)))) == (((/* implicit */int) max((var_1), (((/* implicit */short) var_6))))))) ? (max((((unsigned int) arr_4 [i_0])), (((/* implicit */unsigned int) ((arr_1 [3]) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132)))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned int) (((_Bool)0) ? (-1403957454) : (((/* implicit */int) (unsigned char)124))));
                            arr_11 [6U] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)124);
                            arr_12 [i_0] = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
