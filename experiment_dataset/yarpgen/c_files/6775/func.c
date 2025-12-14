/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6775
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
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [7U])) ? (((/* implicit */int) (unsigned short)58585)) : (((/* implicit */int) var_6))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        arr_9 [i_1] = var_7;
        arr_10 [i_1] = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [(unsigned short)5] [i_1] [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_13 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))) : (min((var_10), (var_10)))))) : (min((var_8), (((/* implicit */unsigned long long int) var_12))))));
                    var_15 = max((((arr_13 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]) ^ (arr_13 [i_3 + 1] [i_3] [i_3] [i_3 + 1]))), (((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((arr_13 [i_1] [i_1] [i_1] [i_1]), (var_13)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (~(var_13)));
        arr_20 [i_4] = ((/* implicit */long long int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))));
        arr_21 [i_4] [i_4] = var_9;
        /* LoopNest 3 */
        for (unsigned int i_5 = 4; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_9)))))))))))));
                        arr_29 [(short)9] [i_4] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_30 [i_4] [(short)15] [(short)15] [i_4] = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        } 
    }
}
