/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75213
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) (unsigned char)215)) ? (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3996093599U)))))) ? (298873697U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)27533)) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) -1000272678)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-12509))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (arr_3 [10] [i_2])))))) * (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) min(((_Bool)1), (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_4] [(signed char)12] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))) ? ((-(-40205655))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536620391U)))))));
                                var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 3] [i_1] [i_3 - 1] [i_0 + 2] [i_4]))))) >> (((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */int) var_6))))), (3579207620U))) - (1436165653U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0 + 1] [i_0] [i_2] [i_5] [i_6 - 2] = ((/* implicit */signed char) (((+(min((((/* implicit */unsigned int) (unsigned char)243)), (4294967295U))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2 - 2])))));
                                arr_18 [i_0] [i_1] [i_2] [9U] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_12))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_14 [(_Bool)1] [i_2] [i_5 - 1] [(unsigned short)6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
