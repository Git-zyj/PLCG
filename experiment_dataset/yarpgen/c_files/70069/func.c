/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70069
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
    var_10 = ((/* implicit */_Bool) ((unsigned char) var_6));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) (+(((((unsigned long long int) var_6)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_0 [i_0])))))))));
        var_12 = ((/* implicit */long long int) max((var_12), (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (arr_2 [i_0]))))) - ((-(arr_2 [i_0])))))));
        var_13 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_1 [i_1] [i_2 + 2]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_2] [i_1] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) ((unsigned long long int) arr_5 [i_2 + 1] [i_4 - 1]));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_4] = -486690306;
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) != (arr_2 [i_1])));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_5] [i_4] [i_1] [i_1] [i_1]))) ? (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 3])) : (((/* implicit */int) arr_1 [19] [23U]))));
                        }
                        for (short i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            var_17 ^= ((/* implicit */_Bool) ((unsigned int) arr_11 [i_1] [i_1] [i_1]));
                            var_18 = (~(((/* implicit */int) ((signed char) var_4))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) | (((/* implicit */int) arr_12 [i_1]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned long long int) 486690299);
                            arr_25 [i_1] = ((/* implicit */unsigned int) ((int) (+(var_5))));
                        }
                        var_20 -= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) arr_19 [14U] [i_2 - 1] [i_3] [i_3] [i_4])) ^ (arr_13 [i_1] [i_1] [i_1] [i_3])))));
                    }
                } 
            } 
            arr_26 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_1] [i_2]))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(var_5))))));
            var_22 &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_2]))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_1])) || (((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        }
        var_23 = ((/* implicit */long long int) arr_9 [i_1] [i_1]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */int) var_1);
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_14 [i_8] [i_8 + 2] [i_8 + 1] [(short)6] [(short)6]))));
        var_25 = ((/* implicit */unsigned short) ((int) 14112760110612736089ULL));
    }
    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 2) 
    {
        arr_35 [i_9] = ((/* implicit */_Bool) min((((int) arr_7 [i_9 - 1] [i_9])), (((/* implicit */int) ((_Bool) arr_21 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 - 1] [i_9])))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 2; i_10 < 14; i_10 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_3 [i_9 + 3]))))), ((~(1204998166U)))));
            var_27 = ((/* implicit */long long int) arr_12 [i_9]);
        }
        for (int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((unsigned int) arr_12 [i_9]));
            var_29 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_9 + 3]))));
            arr_43 [i_9] &= ((/* implicit */signed char) ((((((/* implicit */long long int) ((arr_19 [i_9 + 3] [i_11] [(_Bool)1] [i_11] [(unsigned char)19]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) % (min((((/* implicit */long long int) arr_12 [i_9])), (-9223372036854775795LL))))) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_9 - 2] [i_9])))));
            var_30 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */short) arr_33 [i_9 - 1] [i_9 - 1])), (arr_32 [i_9 + 2] [i_11])))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) (short)22824))))));
        }
        for (int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 2) 
            {
                arr_49 [i_9] [i_12] [i_9] [i_12] |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 603303030)) && (((/* implicit */_Bool) (unsigned short)55470)))));
                var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_13] [i_13 + 3]))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_32 = ((/* implicit */int) var_1);
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_51 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_24 [i_14 - 1] [i_9 - 2] [i_14 - 1] [i_9 - 2] [i_9 - 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) != (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_14] [i_12] [i_14] [i_12] [i_12]))) ^ (var_7)))))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_46 [i_9] [i_12] [i_14])))))))));
                var_34 = ((/* implicit */short) arr_33 [i_9 - 1] [i_12]);
            }
            for (signed char i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((arr_13 [i_9] [i_9] [i_15 + 2] [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12]))))))));
                var_36 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((arr_29 [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_9]))))))))) % (min((arr_52 [i_9] [i_12] [(unsigned short)12]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            }
            for (long long int i_16 = 2; i_16 < 12; i_16 += 2) 
            {
                arr_58 [i_9] [i_9] [i_12] [i_9] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (_Bool)1)), ((~(arr_54 [i_9] [i_9] [i_9]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_9])) >= (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_8))))))))));
                var_37 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (((arr_21 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]) ^ (((/* implicit */unsigned long long int) arr_6 [i_9 + 1] [i_9] [i_9 + 1]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_12] [i_12] [i_16]))) / (arr_51 [i_9 - 1] [i_12] [i_12] [i_16])))));
                arr_59 [i_9] [i_9] [i_16] [i_16] |= ((/* implicit */signed char) arr_40 [i_16]);
                arr_60 [i_9] [i_12] [i_16] = ((/* implicit */_Bool) min((arr_52 [i_9] [i_16] [i_16]), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_9 + 2])), (arr_44 [i_16])))) ? (((/* implicit */unsigned long long int) ((arr_37 [i_9] [i_12]) - (((/* implicit */int) arr_36 [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_39 [i_16] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_9])))))))));
            }
            var_38 = ((/* implicit */short) arr_50 [i_9 + 1] [i_9 + 3]);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) var_4);
                        var_40 += ((/* implicit */long long int) (-((-(((/* implicit */int) min((arr_8 [i_9] [i_9] [i_9]), (((/* implicit */short) var_3)))))))));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */short) ((arr_5 [i_9 + 3] [i_9 + 1]) >= (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_9 + 3] [i_9 + 1]) : (arr_5 [i_9 + 3] [i_9 + 1])))));
        var_42 *= ((/* implicit */unsigned int) min((arr_3 [i_9 - 2]), (((/* implicit */short) ((signed char) var_3)))));
    }
    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) 
    {
        var_43 = ((/* implicit */unsigned short) ((short) (+(((long long int) var_9)))));
        var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_19] [i_19])) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_16 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_16 [i_19] [23U] [23U] [i_19] [i_19])))));
    }
    var_45 ^= ((/* implicit */_Bool) max((((/* implicit */int) min((max((var_3), (((/* implicit */unsigned char) var_1)))), (var_3)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_0))))))));
}
