/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79234
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)17264))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) * (var_9)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) arr_0 [8ULL]);
                                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_4 [i_2 + 4]))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_6 [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 2] [(_Bool)1] [i_0])))))))) * (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_0)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 + 3])) < (((/* implicit */int) arr_12 [i_1] [i_2 - 1] [i_2]))))) : (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_9 [i_1] [i_0])))) + (((/* implicit */int) arr_11 [i_2 + 4] [i_2] [i_2] [3LL] [i_2 + 4] [i_0] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 4; i_6 < 9; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_16 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_5] [i_6 - 2] [(signed char)18] [i_7])) ? (arr_21 [i_6 - 2] [i_6 - 2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (_Bool)1))))) : (min((arr_16 [i_5]), (var_9))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_4 [i_6]))))) | (((/* implicit */int) ((_Bool) arr_18 [(_Bool)1] [i_6]))))))));
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_14 [12LL] [i_7] [i_7] [i_5] [i_5]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_6))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_23 [i_5] [2U] [i_5] = ((((/* implicit */int) arr_11 [i_5] [(unsigned short)22] [i_7] [i_5] [(signed char)18] [i_7] [i_7])) * ((((((_Bool)1) || (((/* implicit */_Bool) var_3)))) ? ((-(((/* implicit */int) arr_3 [i_5])))) : (((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            {
                var_18 = ((((((/* implicit */_Bool) arr_3 [i_8])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_1 [i_8])))))))) >= (((/* implicit */unsigned long long int) min((((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) arr_28 [7U] [i_8])) + (26106))) - (12))))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                arr_30 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8])) ? ((-(arr_10 [i_8] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) min((min((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_3)))));
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
}
