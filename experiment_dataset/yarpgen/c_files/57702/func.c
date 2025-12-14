/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57702
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((8774356282154636434LL) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(arr_2 [i_0])))) : (max((var_10), (8774356282154636434LL))))))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_11))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_2] [i_3] [i_4 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_11 [i_2] [i_3] [i_4 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))))) != (arr_6 [i_2]))))) < (((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1] [(_Bool)1] [i_4 - 1] [i_4]))) : (arr_11 [i_4 - 1] [i_4] [i_4 - 1]))));
                    var_19 = max((min((((/* implicit */unsigned int) (short)30479)), (max((arr_6 [i_2]), (((/* implicit */unsigned int) arr_8 [i_2])))))), (((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_3] [i_4 - 1])));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_5] [i_5] [i_6 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (arr_16 [i_2] [i_3] [i_6] [i_7])))) & (min((arr_14 [i_2] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_16)))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_16 [4U] [4U] [i_5] [i_7 - 1]))));
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_21 [i_2] [i_7 - 2] [i_3] [i_5] [i_7] [4])))));
                                arr_23 [i_2] [0ULL] [i_5] [0ULL] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_18 [i_7 - 2] [i_2] [i_7 - 2] [i_6 - 2]), (arr_18 [i_7 + 1] [i_3] [i_5] [i_6 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7 + 2] [i_2] [i_2] [i_6 - 1])) ? (((/* implicit */int) var_15)) : (var_6)))) : (((((/* implicit */long long int) arr_16 [(signed char)12] [(signed char)12] [i_7] [i_6 - 3])) ^ (arr_18 [i_7 - 1] [i_3] [i_5] [i_6 + 1])))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_6 [6]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_21 [4U] [i_7 + 2] [i_6 - 2] [i_7 - 2] [i_6 - 2] [4U])) : (((/* implicit */int) ((_Bool) arr_6 [14])))))) || (((((/* implicit */_Bool) arr_7 [i_7 - 3] [(unsigned short)2])) && (((/* implicit */_Bool) arr_7 [i_7 + 1] [(unsigned char)4])))))))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_3] = ((/* implicit */long long int) max((arr_10 [i_2] [i_3] [i_3] [i_2]), (((/* implicit */unsigned char) (_Bool)1))));
                    arr_25 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) -8774356282154636435LL)) ? (((/* implicit */int) arr_10 [i_2] [(short)17] [i_5] [i_2])) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_15 [i_2]))))) & (arr_9 [i_2])));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2])) ? (arr_9 [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_8 - 2] [i_9] [(unsigned short)13]))))))));
                                var_24 = ((/* implicit */long long int) ((((arr_29 [i_2] [(unsigned char)4] [i_8 - 1] [i_10]) < (((/* implicit */int) arr_19 [i_2] [i_10] [i_8])))) && ((_Bool)1)));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(arr_20 [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_8 - 2] [i_8 + 2])))));
                                arr_35 [i_2] [i_2] [12U] [i_9] [9LL] = ((/* implicit */signed char) arr_9 [i_2]);
                            }
                        } 
                    } 
                    var_26 = ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) -6896631118590647990LL)));
                    arr_36 [6ULL] [(signed char)12] &= ((((/* implicit */int) arr_28 [i_8 + 1] [i_3] [i_2] [i_2])) >= (((/* implicit */int) arr_28 [i_2] [i_2] [i_8 + 2] [i_2])));
                    arr_37 [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_20 [i_2] [i_3] [i_3] [i_8 + 1] [i_8] [i_3] [i_8 - 2]) > (arr_20 [i_2] [i_3] [i_8] [i_8 - 1] [i_3] [(unsigned short)6] [i_8])));
                }
                var_27 = ((/* implicit */signed char) ((unsigned int) ((int) arr_34 [i_2] [i_3] [i_3] [i_2])));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_2);
    var_29 = ((/* implicit */unsigned long long int) var_12);
}
