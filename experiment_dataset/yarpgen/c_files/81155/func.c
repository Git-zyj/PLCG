/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81155
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 |= ((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */int) var_4)) + (arr_6 [i_0] [i_1] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))));
                                var_14 = ((/* implicit */signed char) arr_11 [i_1]);
                                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((var_8), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                                var_16 = ((/* implicit */unsigned int) arr_1 [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_7 [(signed char)13] [0U]) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_5] [i_6]))) * (((arr_2 [i_5]) + (((/* implicit */long long int) 1173155679U))))))));
                                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [(signed char)14] [(signed char)8] [i_5] [i_6])) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((-(((((/* implicit */_Bool) 3121811625U)) ? (3121811617U) : (1173155679U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_9 [i_0]))) == (((/* implicit */int) var_7)))))))))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */signed char) (unsigned short)64574);
}
