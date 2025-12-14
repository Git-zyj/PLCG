/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83606
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
    var_19 = ((/* implicit */unsigned short) var_4);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)36)) && (((/* implicit */_Bool) var_14))))), (((((/* implicit */unsigned int) var_16)) + (var_1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-6695)) > (((/* implicit */int) (_Bool)1))))) * (((/* implicit */int) (short)6695))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2 + 2]))))) ? (((/* implicit */int) arr_5 [i_2 - 2])) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 + 2]))))));
                arr_10 [i_1] [i_2] [19] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2])) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))));
                arr_11 [i_2 - 1] [i_2] [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((1608812588U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-15432)))))) : (((/* implicit */int) ((signed char) arr_4 [i_1])))));
                arr_12 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 3])) ? (arr_6 [i_2] [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [i_2 - 3]) > (arr_6 [i_1] [i_2 - 3])))))));
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)-64);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_23 [i_5] [i_4] [i_3] = ((/* implicit */signed char) arr_6 [i_4] [i_3]);
                    var_22 = ((/* implicit */_Bool) max((var_22), (arr_5 [i_5])));
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */long long int) ((signed char) ((((arr_16 [i_3]) >> (((/* implicit */int) arr_17 [i_3] [i_3] [i_3])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */_Bool) arr_18 [i_6]);
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)32255)) | (((/* implicit */int) (unsigned short)32255))));
        var_24 = ((/* implicit */_Bool) ((arr_25 [i_6]) >> (((((((/* implicit */_Bool) 1746658937618879106LL)) ? (((/* implicit */int) (unsigned short)50166)) : (((/* implicit */int) arr_4 [i_6])))) - (50157)))));
    }
}
