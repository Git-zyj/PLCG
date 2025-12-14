/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60831
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1891847925) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))) : (arr_0 [i_0])));
        var_21 *= ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) max(((unsigned short)53071), (((/* implicit */unsigned short) arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [(unsigned char)3] [i_1]))))));
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [i_1]))), (((/* implicit */long long int) 478416101))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (2833319362336194264LL) : (((/* implicit */long long int) ((arr_8 [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2] [i_3]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_3])) : (((/* implicit */int) arr_5 [(short)2])))))));
                arr_13 [i_2] [3ULL] [7] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */int) (short)24063)), (-1265761817)))) ? (arr_6 [i_3] [i_2]) : (((/* implicit */long long int) 478416100)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1265761817)) ? (478416101) : (((/* implicit */int) (_Bool)1)))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_2] [i_3])), (arr_10 [i_2] [i_3] [i_2])))) ? (((/* implicit */int) min((arr_11 [i_2] [i_2]), (arr_11 [(unsigned char)3] [(signed char)3])))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_3]))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_24 -= max((((/* implicit */signed char) arr_5 [i_2])), ((signed char)125));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [8U])) ? (arr_6 [i_2] [i_3]) : (((/* implicit */long long int) 3123519089U))))) ? (arr_6 [i_2] [i_3]) : (min((arr_6 [i_2] [i_2]), (arr_6 [i_3] [i_4]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(short)0] [6ULL] [i_5 + 1] [(unsigned short)2] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1] [9] [9]) : (arr_17 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5])) ? (arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5]) : (arr_17 [3U] [i_5] [i_5 + 1] [i_5] [i_5])))));
                                arr_20 [i_2] [(_Bool)1] [i_4] [i_4] [i_6] = arr_19 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5];
                                arr_21 [6LL] [6LL] |= ((/* implicit */unsigned long long int) arr_11 [i_2] [i_5 + 1]);
                                var_27 = ((/* implicit */unsigned char) arr_6 [i_2] [i_4]);
                                arr_22 [(signed char)6] &= arr_19 [i_2] [i_3] [(_Bool)1] [i_5] [i_5 + 1] [i_6];
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 3; i_7 < 8; i_7 += 3) 
                {
                    arr_27 [i_2] [i_3] [i_7] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52863)))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [i_3] [(_Bool)0] [i_7])) : (((/* implicit */int) arr_2 [i_7]))));
                    arr_28 [i_3] [i_7] = (_Bool)1;
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 6; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_34 [i_2] [i_3] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) arr_5 [4]);
                                arr_35 [(unsigned short)3] [i_3] [i_7] [i_3] [i_9] = ((/* implicit */int) (signed char)-109);
                                arr_36 [i_7] = arr_3 [(signed char)19] [i_7];
                                var_28 = arr_5 [i_3];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
