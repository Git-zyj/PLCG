/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67721
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_5)) : (((arr_1 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1])))))));
    }
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_4] [(unsigned char)13] [i_2] [i_1] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2 - 1] [i_2]);
                                arr_17 [i_5] &= ((/* implicit */unsigned char) min((var_6), ((~((~(var_3)))))));
                                arr_18 [i_5] [i_4 - 3] [i_3] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_5] [i_4] [20] [i_1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) arr_10 [i_3] [(unsigned char)20] [i_3]))))))) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_1 - 1] [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_27 [7U] [i_2 - 1] [i_6] [i_7] [(unsigned short)3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((min((var_9), (((/* implicit */int) var_5)))), (((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]))))), ((-((+(var_4)))))));
                                arr_28 [i_8] [i_7 + 1] [i_7] [i_6] [i_2] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((max((((/* implicit */int) var_5)), (var_3))), ((~(((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_7)))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_7 - 1] [i_8])) ? (((/* implicit */int) arr_19 [(unsigned short)4] [(unsigned short)12] [i_8])) : (((/* implicit */int) arr_19 [i_8] [i_7 - 1] [i_2])))) : (min((((/* implicit */int) (_Bool)1)), (-471124501)))))));
                                arr_29 [i_1 + 1] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (-(min(((+(var_7))), (min((arr_6 [i_2] [4]), (var_4)))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((/* implicit */int) max((var_0), (arr_11 [i_1] [5] [9U] [i_2 + 1])))), ((-(((/* implicit */int) arr_11 [i_1 + 1] [i_2] [i_2 - 1] [i_2 + 1])))))))));
                arr_30 [i_1 - 1] [i_1] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1 - 1]))))), (arr_22 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1]));
            }
        } 
    } 
}
