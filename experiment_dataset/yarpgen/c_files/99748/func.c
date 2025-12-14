/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99748
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(5757048599117039220ULL)))) ? (var_2) : (((unsigned long long int) arr_1 [i_0 + 4] [i_0 + 2]))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(12689695474592512396ULL)))))))) ^ (((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_0])), (-460116950)))) | (min((5757048599117039229ULL), (((/* implicit */unsigned long long int) (unsigned short)45135))))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])) ? (3460903529U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -499780155)) ? (-1212600946) : (((/* implicit */int) arr_10 [i_1] [i_2])))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)45135)), (min((var_9), (((/* implicit */unsigned long long int) var_16)))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20401)) >> (((((((/* implicit */_Bool) 5757048599117039229ULL)) ? (17229047068112849452ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1 + 2])))) - (17229047068112849439ULL)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1551118393), (((/* implicit */int) ((((/* implicit */_Bool) 5757048599117039234ULL)) && (var_4))))))) ? (max((((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned long long int) 460116949)))), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_3] [i_1 + 2] [i_1 + 2]), (arr_6 [i_2] [i_2] [i_2])))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_14 [i_2] [i_3] = ((/* implicit */unsigned short) 5757048599117039219ULL);
                        arr_15 [i_1] [19U] [i_3] [i_4] = ((/* implicit */unsigned char) min((min((arr_12 [i_2] [i_3] [i_4]), (arr_12 [i_4] [i_4] [i_4]))), (min((arr_12 [i_1 - 2] [i_1 + 1] [i_1 + 1]), (arr_12 [i_1 + 1] [i_2] [i_4])))));
                        arr_16 [i_3] = ((((/* implicit */_Bool) (unsigned char)76)) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)20401))));
                        var_22 *= ((/* implicit */signed char) min((min((var_17), (arr_5 [i_1 + 1] [i_1] [i_1 - 2]))), (((/* implicit */long long int) ((3460903529U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45135))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_3] [1ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 7859382740984145555LL)) ? (arr_13 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))) * (((arr_13 [i_1 + 1] [i_1 - 2]) - (arr_13 [i_1 - 2] [i_1 + 2])))));
                        /* LoopSeq 3 */
                        for (int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_1] [i_6] [i_1 + 2] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                            arr_24 [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (~(var_18)))))));
                        }
                        for (int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_28 [i_1] [i_1 + 2] = ((/* implicit */unsigned char) (((~(arr_27 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_7]))) > (((long long int) arr_21 [i_5] [i_7 + 1] [i_7] [i_7 + 1]))));
                            var_23 += (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)52))))));
                            var_24 = ((/* implicit */unsigned long long int) min((((arr_27 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_16))))), (max((arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 1]), (((/* implicit */long long int) (_Bool)1))))));
                        }
                        for (int i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((_Bool) arr_19 [i_1 + 1] [i_8 + 1] [i_3] [i_8 + 1])) || (((/* implicit */_Bool) max(((unsigned char)183), (((/* implicit */unsigned char) arr_19 [i_1 + 2] [i_8 - 1] [i_3] [i_3])))))));
                            var_26 = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_3])), (var_10)));
                            var_27 = ((/* implicit */int) ((unsigned long long int) (~(17203058770060519765ULL))));
                        }
                        var_28 = ((/* implicit */unsigned short) (unsigned char)255);
                        arr_32 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) 15561980776480689594ULL))), (var_8)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~((((~(arr_27 [i_1] [i_1] [(unsigned char)9] [19ULL] [i_1 - 1]))) + (((/* implicit */long long int) var_6)))))))));
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    var_31 = (~(arr_35 [(unsigned char)16] [i_1 + 2] [i_10 + 3] [i_2]));
                    arr_39 [i_1 + 1] [i_2] [i_10 + 1] = ((/* implicit */unsigned char) arr_22 [i_1] [i_2] [6ULL] [i_1 - 1] [i_2]);
                    var_32 = ((/* implicit */_Bool) min((var_32), (arr_10 [i_1 + 2] [i_1 - 1])));
                    var_33 = ((/* implicit */unsigned long long int) (+(arr_21 [(_Bool)0] [i_10 + 1] [i_10] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (signed char i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_30 [i_2] [15LL] [15LL] [i_12 - 1] [i_12] [i_12])));
                                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3468465084625534939LL)) ? (((/* implicit */long long int) -2147483644)) : (var_17)));
                            }
                        } 
                    } 
                }
                var_36 ^= ((/* implicit */unsigned char) arr_31 [16] [i_2] [16]);
            }
        } 
    } 
}
