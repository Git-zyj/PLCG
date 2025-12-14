/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9659
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */long long int) var_8);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_3 [i_1] [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1])))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [(unsigned char)21] [(signed char)15]))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */int) var_6);
                    var_21 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [18U]))))) > (((/* implicit */int) ((short) arr_0 [i_1] [i_3])))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_11 [i_2] [(short)1] [16LL] [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
                        var_22 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (arr_6 [i_1] [i_3] [i_2]))));
                    }
                    var_23 = ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (var_5)));
                    arr_12 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_6 [i_1] [i_1] [i_3])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) | (arr_9 [i_1] [i_2] [i_3] [i_3] [i_3]))) : (((arr_6 [i_1] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_5] [(unsigned short)7]) : (((/* implicit */long long int) ((arr_16 [i_7]) ? (((/* implicit */int) arr_20 [i_1])) : (((/* implicit */int) var_14)))))));
                        arr_22 [(_Bool)1] [i_5 + 2] [i_5 + 2] [i_7] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(unsigned short)11] [i_5 + 4] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_5] [3U] [i_5])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_19 [i_1] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_14 [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((var_6) ? (arr_19 [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(short)14] [i_6] [14U])) ? (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1])) : (arr_6 [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) : ((~(var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_14)))))))));
    var_27 = ((/* implicit */short) var_13);
}
