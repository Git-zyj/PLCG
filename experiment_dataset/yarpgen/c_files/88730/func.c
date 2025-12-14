/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88730
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned char) ((int) var_10));
                                var_18 = ((/* implicit */int) ((((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4]))))) << (((((/* implicit */int) arr_9 [i_0] [i_0 - 4] [i_0] [i_0 + 2] [i_0])) + (117))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) & (arr_2 [i_3 + 2])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max(((signed char)0), (arr_10 [i_0] [i_0] [i_0 - 3] [i_0 - 4])))) || (((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_11);
    var_20 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_6 + 3] [i_7] [i_8] |= ((/* implicit */int) ((((/* implicit */_Bool) 13260377519229351696ULL)) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) min((arr_0 [i_6] [i_8]), (((/* implicit */unsigned short) var_10)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_5] [i_5] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_6 + 1] [(unsigned char)4])))))) ? (((((/* implicit */_Bool) 5186366554480199911ULL)) ? (5186366554480199922ULL) : (13260377519229351691ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9)))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_6 [16U] [i_7] [i_7] [i_7]) : (((/* implicit */int) var_5))))), (5186366554480199920ULL))) == (5186366554480199914ULL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((5186366554480199921ULL) - (5186366554480199921ULL))))));
                arr_27 [i_5] [(unsigned short)1] [i_5] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) <= (((/* implicit */int) arr_15 [i_5]))))) << (((((((/* implicit */_Bool) 5186366554480199952ULL)) ? (13260377519229351691ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))))) - (13260377519229351670ULL))))) % (((((/* implicit */_Bool) arr_21 [i_6 - 1] [13LL] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))));
                arr_28 [i_5] [i_5] [i_6] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6 + 1] [(unsigned char)15] [i_6 + 2] [i_6] [i_6] [(unsigned char)15])) ? (((/* implicit */int) arr_3 [i_5] [i_6 + 4] [i_5])) : (arr_12 [i_6] [(unsigned char)16] [i_6 + 4] [i_6] [i_6 + 2])))), (max((5186366554480199941ULL), (5186366554480199924ULL)))));
                arr_29 [i_5] |= min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 13260377519229351672ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [2] [i_6 + 3]))) >= (arr_22 [i_5] [i_6 + 3] [15ULL]))))) : (5186366554480199906ULL))));
            }
        } 
    } 
}
