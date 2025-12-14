/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6718
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
    var_13 ^= ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [10] [i_1] [i_2] [i_1])) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_2 [0U]))), (((arr_2 [i_0]) + (arr_4 [i_3] [4] [4] [i_0])))))) ? (((/* implicit */unsigned int) (-(((int) var_11))))) : (max((arr_0 [i_1 + 1] [10]), (arr_0 [0U] [0U])))));
                        var_15 &= min((((((/* implicit */_Bool) max((arr_0 [i_0] [4]), (((/* implicit */unsigned int) arr_8 [14U] [6] [14U] [i_2]))))) ? (((/* implicit */unsigned int) (+(var_1)))) : (min((arr_3 [9] [12] [i_2]), (arr_0 [i_0] [6]))))), (max((arr_7 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2]), (min((((/* implicit */unsigned int) arr_5 [i_0] [i_2])), (arr_0 [i_1] [8]))))));
                        var_16 = ((/* implicit */unsigned int) (~(min((arr_6 [i_0] [12U] [i_1 + 2] [i_3]), (arr_6 [i_0] [15] [i_1 + 2] [i_3])))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_0])) ? (var_11) : (((/* implicit */unsigned int) var_8))))) ? (min((var_10), (arr_0 [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) var_8)) : (arr_7 [i_0] [i_1] [i_2] [i_4 + 1])))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) arr_1 [i_0]))))))) : (var_9));
                        var_18 = (-(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) var_12)))))) : (arr_0 [i_4 + 1] [i_0]))));
                        var_19 &= min(((~(arr_5 [i_1 + 2] [i_2]))), (((/* implicit */int) ((arr_5 [i_1 + 1] [i_1 + 1]) <= (arr_5 [i_0] [i_0])))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_1 + 2] [i_1 + 2] [i_4 + 1] [i_4 - 1]), (((unsigned int) arr_5 [i_0] [i_2]))))) ? ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_1] [2])) ? (arr_10 [i_0] [6U] [6U] [i_4 + 1]) : (arr_3 [i_0] [i_2] [i_4 - 1]))) : (((/* implicit */unsigned int) (+(var_6)))))) : (min((arr_0 [10] [10]), (arr_10 [i_0] [i_4 - 1] [i_0] [9]))))))));
                    }
                    var_21 = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_2]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])) ? (var_4) : (var_0))))), (((/* implicit */unsigned int) ((arr_4 [i_0] [i_0] [i_0] [i_2]) == (arr_2 [i_1 + 2]))))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1 + 2] [15])) ? (var_10) : (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1 + 2] [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2] [i_1])) ? (arr_6 [i_0] [i_1 - 1] [i_1 + 2] [i_0]) : (arr_6 [i_0] [i_1 + 1] [i_1 + 2] [i_1 + 1]))) : (arr_6 [i_0] [i_1] [i_1 + 2] [i_0]));
                    var_23 &= max((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 2])) ? (arr_3 [i_1 - 1] [i_1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1] [i_1 + 1]))), (((((/* implicit */_Bool) max((var_6), (var_5)))) ? (((((/* implicit */_Bool) arr_10 [i_1] [5] [5] [i_2])) ? (((/* implicit */unsigned int) var_6)) : (arr_4 [i_0] [6] [i_0] [i_0]))) : (arr_4 [i_0] [0] [i_2] [i_2]))));
                }
            } 
        } 
    } 
}
