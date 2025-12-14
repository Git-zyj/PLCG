/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8501
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
    var_19 = ((/* implicit */signed char) ((((((((((/* implicit */int) (_Bool)1)) >> ((((((-2147483647 - 1)) - (-2147483626))) + (24))))) - (((/* implicit */int) var_10)))) + (2147483647))) << (((var_4) - (961120078U)))));
    var_20 = ((((/* implicit */int) ((((((/* implicit */_Bool) 1172746066U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) var_7))))))))) & (((((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) var_6)) + (137))) - (5))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-14570)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 &= ((/* implicit */long long int) arr_0 [i_1]);
                    arr_6 [i_2] [11] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1832850432)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) != (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22156)) && ((_Bool)1)))) >> (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_14))))))));
                    arr_7 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) max((((unsigned int) arr_3 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)127)))))))));
                                var_23 = ((/* implicit */unsigned short) -594637175);
                                arr_14 [i_0] [(_Bool)1] [i_0 - 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)222))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
