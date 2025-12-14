/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64090
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_13 [(_Bool)1] [i_4] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_3 - 4] [i_3 + 2] [i_3 - 4] [i_3 + 2]))));
                                arr_14 [(short)4] [6LL] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_3] [i_4]);
                                var_16 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) arr_6 [(signed char)11])) : (((/* implicit */int) arr_6 [i_0]))))));
                                var_17 += ((/* implicit */unsigned char) (-(17823803353649985132ULL)));
                            }
                            for (int i_5 = 2; i_5 < 17; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_0] [i_1] [9LL] [i_3 - 4] [10U] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(1912147968U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [5LL] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_5 - 2])) : (((/* implicit */int) arr_6 [i_3 - 4])))))))) > (((/* implicit */int) arr_0 [i_1]))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_0] [5LL] [i_1] [i_3 + 2] [i_2]))) ? (((/* implicit */int) (!(((_Bool) arr_9 [(short)7] [(short)11] [i_2] [i_5 - 2]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)116))))) ? (((/* implicit */int) arr_0 [i_5 - 1])) : (((/* implicit */int) max(((unsigned char)149), (arr_10 [i_5 - 2] [(_Bool)1] [2LL] [17] [(unsigned short)8] [12] [i_0]))))))));
                                var_19 ^= ((/* implicit */unsigned int) arr_3 [i_5 - 1] [i_1] [i_0]);
                                arr_18 [i_0] [i_2] [i_2] [i_5 - 2] [(unsigned short)5] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)149))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [5LL] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_12 [i_0] [i_0] [(_Bool)1]) + (9223372036854775807LL))) >> (((arr_4 [i_5 - 2] [i_0]) - (1762476421U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [10ULL] [i_3] [11] [i_2] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)180))))) : (((/* implicit */int) arr_10 [(short)14] [i_1] [(_Bool)1] [i_2] [(_Bool)1] [(unsigned char)15] [(unsigned short)15]))))) ? ((~(((/* implicit */int) (unsigned char)116)))) : ((~(((/* implicit */int) ((short) arr_11 [i_0] [i_1] [6U] [i_0] [i_5 + 1] [i_5 + 1]))))));
                            }
                            var_20 = ((/* implicit */unsigned int) (~(arr_12 [i_0] [(short)4] [i_2])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((arr_3 [i_1] [i_1] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(5425754393485786371ULL))))))))))));
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [(unsigned short)10] [(_Bool)1] [i_0] [i_0])) == (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0] [(short)7])))))) : (((((/* implicit */_Bool) arr_16 [i_1])) ? (569778906630877494LL) : (((/* implicit */long long int) -1368775097))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
    var_23 = ((/* implicit */_Bool) max((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_9))))) : (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
}
