/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65644
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) (signed char)43);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_3);
                                var_20 = ((/* implicit */unsigned short) (-(var_3)));
                                arr_12 [i_4] [i_3] [i_2 - 1] [i_2] [i_2 - 1] [i_1 - 4] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-28080)) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)110))))) ? (arr_6 [i_2] [i_2] [i_2 - 1]) : (((/* implicit */unsigned int) ((int) var_5))))) - (4294940564U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 - 3] [i_1 - 3])))) ? (((arr_16 [i_6] [i_6] [i_2 - 1] [i_6]) ? (((((/* implicit */_Bool) -3909199177747781838LL)) ? (arr_9 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_2 - 1] [i_5] [i_6])) || (((/* implicit */_Bool) (unsigned char)85)))))))) : (min((((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_1 - 4] [i_0] [i_0])), (arr_15 [i_0] [i_1])))));
                                arr_19 [(unsigned char)6] [(unsigned char)6] [i_2] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 33554431)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28075)))));
                                var_22 = ((/* implicit */_Bool) (+(((var_1) / (arr_3 [i_1 + 1] [i_1 - 4] [i_2 - 1])))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */_Bool) min(((-(2008172261U))), (((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_1 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 4; i_7 < 13; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 2717644108U)) ? (1968297850U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4516))))))));
                                var_24 += ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14]);
                                arr_28 [i_0] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_24 [i_7 - 4] [i_7 - 4] [i_2] [i_1 - 1] [i_2 - 1] [i_7 - 4] [i_8])))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-28084)) + (2147483647))) >> (((arr_24 [i_7 + 2] [i_1] [i_2] [i_1 - 1] [i_2 - 1] [i_2] [i_8]) - (1194406734)))))) : (((((/* implicit */_Bool) 1577323189U)) ? (arr_13 [i_7 - 1] [i_1] [i_1] [i_1 - 3]) : (((/* implicit */unsigned int) arr_24 [i_7 - 4] [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), ((unsigned char)156)))) && (((/* implicit */_Bool) 4294967295U)))))));
    var_26 += ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned char i_9 = 3; i_9 < 21; i_9 += 4) 
    {
        for (unsigned int i_10 = 2; i_10 < 24; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            {
                                arr_46 [i_9] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) ((unsigned char) (signed char)-1))))));
                                var_27 = ((/* implicit */signed char) var_8);
                                arr_47 [i_9] [i_10 - 1] [2] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) 2717644107U)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_41 [i_9 + 2] [i_11] [i_13])) / (((/* implicit */int) (unsigned char)171)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)12196)))))))) : (var_1)));
                                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) max(((short)-29039), (arr_33 [i_10] [i_11 + 4] [i_13])))))) : (((/* implicit */int) arr_40 [i_12] [i_13]))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) var_3);
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_9] [i_9 - 1] [i_10 - 2]))))) ? ((+(((/* implicit */int) (signed char)-53)))) : ((((_Bool)1) ? (((/* implicit */int) arr_41 [i_9] [i_9 + 4] [i_10 - 1])) : (((/* implicit */int) arr_41 [i_9] [i_9 - 1] [i_10 - 2])))))))));
            }
        } 
    } 
}
