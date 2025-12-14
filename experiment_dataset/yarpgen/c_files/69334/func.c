/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69334
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) - (arr_9 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)20)))) : (((unsigned long long int) arr_4 [17ULL] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [(unsigned char)5]), (((/* implicit */short) arr_2 [(unsigned char)20] [i_1] [(unsigned char)13]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_0] [(short)19] [i_3]))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_3])), (((unsigned long long int) arr_4 [i_3] [i_3] [i_3])))));
                        arr_10 [i_1] [i_1] [(signed char)5] = ((((/* implicit */_Bool) arr_7 [i_3] [(unsigned char)9] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) arr_3 [i_2])) + (9912)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((arr_9 [i_3]) >> (min((((/* implicit */unsigned int) (signed char)0)), (611818947U))))))));
                            var_18 = ((/* implicit */short) (-(var_9)));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 - 2] [i_4 + 3])) >> (((((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 3])) - (54)))))) || (((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 + 3]))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((arr_13 [i_0] [i_1] [14U] [i_4 + 2] [i_4 + 2] [2ULL]), (arr_13 [i_3] [11U] [(_Bool)1] [i_4 - 1] [i_4 - 1] [i_0]))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_4 [i_2] [i_3] [i_2]))))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [(signed char)17] = ((/* implicit */unsigned char) ((max((((unsigned long long int) arr_13 [i_5] [i_5] [i_3] [2U] [i_1] [i_0])), (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_3] [(signed char)5] [i_1] [i_0] [i_0]) * (((/* implicit */int) (unsigned char)1))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)6])))));
                            arr_20 [i_5] [20ULL] [i_2] [i_1] [11U] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */int) (unsigned char)254)) << (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                        }
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        arr_24 [i_6 + 2] [15ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6 + 4] [i_6]))))) ? (((/* implicit */int) ((unsigned short) 14288056678334325083ULL))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2] [i_6] [i_0] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] [i_6 + 2] [i_0])) : (((/* implicit */int) arr_14 [i_1] [6ULL] [i_1] [i_6] [i_6] [i_6 - 1] [i_6 + 2]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_14 [i_0] [(_Bool)1] [i_1] [i_2] [i_6] [i_7] [(_Bool)1]))));
                            arr_28 [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) (+(((unsigned long long int) (_Bool)1))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_26 [i_2] [i_6 + 3] [i_6 + 3] [i_7 + 3] [i_7 - 3]))));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8] = ((((/* implicit */_Bool) ((-655084685) - (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_14 [i_0] [i_1] [12ULL] [i_2] [i_2] [i_8] [i_8]))))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(11880194427343019042ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_8] [i_1] [i_0])) >> (((/* implicit */int) var_13))))) && (((arr_4 [i_0] [i_1] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)2]))))))))));
                        var_23 -= var_0;
                    }
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
            } 
        } 
    } 
}
