/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65176
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) >> (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_3))))))) - ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                                arr_16 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-110)), (arr_2 [(unsigned char)8])))) ? (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned char)94))))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) max((((max((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_12 [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (1444169302) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)149))))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) var_1))))));
}
