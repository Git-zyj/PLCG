/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56974
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(arr_3 [i_4 + 2] [i_0] [i_0])))) ? (((((/* implicit */unsigned int) 435585936)) & (arr_11 [3ULL] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6166399484225124982LL)))))));
                                arr_12 [i_0] [i_2] [i_2] [i_0] [i_4 + 1] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)122), (((/* implicit */signed char) (_Bool)1)))))) > (var_12))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 8; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */short) var_3);
                                var_15 *= ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (-937016143)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 10; i_8 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) || (((/* implicit */_Bool) arr_22 [i_7 - 1]))))), (((signed char) ((var_3) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (_Bool)1)))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_23 [i_7] [i_8]))));
            }
        } 
    } 
}
