/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71463
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
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25545)) ? (31) : (((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */long long int) arr_4 [i_1]))))) ? (min((16), (((/* implicit */int) var_5)))) : (min((-31), (var_7)))))));
                                arr_17 [i_0 + 2] [i_1] [i_1] [i_1] [i_1] [i_4 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_6 [i_0] [i_1]))));
                            }
                        } 
                    } 
                    arr_18 [i_0 + 1] [i_1] [i_1] [(signed char)4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2])) : (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) - (-32)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (arr_10 [i_0] [i_2 + 1] [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 31)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1] [i_1] [i_2 - 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0 - 1] [i_1] [i_1] [24LL] [i_2 + 2] = ((/* implicit */short) ((unsigned int) max((arr_0 [i_0 - 1]), (arr_0 [i_6]))));
                                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((signed char) max((min((((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] [i_6])), (var_2))), (((/* implicit */unsigned long long int) var_3))))))));
                                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25426))) * (0U)))) ? (max((arr_1 [(signed char)6]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)237), (((/* implicit */unsigned char) var_3)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_29 [i_0] [3] [i_0 - 1] [i_1] = (((~(var_0))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])), (arr_27 [(_Bool)1] [i_0 + 2] [i_2 + 2] [i_7] [i_7]))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 0U))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)0)))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) -1206718999)) && (((/* implicit */_Bool) (unsigned char)14)))))));
                        var_16 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1]))) ? (((unsigned long long int) -1LL)) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_3))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            {
                arr_35 [(unsigned char)6] [i_8] [i_8] = max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (signed char)127)), (arr_0 [i_8]))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_2))));
            }
        } 
    } 
}
