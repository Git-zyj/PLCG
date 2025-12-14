/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71106
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) + (arr_3 [i_1])))))) ? ((+((+(((/* implicit */int) arr_0 [i_0] [i_1])))))) : (((/* implicit */int) var_7))));
                arr_8 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            }
        } 
    } 
    var_11 -= ((/* implicit */signed char) ((((((/* implicit */int) var_3)) >> ((((~(((/* implicit */int) var_0)))) - (57))))) - ((((((-(((/* implicit */int) var_3)))) + (2147483647))) << (((var_1) - (6832719927086455581LL)))))));
    var_12 = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) var_1);
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)174)) - (163)))));
        arr_14 [i_2] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) arr_15 [i_3])))) : (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_3])))))))));
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [(short)4])) >= (((/* implicit */int) arr_11 [i_2])))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_21 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_17 [i_5] [i_3] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [(_Bool)1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            arr_24 [i_2] [i_3] [i_2] [i_3] [i_6] [i_6 + 1] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)213)))) && (((/* implicit */_Bool) var_3))));
                            var_15 = ((/* implicit */unsigned long long int) var_2);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) > (((/* implicit */int) arr_9 [i_6]))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4])) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1476122476600585456ULL)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) (unsigned char)213))))) : (8712962259755156669LL)));
                        }
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5])) - (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((arr_17 [i_2] [(short)10] [i_4]) + (((/* implicit */unsigned long long int) arr_20 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5]))))))))));
                        arr_25 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */long long int) var_3);
                        arr_26 [i_2] [i_2] [i_2] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_2]))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) arr_18 [i_2] [i_3] [i_2]);
        }
    }
}
