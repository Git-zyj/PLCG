/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8412
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((-9223372036854775806LL) + (9223372036854775805LL)));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_3])) >= (((/* implicit */int) var_17)))))) & (((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) arr_7 [11LL] [11LL] [i_3]))))) & ((~(arr_14 [(signed char)7] [i_1] [i_0] [i_1])))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_6 [i_2] [i_1])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2] [i_2] [i_2])) ? (arr_6 [i_2] [i_2 - 2]) : (arr_6 [i_2] [i_2 + 4])))))))));
                                arr_17 [8U] [i_2] [i_2 + 1] [i_0] [i_4] [i_3] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [(unsigned short)11] [i_2 - 1] [i_1])) > (arr_6 [i_2] [i_1])))) != (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_4 [i_2] [i_2 + 3] [i_2])))))))) : (((/* implicit */int) var_8))));
                                arr_18 [i_0] [8LL] [i_0] [8LL] [8LL] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) (((((~(((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (arr_13 [(signed char)13] [i_4])))))) + (2147483647))) << (((((((((/* implicit */long long int) ((arr_3 [i_0] [i_0]) & (arr_3 [13LL] [i_0])))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))))) + (1399200478LL))) - (4LL)))))) : (((/* implicit */_Bool) (((((~(((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (arr_13 [(signed char)13] [i_4])))))) + (2147483647))) << (((((((((((/* implicit */long long int) ((arr_3 [i_0] [i_0]) & (arr_3 [13LL] [i_0])))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))))) + (1399200478LL))) - (4LL))) - (489444086LL))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] |= ((/* implicit */long long int) var_9);
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_14 [i_2] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_0))))))) ? (arr_14 [14LL] [5LL] [i_0] [i_0]) : (((/* implicit */long long int) var_0))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_1);
}
