/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77430
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (_Bool)0)), (2641817191U)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_18 = ((/* implicit */unsigned short) (~(2641817208U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((var_15) + (2471488967U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) arr_6 [i_2 - 1]))))))));
                                var_20 ^= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((((unsigned int) var_0)) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1653150089U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    arr_16 [6LL] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)62399))));
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-8952))));
                    var_23 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24))) : (arr_15 [i_1] [i_5 + 3] [i_5 + 3] [0U])));
                }
                arr_17 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (+(((unsigned int) var_6))));
    var_25 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((((_Bool)0) ? (var_12) : (var_15))))) >> (((/* implicit */int) ((short) ((long long int) var_3))))));
}
