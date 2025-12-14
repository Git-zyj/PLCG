/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81943
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
    var_17 = (signed char)-119;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) max(((signed char)-8), (arr_7 [i_0] [i_0] [i_0]))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_5))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0 - 1])) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) <= (((/* implicit */int) arr_5 [i_1] [(signed char)6] [i_2] [i_1]))))) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 1]))) : ((+(((/* implicit */int) max((arr_3 [i_2]), (var_11)))))))))));
                            var_21 = ((signed char) ((signed char) var_9));
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((((/* implicit */int) (signed char)84)) / (((/* implicit */int) (signed char)-23)))) : (((/* implicit */int) var_11)))) / (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 2] [(signed char)2])), (max((var_3), (var_11)))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned short)6] [(signed char)6] [(unsigned short)8])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)4])) : (((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)12])))) : ((((!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_1] [(signed char)6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)23)))) : (((/* implicit */int) var_6)))))))));
                var_24 = var_7;
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                var_25 = arr_12 [i_4];
                var_26 = var_9;
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) / (((/* implicit */int) arr_13 [i_4]))))) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_12 [i_4])))) ^ ((+((-(((/* implicit */int) (unsigned short)0)))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    arr_18 [i_4] [i_4] [i_6] [i_6] = ((unsigned short) (-(((/* implicit */int) arr_12 [i_5]))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [(unsigned short)14] [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_16 [i_6] [i_6 - 1] [(unsigned short)4])) : (((/* implicit */int) arr_15 [i_6 + 1] [i_5])))))));
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_29 = var_5;
                        arr_23 [i_4] = arr_15 [i_7] [i_4];
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(max((((/* implicit */int) arr_15 [i_7] [i_8])), ((+(((/* implicit */int) arr_12 [i_7])))))))))));
                        var_31 &= ((/* implicit */signed char) arr_19 [i_4] [(signed char)2] [i_4]);
                    }
                    var_32 = arr_10 [i_4];
                }
                for (unsigned short i_9 = 4; i_9 < 16; i_9 += 3) 
                {
                    arr_27 [i_4] [i_4] [i_5] [i_5] = arr_13 [i_4];
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) arr_15 [i_4] [i_4]);
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) (signed char)22)))))));
                    }
                    var_35 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_26 [i_4] [i_9])) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_24 [i_9] [i_5] [(signed char)4])))))) >= (((/* implicit */int) var_9))));
                    var_36 = ((/* implicit */signed char) arr_28 [i_4] [i_5] [i_9] [i_4] [i_9 - 3]);
                }
            }
        } 
    } 
}
