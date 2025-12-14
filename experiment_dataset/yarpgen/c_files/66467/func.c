/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66467
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [0LL] [0LL] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_1] [7LL]))))))) : ((+(arr_9 [i_2] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((int) (+(8743882861641681ULL))));
                                var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_4] [i_4 - 1] [i_4] [19ULL] [0ULL] [i_4])) < (32505856U))))) ^ (((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))) / (max((8743882861641658ULL), (((/* implicit */unsigned long long int) var_10))))))));
                                var_21 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 5669533851406159509LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)12]))) : (8743882861641641ULL))))) * (((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (unsigned char)37))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-104))))) ? (var_10) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1] [i_0]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0]) & (((/* implicit */int) arr_1 [i_0] [12]))))) <= (((((/* implicit */_Bool) arr_7 [i_0] [20ULL] [i_2])) ? (((/* implicit */unsigned long long int) arr_10 [0U] [i_0] [i_2] [i_0] [i_0] [i_2])) : (18438000190847909958ULL)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_15))))))))));
}
