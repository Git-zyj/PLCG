/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94537
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-2147483647 - 1));
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (signed char)-122))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)-51)))))), (min((arr_1 [i_0]), (((/* implicit */int) var_4))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_11 [(signed char)8] [(signed char)8] [i_0] [i_2] = ((/* implicit */signed char) var_7);
                arr_12 [i_0] [i_1] [(signed char)3] [i_0] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-124)), ((unsigned char)201)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)21907)) < (((/* implicit */int) var_7))))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_0] [i_1] [2U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_18 [i_0 + 3] [(short)1] [i_4 + 1] [i_4]) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
                    var_17 = ((/* implicit */signed char) ((unsigned long long int) (-2147483647 - 1)));
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))));
            }
            var_19 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned char)0)), (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0])))))));
        }
        for (int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) * ((-((-(((/* implicit */int) arr_23 [i_0] [i_0]))))))));
            arr_24 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_12)))))) ? (min((((/* implicit */int) arr_7 [i_0])), ((-(((/* implicit */int) arr_2 [i_0])))))) : (arr_18 [i_0] [i_5 + 1] [i_5 + 1] [i_5])));
        }
    }
    var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) var_3)));
}
