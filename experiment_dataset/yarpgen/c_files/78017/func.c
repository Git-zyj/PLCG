/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78017
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) (+(min((var_15), (arr_5 [i_2 - 3] [(_Bool)0] [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                                arr_12 [i_0] [i_2] [i_2] [i_0] [i_4] [i_0] [i_2] = ((/* implicit */unsigned short) (+(min(((+(((/* implicit */int) arr_7 [i_0] [(unsigned short)6] [i_0])))), ((-(((/* implicit */int) (signed char)98))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (signed char)-99))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_18), (((/* implicit */short) (signed char)-98)))))) : (((((/* implicit */_Bool) (signed char)98)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))))) ? ((-(max((((/* implicit */int) (signed char)-103)), (var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-99)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_13)) - (36435))))))))))))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) -1420135393)) == (var_15)))) == (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))))))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)255)));
}
