/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80143
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((arr_2 [i_0 + 1]), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_11 -= ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) arr_7 [(short)24] [(short)24])) ? (((/* implicit */int) var_3)) : (var_10))), (((/* implicit */int) var_0))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) var_4);
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (short i_4 = 4; i_4 < 8; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) arr_24 [i_4 - 4] [i_5] [i_5] [i_7]);
                        var_14 = ((/* implicit */unsigned long long int) var_6);
                        var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4 - 3] [i_4 - 3]))) : (var_1))) ^ (((/* implicit */unsigned long long int) arr_1 [i_4 + 4])))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_5] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_4 + 4] [i_5])))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) arr_22 [i_4 + 3] [i_4 - 4] [i_4 + 4] [i_4]);
        var_17 = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4]);
        arr_26 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [18])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [(unsigned short)7] [i_4 + 1])) : (var_10))) / ((+(var_7)))))), (min((((/* implicit */unsigned int) var_3)), (arr_13 [i_4 - 4] [i_4 - 4] [i_4 - 3] [i_4 - 4] [i_4] [i_4 - 1])))));
        var_18 = ((/* implicit */unsigned short) var_5);
    }
}
