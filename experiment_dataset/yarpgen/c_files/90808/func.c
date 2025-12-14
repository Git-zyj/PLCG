/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90808
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_1 - 1] [i_2] &= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_4 [i_0])))), (((((/* implicit */int) arr_2 [i_0] [(signed char)0])) <= (((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_0]))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_12 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_1 [i_2] [i_2])) + (((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */int) min(((signed char)117), ((signed char)-119)))))) * (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) && (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) <= (((/* implicit */int) arr_4 [i_0])))))))));
                        var_13 = ((/* implicit */signed char) (((+(((/* implicit */int) min(((signed char)117), ((signed char)127)))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-99))))) ? (((((/* implicit */int) (signed char)82)) + (((/* implicit */int) (signed char)5)))) : (((((/* implicit */int) (signed char)-38)) + (((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_14 = arr_7 [(signed char)4] [i_0] [(signed char)5] [i_1] [(signed char)0] [i_4];
                        arr_11 [(signed char)12] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [(signed char)5] [(signed char)4]))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [(signed char)5])) + ((~(((/* implicit */int) arr_3 [i_1]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_16 [i_5] [i_1] [i_1] [i_1 - 3] = ((/* implicit */signed char) (~((((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0])))) + ((-(((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1] [i_1 + 1]))))))));
                        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) min((arr_9 [(signed char)5] [i_1] [(signed char)5] [(signed char)5] [(signed char)15]), (arr_0 [(signed char)4])))) : (((/* implicit */int) arr_3 [i_1 - 1])))), (((/* implicit */int) arr_10 [i_1 - 3] [i_1 - 3] [i_1 - 3]))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5] [i_0] [i_0])))))))) / (((((/* implicit */int) arr_8 [i_0] [(signed char)0] [i_2] [i_5])) - (((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) + (101))) - (7)))))))));
                    }
                    var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [(signed char)3] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [(signed char)10])))))))));
                }
            } 
        } 
    } 
    var_19 = var_1;
}
