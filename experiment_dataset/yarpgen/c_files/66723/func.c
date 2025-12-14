/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66723
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])) == (((/* implicit */int) var_10)))) ? (((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)193)))) ? (arr_2 [i_0 + 2]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_1] [i_0 - 1] [i_0 - 1]))))))) : (max((((long long int) -377175143109606518LL)), (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) ((2129176575107183644LL) == (-2129176575107183644LL)));
                            var_15 |= ((((long long int) (unsigned char)178)) >= (((/* implicit */long long int) ((/* implicit */int) var_1))));
                            arr_13 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 791765993448120563LL)) ? (-2129176575107183644LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_3] [i_1]))))))));
                            arr_14 [i_0] [(short)5] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]);
                            arr_20 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_3 - 4]))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 4] [(_Bool)1] [i_3 + 1])))))));
                        }
                        arr_21 [i_0] [i_1] &= (+(var_11));
                        arr_22 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_4 [i_1] [i_0]))) + (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2] [i_0 + 2]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_26 [i_6] [i_2] [12U] [i_1] [i_0] |= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((unsigned char) arr_4 [i_0 + 1] [i_2])), (((/* implicit */unsigned char) (signed char)-26)))))));
                        var_17 = ((/* implicit */unsigned char) var_6);
                        arr_27 [i_2] &= ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6]);
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_30 [i_7] = ((/* implicit */long long int) (-(1697664793)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)208)))) + (((/* implicit */int) (unsigned short)47224))));
                            arr_33 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)5603)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_9 = 1; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] [i_2] [i_7] [i_7] [i_9] [i_9 - 1] = ((/* implicit */unsigned char) var_9);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_1] [i_9])))))));
                            arr_38 [(unsigned char)10] [i_7] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) var_11);
                            arr_39 [i_0] [i_1] [(short)13] [i_1] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) (_Bool)1)) : (max(((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_7] [i_9])))), ((-(((/* implicit */int) arr_15 [i_7] [i_2])))))));
                        }
                        for (short i_10 = 1; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            arr_43 [i_0 + 2] [i_1] [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_0)), (var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_34 [i_0] [i_1] [i_0])));
                            var_20 = ((/* implicit */signed char) (_Bool)1);
                            arr_44 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */long long int) (+((-((+(((/* implicit */int) arr_11 [i_10 + 1] [i_7] [i_0 + 4] [i_1] [(_Bool)1] [i_0 + 4] [i_0]))))))));
                        }
                    }
                    arr_45 [i_2] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_0])) ? (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 2] [i_0 + 4] [i_0 - 2] [i_0 - 1])) - (((((/* implicit */_Bool) arr_11 [(_Bool)1] [(unsigned char)14] [i_0] [i_1] [i_0] [i_0] [(unsigned char)14])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0])))))) : (((/* implicit */int) ((unsigned short) 2064043571U)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-118))))), ((~((~(var_11)))))));
}
