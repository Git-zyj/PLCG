/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96167
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = (((+(arr_3 [i_0 - 2] [i_1]))) - (((/* implicit */int) var_8)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(var_7))), ((~(((/* implicit */int) var_2))))))) ? (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)11487)))), (((unsigned int) arr_3 [(short)0] [(signed char)20])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)10] [i_1] [i_2] [(short)4] [i_4 - 1])))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((unsigned int) arr_3 [i_0 + 1] [6U])) << (((((((/* implicit */_Bool) -525307399)) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1] [(unsigned short)18] [i_3] [2] [i_2 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))) - (72))))))));
                                var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_12 [i_5] [i_1] [i_1] [i_1] [6]))))) && (((/* implicit */_Bool) arr_2 [(unsigned char)10]))));
                                arr_21 [(short)6] [(signed char)12] [i_1] [(signed char)18] [(unsigned short)6] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12120)) << (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) ((signed char) var_9))))));
    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    var_24 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54024)) ? (((/* implicit */unsigned int) var_15)) : (4294967276U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (15393162788864ULL))), (((/* implicit */unsigned long long int) var_12))));
                    var_25 -= ((/* implicit */_Bool) max(((unsigned short)55275), (max((var_13), (((/* implicit */unsigned short) arr_7 [(unsigned short)1] [i_8 - 1] [i_8 - 1] [i_8 + 1]))))));
                }
            } 
        } 
    } 
}
