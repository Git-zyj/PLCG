/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9108
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2]))) : (max((((/* implicit */long long int) var_5)), (var_4))))));
                var_16 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_3 [i_1 - 2])))) & (((((/* implicit */int) arr_3 [i_1 - 2])) ^ (((/* implicit */int) arr_3 [i_1 - 3]))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (arr_2 [i_0] [i_1]) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_2 [i_0] [i_1])))))) ? (((arr_3 [i_0]) ? (((arr_3 [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : ((+(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1 - 3]), (arr_3 [i_1 - 2]))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 2] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_4 - 2] [i_1] [i_1] [i_1]))) : (arr_10 [i_4 - 2] [i_4 - 2] [i_4] [i_2] [i_2]))) : ((~(var_2)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) var_5);
                                var_19 = ((/* implicit */long long int) arr_3 [i_0]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) ((unsigned short) var_8))) >= ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    {
                        arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_5] [i_5]);
                        arr_25 [i_6] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5])), (var_8))))) >> (((min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_5)))))) - (56)))));
                    }
                } 
            } 
        } 
        arr_26 [i_5] = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_20 [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))))))), ((~(var_6)))));
    }
    var_22 = ((/* implicit */int) ((unsigned short) var_7));
}
