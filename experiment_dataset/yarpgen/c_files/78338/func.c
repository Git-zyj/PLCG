/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78338
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)55))))) ? (2078043816) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (short)1920))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1] [(unsigned short)6]))) : (((/* implicit */unsigned long long int) ((var_11) << (((((arr_10 [i_2]) + (654236519))) - (61)))))))));
                            var_19 = ((/* implicit */signed char) ((int) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_2 [i_3] [i_0])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? ((+(arr_9 [i_1] [(unsigned char)1] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9008066958004744116LL)) ? (arr_1 [i_1] [i_0]) : (((/* implicit */int) (_Bool)0)))))))));
                var_21 = ((/* implicit */unsigned short) max((arr_1 [i_1] [i_0]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (9008066958004744116LL))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_4] [i_6])), (var_1)))) ? (max((((/* implicit */unsigned int) var_6)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55006)))))))))));
                                arr_18 [i_1] [(_Bool)1] [i_1] [i_5] [i_1] |= ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((_Bool) var_16))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_5)))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((_Bool) ((unsigned short) var_3))))));
                                var_24 -= ((/* implicit */short) arr_0 [i_0] [i_5]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
