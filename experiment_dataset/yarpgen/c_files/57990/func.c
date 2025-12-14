/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57990
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
    var_14 |= ((_Bool) min((((/* implicit */unsigned long long int) min((-2018201438), (((/* implicit */int) (unsigned short)32336))))), (var_9)));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (_Bool)1))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (2425593254U)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) (short)15990))))) : (min((var_5), (((/* implicit */unsigned long long int) 0))))))));
        var_17 |= ((/* implicit */unsigned long long int) ((min((var_6), (arr_1 [i_0 + 1]))) >= ((+(((((/* implicit */long long int) -309598879)) + (arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_2] [0ULL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-109)) : ((~(((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) arr_9 [i_5] [i_2]))) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) >= (((/* implicit */long long int) (+(((/* implicit */int) (short)-20794)))))));
                                arr_19 [i_1] [i_2] [i_1] [i_1] [(signed char)16] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1]) : (arr_6 [i_1]))) : (min((arr_6 [i_4]), (((/* implicit */unsigned long long int) var_6))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)7] [i_3])))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (arr_4 [i_1]))))), (((/* implicit */unsigned long long int) (~(((arr_8 [i_3]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                }
            } 
        } 
    }
}
