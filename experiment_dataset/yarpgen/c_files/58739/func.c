/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58739
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(signed char)10] [(signed char)3] &= ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_19 += ((signed char) min((arr_1 [11] [i_0]), (((/* implicit */long long int) max((var_18), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_20 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned long long int) 8)) : (((unsigned long long int) (signed char)127)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [2LL] [(signed char)11])), (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2)))))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) ((signed char) var_14)))))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [4U]))))))));
                    arr_12 [i_1] [i_2] [(unsigned short)11] [8U] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_1 - 1] [i_1])) & (((/* implicit */int) (signed char)-124)))) - (((/* implicit */int) arr_9 [i_1] [i_2] [i_1]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 4; i_5 < 15; i_5 += 2) 
            {
                for (int i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) min(((((((_Bool)1) ? (arr_14 [i_1] [(_Bool)1] [(signed char)14]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) / (((/* implicit */long long int) var_9)))), (arr_13 [i_1])));
                        var_23 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_1] [i_4]))));
                        arr_20 [i_1] = ((/* implicit */short) ((int) var_14));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36335)) & (((/* implicit */int) (unsigned short)11965))))) && (((/* implicit */_Bool) ((arr_19 [i_1 + 1]) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) + (arr_10 [i_1] [(signed char)1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)9])))))))))));
        }
        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_7])) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) var_12)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                arr_27 [i_1 + 1] [11] [11] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1]))) / (arr_13 [i_1])))));
                arr_28 [i_1] [(unsigned short)8] [i_8 - 2] [11] = ((((/* implicit */_Bool) arr_18 [10LL] [(signed char)3] [6] [i_8 + 1])) ? (((/* implicit */int) (((~(arr_26 [i_1] [i_1] [i_1] [i_1]))) >= (((/* implicit */int) ((signed char) arr_18 [i_1] [13ULL] [(signed char)3] [i_1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_8] [i_1])) || (((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) + (var_14)))) ? (((((/* implicit */int) arr_19 [i_1 - 1])) + (((/* implicit */int) arr_25 [i_1 + 1] [(short)2] [6LL])))) : ((-(((((/* implicit */_Bool) arr_21 [i_8] [i_7] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))))))));
            }
        }
    }
    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) : (var_14)))) ? (max((-1624832315), (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_12), ((_Bool)1)))))), (((/* implicit */int) var_17))));
}
