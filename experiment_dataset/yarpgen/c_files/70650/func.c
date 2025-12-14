/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70650
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
    var_11 = var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)4] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 3])) : (((/* implicit */int) arr_0 [(unsigned short)0])))) | (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1 - 3] [i_1 + 1] [i_1]))))));
                var_12 = ((unsigned short) ((((/* implicit */int) ((unsigned short) var_2))) + (((/* implicit */int) min((arr_3 [i_0]), (arr_2 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = arr_4 [i_1] [i_1 + 1] [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((unsigned short) arr_3 [i_0]);
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (var_0)))) / (((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 2] [i_2 + 1] [i_3] [i_3 - 2] [i_4]))))) ? (((/* implicit */int) min((var_6), (arr_4 [i_3 - 1] [i_2 - 3] [i_1 - 2])))) : (((/* implicit */int) min((var_2), ((unsigned short)29537))))));
                                var_14 = ((/* implicit */unsigned short) (((+((-(((/* implicit */int) arr_17 [i_2])))))) * ((+(((((/* implicit */int) (unsigned short)63571)) / (((/* implicit */int) arr_10 [i_0] [i_2]))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_0] [i_3 - 3] [i_4])) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (unsigned short)18554))))) && (((/* implicit */_Bool) (unsigned short)52679)))) ? ((+(((/* implicit */int) (unsigned short)65527)))) : (((((/* implicit */int) arr_11 [i_2] [i_2 - 4] [i_2 + 2] [i_2])) / (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2]))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_0] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_0] [i_3 - 4] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_0] [i_3 + 1] [i_4])))), (((/* implicit */int) var_1))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                            {
                                var_15 |= var_9;
                                arr_22 [i_0] [i_1 - 2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_11 [i_2 - 1] [i_1 - 1] [i_2] [i_3 - 1])) + (((/* implicit */int) (unsigned short)65526)))) : (((/* implicit */int) (unsigned short)16))));
                            }
                        }
                    } 
                } 
                var_16 -= ((unsigned short) (!(((/* implicit */_Bool) arr_17 [(unsigned short)10]))));
            }
        } 
    } 
    var_17 = ((unsigned short) (~(((((/* implicit */int) var_3)) << (((((/* implicit */int) var_5)) - (16826)))))));
}
