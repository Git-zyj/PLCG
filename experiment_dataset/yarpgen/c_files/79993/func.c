/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79993
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((var_2), (((/* implicit */long long int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8192))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_7)) ? (var_18) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [3ULL] [i_2] = ((/* implicit */unsigned char) var_8);
                                arr_16 [i_1] [i_1] [i_1] = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (max((var_8), (var_2))) : (min((var_9), (((/* implicit */long long int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_6] [i_1] [i_0]))))) ? (min((var_19), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            arr_22 [i_1] [i_1] [(signed char)7] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_1] [i_1])))), (((/* implicit */int) arr_9 [i_0 - 2])))) - ((((!(((/* implicit */_Bool) arr_19 [i_1] [5LL] [1LL] [i_6 + 1])))) ? (((/* implicit */int) arr_6 [6LL] [6LL] [(_Bool)1])) : ((-(((/* implicit */int) (short)8205))))))));
                            var_22 = ((/* implicit */long long int) (~(min((arr_10 [i_0 + 2] [i_5 + 1] [i_5 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) (-(var_9))))))));
                            var_23 -= (!(((/* implicit */_Bool) (+(var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
