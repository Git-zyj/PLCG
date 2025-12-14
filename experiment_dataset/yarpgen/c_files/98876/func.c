/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98876
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
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3 + 2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_3 - 1]))));
                                arr_13 [i_0] [(_Bool)1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_11 [i_0] [9U]))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((arr_2 [i_1]), (arr_10 [i_0] [i_1] [i_1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) var_10))));
}
