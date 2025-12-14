/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69459
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_1] [i_0 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = max(((signed char)32), (((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [7LL]))))) < (((/* implicit */int) ((signed char) arr_8 [i_0 - 1] [i_0 - 1] [(unsigned short)14] [(unsigned short)14] [i_0] [i_0])))))));
                        var_15 = ((/* implicit */short) (-(((((/* implicit */int) max((arr_7 [i_3]), (arr_3 [i_0 - 1] [i_1] [i_2])))) * (((/* implicit */int) var_7))))));
                    }
                    var_16 = arr_4 [(signed char)5] [i_2];
                }
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) var_8);
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) max(((signed char)-45), (arr_9 [i_0])))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_5] [i_0] [i_0])), (var_12)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned short)10] [i_0] [i_0 - 1] [i_0])))), (((/* implicit */int) ((_Bool) var_3))))))));
                    }
                    arr_14 [i_4] = ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [3U]);
                }
                var_20 *= ((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_0])), (((unsigned char) (~(var_2))))));
                var_21 = ((/* implicit */signed char) ((short) arr_2 [(_Bool)1] [i_1 - 1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                    var_23 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) * (var_6)))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */unsigned int) arr_23 [(short)0] [i_7] [i_6] [i_6])) : (var_2))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    arr_26 [i_6] [i_6] [i_6] [(unsigned short)15] = ((/* implicit */int) ((unsigned char) (((!(((/* implicit */_Bool) arr_17 [i_9])))) ? (((/* implicit */int) ((short) var_9))) : (arr_24 [i_6] [i_6]))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) arr_18 [i_10]))) ? (((/* implicit */int) arr_28 [i_10] [i_9] [i_7] [i_6])) : (((/* implicit */int) var_9)))) & (((/* implicit */int) (short)-4654))));
                        arr_29 [i_6] [i_7] [i_9] [i_9] = ((/* implicit */signed char) var_6);
                    }
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            arr_36 [i_12] [i_7] [i_11] = ((/* implicit */signed char) ((unsigned short) ((min((var_2), (((/* implicit */unsigned int) (short)23468)))) << (((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))))) - (3339784038U))))));
                            var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_33 [i_6] [i_6] [i_6])))) <= (((/* implicit */int) max((arr_33 [i_7] [i_11] [i_12]), (arr_33 [i_11] [i_6] [i_6]))))));
                            arr_37 [i_12] [i_12] [i_6] [i_7] [i_7] [i_12] [i_6] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) ((int) arr_21 [i_6] [i_11]))));
                        }
                        var_27 *= ((/* implicit */unsigned char) ((((((unsigned int) var_1)) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6]))))))) <= (min((max((((/* implicit */unsigned int) arr_28 [i_7] [i_9] [i_7] [i_6])), (var_2))), (((/* implicit */unsigned int) arr_28 [3] [(unsigned char)6] [i_9] [i_11]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7] [i_13])))) && (((/* implicit */_Bool) var_7)))))));
                            arr_40 [i_6] [i_6] [i_6] [i_6] [(signed char)16] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : ((-9223372036854775807LL - 1LL))))));
                            var_29 = ((/* implicit */unsigned char) var_3);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [3U]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_13]))) : (((long long int) var_0))));
                        }
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_9] [i_6] [i_7] [i_7] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_9] [i_6] [(short)10]))) < (var_2)))) : ((~(((/* implicit */int) arr_35 [i_9] [i_7] [(_Bool)1] [i_6] [i_6]))))));
                    var_32 = ((/* implicit */unsigned int) ((short) ((unsigned int) (~(((/* implicit */int) var_9))))));
                }
                for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */int) ((((/* implicit */int) arr_38 [i_14] [i_14] [i_7] [i_6] [i_6])) < (((/* implicit */int) var_7))))) >= (((((/* implicit */_Bool) arr_35 [i_6] [i_14] [i_14] [(_Bool)1] [i_14])) ? (((/* implicit */int) arr_38 [i_6] [i_6] [i_6] [i_7] [i_7])) : (((/* implicit */int) arr_38 [(signed char)8] [i_7] [i_7] [i_6] [i_6]))))))));
                    var_34 = max((((/* implicit */short) var_7)), (max((((short) arr_22 [i_6])), (((/* implicit */short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_28 [i_6] [i_6] [i_7] [i_14]))))))));
                    var_35 = ((/* implicit */unsigned short) ((short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6] [i_6] [i_6]))) : (var_6)))));
                }
                arr_43 [i_6] [i_6] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_39 [i_6] [(signed char)9] [i_6] [(unsigned char)4] [i_7] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7])))))));
                var_36 |= ((unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_6] [i_6] [i_6] [i_7] [i_7])) - (((/* implicit */int) (signed char)36)))))));
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) : (var_12))));
    var_38 = ((/* implicit */unsigned short) var_12);
}
