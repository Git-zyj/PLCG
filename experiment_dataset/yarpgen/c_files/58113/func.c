/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58113
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((long long int) var_4))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (~(-1520684650)))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = (((-(arr_1 [i_0]))) & (((arr_1 [i_0]) & (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = arr_6 [i_0] [(short)18] [i_1] [i_2];
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) && (((((/* implicit */_Bool) ((unsigned char) var_8))) || (((/* implicit */_Bool) arr_3 [i_0]))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) var_5)) : (1212862887)))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)0)))))))))))));
        var_15 = ((((/* implicit */_Bool) 1520684649)) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (+(var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (short)768)) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)8] [i_0] [i_0])) : (((/* implicit */int) var_2))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) 1520684649);
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1520684650)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_12 [i_3] [i_3] [i_3])))))));
            var_18 = ((/* implicit */unsigned int) var_0);
            var_19 = ((/* implicit */short) arr_10 [i_4]);
            var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)209)) && (((/* implicit */_Bool) arr_9 [i_3]))));
    }
    for (int i_5 = 4; i_5 < 12; i_5 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1520684649))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >= (((/* implicit */int) arr_11 [i_5])))))));
        var_23 = ((/* implicit */unsigned long long int) arr_11 [i_5]);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((arr_6 [i_5] [i_5 - 4] [i_5 - 4] [i_5 + 2]), (((/* implicit */unsigned int) (signed char)-86)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_7 [(unsigned char)8] [i_5] [i_5] [i_5])))) & ((-(((/* implicit */int) arr_3 [i_5])))))))));
    }
}
