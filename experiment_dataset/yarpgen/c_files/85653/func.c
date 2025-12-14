/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85653
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
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) 1661325378)) / (9453180277074717727ULL)))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) var_4)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_13)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 0U)) ? (var_12) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [8LL] [i_0]))))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (((-(8993563796634833888ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))))))) * (((/* implicit */int) var_17))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 0U);
        arr_7 [(signed char)20] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) / (((/* implicit */int) arr_5 [i_1 - 2] [i_1]))))) : ((((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 1])) : (((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38111))) : (8993563796634833888ULL)))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) arr_8 [0LL]))) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_4] [i_1] [3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_2 - 1])) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((_Bool) arr_1 [i_3] [i_4])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) - (((int) arr_9 [i_4] [i_1] [i_4]))))) : (var_9)));
                        var_25 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_3] [i_3])))))), (min((var_5), (((/* implicit */unsigned long long int) arr_12 [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_4]))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (long long int i_6 = 4; i_6 < 20; i_6 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (signed char)-105)))));
                    var_27 = ((/* implicit */int) arr_13 [i_1] [i_1 + 2] [i_6 - 3] [i_6]);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned int) var_18);
}
