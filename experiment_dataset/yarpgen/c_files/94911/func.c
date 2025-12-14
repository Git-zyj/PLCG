/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94911
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((-6278619773422191857LL), (6278619773422191856LL))), (max((((/* implicit */long long int) arr_2 [i_0] [(_Bool)0])), (-6278619773422191857LL)))))) ? (((((/* implicit */_Bool) -6278619773422191857LL)) ? (505117716800234757LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [15U]))))), (132621453U))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [(unsigned char)1] = ((((/* implicit */_Bool) (~(1606902026)))) ? (((arr_8 [i_0] [i_1] [15U] [i_3] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)18] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [0U] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-6278619773422191857LL)))));
                                var_11 -= ((/* implicit */unsigned int) 2287828610704211968ULL);
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (unsigned short)47229))));
                            }
                            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_8))));
                                var_14 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)23121)), (6848309680114939775ULL)))))))) ^ (arr_10 [i_2] [i_3] [i_2] [i_3] [i_5] [i_3] [i_5])));
                                arr_17 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) max((1153733802), (((((((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_2] [(signed char)6] [i_5])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)37887)) - (37879)))))))) : (((/* implicit */unsigned short) max((1153733802), (((((((((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_2] [(signed char)6] [i_5])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)37887)) - (37879))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                arr_22 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)30720);
                                arr_23 [i_0] [i_1 + 3] [i_2] [i_2] [i_3] [i_1] [i_6] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)0))))));
                                arr_24 [(unsigned short)21] [(unsigned short)8] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_3);
                            }
                            arr_25 [i_1] [i_2] [i_1] [i_1] = min((((/* implicit */int) (unsigned short)8189)), ((-(((/* implicit */int) ((arr_4 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_3])))))))));
                        }
                    } 
                } 
                var_15 = (unsigned short)16518;
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) (unsigned short)59512);
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_7] [i_7])))))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) min(((~(arr_6 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_7]))), (((((/* implicit */_Bool) arr_6 [i_7] [i_7] [(unsigned short)4] [i_7] [i_7] [i_7])) ? (arr_6 [i_7] [i_7] [8ULL] [i_7] [i_7] [i_7]) : (arr_6 [i_7] [i_7] [(unsigned char)10] [i_7] [20ULL] [i_7])))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) arr_18 [(unsigned char)2] [i_9] [i_8] [i_8] [i_9] [i_7]);
                    arr_33 [i_7] [i_7] [i_8 - 2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) & (10641969262504674569ULL))) : (((/* implicit */unsigned long long int) min((33554431), (((/* implicit */int) (short)12288))))))) : (((/* implicit */unsigned long long int) (~(arr_4 [i_8] [i_9]))))));
                }
            } 
        } 
    }
}
