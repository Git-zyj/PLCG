/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90724
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? ((-(((var_7) & (-1LL))))) : (((/* implicit */long long int) min(((~(var_15))), (var_15))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1]) != (arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1]))) ? (max((arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (arr_6 [12U] [12U] [i_2 + 1] [i_2 - 1]) : (arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1])))));
                                var_19 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1] [i_0] [i_1] [4LL])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_0] [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) (~(833957220U)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
