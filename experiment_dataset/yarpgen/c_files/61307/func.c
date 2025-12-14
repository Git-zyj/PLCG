/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61307
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
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (722112379))))), (((/* implicit */int) min((var_0), (((/* implicit */short) ((signed char) 10916251601480570422ULL))))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) ((short) 14488743042033000545ULL));
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 4]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            var_17 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                            var_18 = ((/* implicit */short) var_3);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned char) var_0);
                            arr_18 [i_5] = ((/* implicit */signed char) (~(arr_10 [i_0] [14] [i_2] [14] [i_5])));
                        }
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                        var_21 = ((/* implicit */signed char) ((int) var_12));
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (short)20704)), ((unsigned short)42538))));
                        arr_21 [i_6] = ((/* implicit */short) (~(min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (arr_19 [(signed char)10] [i_1] [i_1] [9U] [(signed char)10] [i_6])))), (var_11)))));
                        arr_22 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */int) max((min((((/* implicit */short) max((var_12), (var_8)))), (var_0))), (((short) (!(((/* implicit */_Bool) arr_10 [i_6] [i_2] [14] [i_1] [i_0])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) (~(3985487735U)));
                        var_23 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_19 [i_0] [i_1] [0] [i_7] [i_2] [i_7])))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) (~(17896456474746875316ULL)));
                        arr_30 [6ULL] [9LL] = ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned char) var_6)))));
                    }
                    arr_31 [16U] [i_1] [i_1] = ((/* implicit */long long int) (signed char)92);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (int i_10 = 4; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) ? (min((arr_29 [i_0 - 3] [i_1] [(unsigned char)7] [i_0 - 2] [i_10 - 2] [i_1]), (((/* implicit */unsigned int) (signed char)-101)))) : ((+(arr_11 [i_0 + 1] [i_0 + 1] [(signed char)9])))));
                                arr_38 [i_1] [i_1] [i_2] [i_9] [i_10 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((long long int) (unsigned char)7))))) ? (((long long int) ((652141426) % (((/* implicit */int) (short)17394))))) : (arr_14 [i_0 + 1] [i_1] [i_2] [(signed char)14] [i_1] [i_0 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
            var_28 = max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (short)1606)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), ((-(((long long int) var_4)))));
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 17; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 6014481560631926094ULL)))))), ((-(((/* implicit */int) var_12))))));
                            arr_50 [i_0] [i_11] [i_0 + 1] = ((((/* implicit */int) min((arr_34 [i_11 + 1] [i_11] [i_12] [i_0 - 4] [i_12 - 1]), (arr_34 [i_11 + 1] [i_11] [i_11 + 1] [i_0 - 4] [i_12 + 1])))) + ((+(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((arr_48 [i_0] [i_0] [i_0] [i_0 - 4]) ? (((/* implicit */int) var_7)) : (var_11)))))) || (((/* implicit */_Bool) min((var_5), (arr_34 [i_0] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0 + 1]))))));
        var_31 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
    for (int i_15 = 4; i_15 < 17; i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_15 - 1] [i_15 - 3] [i_15 - 3])), (min((((/* implicit */long long int) var_7)), (arr_14 [i_15] [0] [i_15] [i_15 - 2] [0] [i_15])))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_3))))));
        arr_55 [i_15] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
    }
    for (int i_16 = 4; i_16 < 17; i_16 += 1) /* same iter space */
    {
        var_32 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) min((arr_42 [i_16 - 4] [i_16 + 1]), (((/* implicit */unsigned long long int) var_7)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) 
        {
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) var_4);
                    arr_65 [i_18] [i_17 + 2] [5] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_19 [i_16] [i_16] [i_18 - 1] [i_16] [(unsigned char)16] [i_17])), (var_12)))) ? (min((var_9), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) arr_15 [0] [(unsigned char)8] [i_16 - 1] [i_16] [i_16] [(unsigned char)8] [i_16]);
    }
}
