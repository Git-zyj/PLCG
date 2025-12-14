/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72876
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
    var_11 &= ((/* implicit */unsigned long long int) var_7);
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((signed char) ((arr_10 [i_0] [i_0] [i_0] [6] [i_0] [i_0]) ? (-2751311811328728189LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))))));
                            var_14 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6209984867603220037LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) var_6))))) : (max((arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (max((((/* implicit */unsigned long long int) min((var_6), (var_4)))), (((arr_9 [i_0] [(signed char)16] [i_0] [i_1] [i_0] [i_1]) + (((/* implicit */unsigned long long int) arr_7 [i_0])))))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                /* LoopSeq 4 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_4] [(unsigned char)16] [i_0] [i_0] &= ((/* implicit */_Bool) (((_Bool)0) ? (((((((/* implicit */_Bool) (signed char)38)) ? (arr_18 [i_6] [i_5] [(signed char)15] [i_4] [i_1 - 2] [(signed char)15] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1])))) << (((((/* implicit */int) (short)21790)) - (21790))))) : (((((/* implicit */_Bool) max((-3840712435921437709LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)119))))))));
                                var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1572654492631789539LL)) ? (387583623U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))), (((arr_17 [i_1] [i_1] [i_6]) ? (arr_16 [i_0] [i_0] [(_Bool)1] [6LL] [6LL] [i_6]) : (arr_9 [i_0] [i_1] [13LL] [i_1] [i_0] [i_0]))))) % (((/* implicit */unsigned long long int) ((arr_17 [i_6] [i_5] [i_1]) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-1305037336)))) : (((unsigned int) arr_6 [i_4] [i_0])))))));
                                arr_20 [i_0] [i_1] [i_4 + 3] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 721186107)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */int) max((arr_2 [i_0] [9LL]), (((/* implicit */short) arr_13 [i_4]))))) : (((((/* implicit */int) min((arr_11 [i_0] [i_1] [i_4] [i_5]), (var_3)))) >> (((((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)210)) : (-721186103))) - (209)))))));
                                var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6]))) : (arr_16 [i_0] [i_0] [i_4] [i_5] [i_6 - 2] [2])))) ? (((/* implicit */int) arr_2 [i_4] [i_6])) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1] [i_0] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_0]))))))), (((long long int) ((((/* implicit */_Bool) 1305037336)) ? (((/* implicit */unsigned long long int) -721186103)) : (17724887369366899227ULL))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] = (-2147483647 - 1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_18 &= min((((/* implicit */int) (unsigned char)45)), (((((/* implicit */_Bool) min((4292965947556977192LL), (((/* implicit */long long int) var_7))))) ? (max((-721186098), (((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_4] [i_4])), ((signed char)-20)))))));
                                arr_27 [i_1] &= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_19 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0]);
                                arr_28 [i_0] [i_1] [i_4 + 2] [i_0] = ((/* implicit */_Bool) 2702117680U);
                                var_20 = ((((((/* implicit */int) arr_23 [i_0] [i_0] [i_4] [i_4] [i_7] [14ULL])) & (((((/* implicit */_Bool) -739529876169782498LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))) < (((((/* implicit */int) (unsigned char)195)) & (94206211))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((4503599627370480LL), (((/* implicit */long long int) ((unsigned int) arr_6 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((int) arr_12 [i_9] [i_1] [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -2778161202593521291LL)) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1539504392748039377LL)) ? (-1937223249) : (((/* implicit */int) (_Bool)1)))))))));
                    var_22 |= ((/* implicit */int) (short)18700);
                    var_23 &= ((/* implicit */short) -1478108414);
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_1 + 1] [i_10]);
                    var_25 = ((/* implicit */unsigned char) ((_Bool) 17724887369366899216ULL));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (_Bool)1))))))) ? (max((262112), (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_1] [(unsigned short)4])) ? (((/* implicit */int) arr_23 [i_10] [i_1] [i_1] [i_0] [i_0] [3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_10] [i_1 + 2])))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_0])))))));
                    arr_33 [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) arr_25 [i_0] [2] [i_10] [i_0] [2] [2]);
                }
                for (unsigned char i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    arr_36 [5] [i_1] [6] [i_0] = ((/* implicit */int) arr_16 [i_0] [7] [i_1] [i_1] [i_1 + 2] [0]);
                    arr_37 [i_0] [i_1 - 2] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_11] [i_11] [i_0] [i_0]);
                    arr_38 [i_0] [i_0] [12ULL] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_7 [i_0]) : (((/* implicit */long long int) 38350337))));
                }
                arr_39 [i_0] = ((/* implicit */short) arr_30 [i_0] [i_0] [i_0] [i_0]);
                var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_0])) > (((/* implicit */int) arr_3 [i_0] [(_Bool)1]))))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [i_1])) ? (4194240) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
