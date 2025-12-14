/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83072
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-39)), (var_7))))))) ? (var_1) : (var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (+(var_4)))))));
                var_13 = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_4)), (var_6))), ((-(var_1))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
                        var_15 = ((/* implicit */unsigned long long int) var_2);
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_3])));
                        var_16 = ((/* implicit */short) ((unsigned int) arr_9 [i_2 + 2] [i_0] [i_3] [i_3] [i_1]));
                    }
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) (!(arr_12 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((unsigned char) (-(var_2))));
                                var_19 = ((/* implicit */int) ((unsigned char) (unsigned short)54878));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_21 = ((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (arr_9 [i_0] [i_0] [i_4] [i_4] [i_7]));
                        arr_21 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) - (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))));
                        arr_22 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2049530818U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(arr_7 [i_0] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (var_4))))));
                            var_23 |= ((/* implicit */signed char) ((var_6) % (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [(short)4]))))))));
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_8 - 2] [i_8] [i_8 - 3] [i_8 - 2] [i_8] [i_8] [i_8])))))));
                            var_26 ^= ((/* implicit */unsigned int) ((arr_8 [i_0] [i_8 - 2] [i_0]) == (arr_8 [i_0] [i_8 + 1] [i_8 + 1])));
                            var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) (_Bool)1))));
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        }
                        var_29 = ((/* implicit */unsigned int) ((var_9) ^ (((/* implicit */int) ((_Bool) arr_16 [i_8] [i_8] [i_0] [i_8] [i_8 - 3] [i_8])))));
                        arr_31 [i_8] [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)-27419))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_19 [i_0] [i_8 - 3] [i_8 - 1] [i_0])));
                    }
                }
                var_30 ^= (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [8ULL] [8ULL]))) != (2097151U)))), (((((/* implicit */_Bool) var_9)) ? (arr_2 [(short)8]) : (((/* implicit */int) arr_0 [(signed char)14]))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) / (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
}
