/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66547
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_6)) - (var_4)));
    var_14 = ((/* implicit */signed char) ((var_9) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (short)6))))) ? ((~(((/* implicit */int) var_6)))) : (((var_2) ^ (2147483647))))) + (13686)))));
    var_15 = var_3;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-20815)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (signed char)63)))), ((~(arr_7 [i_1 + 2])))));
                        arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-164)) ? ((~(((((/* implicit */int) (signed char)-89)) + (2147483645))))) : ((+(((/* implicit */int) arr_0 [i_1 - 2] [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_2 [i_1 - 1] [i_2]))), (-1278379327)))));
                        arr_15 [i_1] [i_2] [i_4] = (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2])) ? (arr_4 [i_1 + 2] [i_1 + 1]) : (785879046))));
                        var_18 = (+((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 2])))));
                        var_19 = ((((/* implicit */_Bool) 632155527)) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_4])) : (((((((/* implicit */_Bool) arr_11 [i_1] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [8] [i_0] [i_0])) : (((/* implicit */int) (signed char)6)))) - ((~(((/* implicit */int) (short)7)))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_20 = ((-605558935) + (-1177182069));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 2] [i_1] [i_1])) == (((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_1 + 2] [i_1 - 2] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_7] [i_2] [i_6 - 3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) min(((((+(1278379335))) % ((~(arr_4 [i_0] [i_1]))))), (((/* implicit */int) (short)-6))));
                                var_22 = ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((((/* implicit */int) (short)-11)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0])) + (41))))) : (((((/* implicit */int) arr_9 [i_0])) | (((/* implicit */int) arr_9 [i_1 + 2])))));
                            }
                        } 
                    } 
                    var_23 = (-(((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 2] [i_1 + 1])))));
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(-1278379297))))))));
                }
            } 
        } 
    }
}
