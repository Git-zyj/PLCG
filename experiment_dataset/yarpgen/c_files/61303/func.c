/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61303
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_1 - 1] [(_Bool)1] [i_1 + 1])) ? (arr_0 [i_0 + 2]) : (min((((/* implicit */unsigned int) arr_3 [i_0] [2U] [i_1 + 1])), (arr_0 [i_1 + 1]))))), (((/* implicit */unsigned int) ((int) arr_2 [i_0 + 1]))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_15 &= ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_4 [i_0] [i_0 - 1] [i_0 - 1] [i_2]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))), ((~(arr_2 [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))) : (arr_1 [i_2])))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) arr_5 [i_2] [i_0 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) arr_9 [(signed char)5] [i_2] [(signed char)2] [i_2] [i_0]);
                                arr_10 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (-(max(((+(arr_7 [i_2] [i_0]))), (arr_7 [i_0] [10])))));
                                arr_11 [i_0 + 2] [i_1 + 1] [i_2] [i_3 - 1] [i_0] = ((/* implicit */signed char) ((short) 1505930363U));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) arr_2 [i_1]);
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [9U] [i_1] [i_5] [i_5] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1] [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_5]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5] [i_0] [i_5]))))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_0] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 4; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_20 [i_0 + 2] [(short)10] [14] [i_5] [i_6] [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) ((max((arr_16 [i_0] [i_1] [i_1] [i_6 + 1]), (arr_16 [i_0] [i_5] [(unsigned short)4] [i_6 - 4]))) - (((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 3] [i_0] [i_6 - 4])) ? (arr_16 [i_0] [i_6] [i_6] [i_6 - 1]) : (arr_16 [i_0] [i_5] [i_5] [i_6 - 3])))));
                                var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-29885))))), (((((_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1))))))))));
                                arr_21 [i_0] [i_0] [i_5] [i_6 + 2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_6 + 2] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (5507739007104468303ULL)))) ? ((~(5507739007104468303ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7])) - (arr_16 [i_0] [i_1 + 1] [i_5] [i_6 + 1]))) % (((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_6] [i_7 - 2])) ? (arr_2 [(_Bool)1]) : (arr_16 [i_0] [i_7 - 3] [i_5] [i_6]))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_1 - 1] [i_0 - 1])) ? (arr_12 [i_0] [i_1 + 1] [i_0 + 1]) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)111)), (409909071)))), (6025928342873799200ULL)))));
    var_22 = ((/* implicit */int) var_4);
}
