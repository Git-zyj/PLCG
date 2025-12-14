/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57199
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
    var_17 += var_5;
    var_18 = var_10;
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((~(1874651389U))), (((/* implicit */unsigned int) max((arr_0 [i_0 - 1]), ((_Bool)1)))))))));
        var_20 = ((/* implicit */unsigned int) var_6);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_11);
        var_21 += ((/* implicit */long long int) (~(((/* implicit */int) min((arr_1 [0ULL]), (arr_1 [(_Bool)1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) var_4);
        var_23 &= ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_24 += ((/* implicit */unsigned int) var_10);
        var_25 = ((/* implicit */_Bool) var_16);
        arr_6 [12ULL] = ((/* implicit */unsigned int) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_3]))));
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_18 [i_2] [i_4] [i_3] [i_3] [i_2]);
                        var_28 += ((/* implicit */unsigned long long int) var_6);
                        arr_19 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_5 [i_5 + 2] [i_2]) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_13 [i_5] [i_3] [i_2])))) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_2]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_29 &= ((/* implicit */_Bool) arr_7 [i_6] [i_2]);
                        var_30 = arr_16 [i_6] [i_6] [i_4] [i_2] [i_2];
                        arr_23 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_3] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_4] [i_3] [i_2])))));
                        arr_24 [20ULL] [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_4])) ? (arr_7 [i_4] [i_2]) : (var_16)));
                    }
                    var_31 = ((/* implicit */unsigned short) ((4278025756U) <= (16941552U)));
                    arr_25 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_10 [i_3]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_7 = 4; i_7 < 21; i_7 += 2) 
        {
            var_32 = arr_7 [i_7] [i_2];
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_33 = ((/* implicit */unsigned short) var_1);
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [i_2] [i_2]) ? (arr_22 [i_8] [i_7 + 2] [i_7] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_7] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_8] [i_2])))))));
            }
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) var_2);
                            var_36 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_10] [i_7] [(unsigned short)0] [i_7] [i_10 - 1]))));
                            arr_41 [i_11] [i_10] [i_10] [i_9] [i_10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(_Bool)1] [i_7 - 4] [i_7 - 4] [i_2]))) <= (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_11] [i_9] [i_2])) ^ (((/* implicit */int) var_15))))) > (var_10)));
                            arr_42 [18U] [i_10] [i_10] [i_7] = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
                var_38 += ((/* implicit */_Bool) (+(1274211859U)));
                var_39 |= ((/* implicit */unsigned long long int) arr_26 [i_9] [i_2]);
            }
            for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 1) 
            {
                var_40 *= ((/* implicit */unsigned long long int) arr_38 [i_12 + 2] [i_7] [i_7 - 3] [i_7] [i_2]);
                var_41 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(unsigned short)23] [i_12 + 2] [i_12 - 1] [i_12 - 1]))));
                var_42 = ((/* implicit */unsigned short) arr_20 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_7 + 2] [i_7]);
            }
            arr_45 [i_7 + 3] = var_5;
            arr_46 [i_7 - 1] = ((/* implicit */_Bool) (~(((arr_5 [18] [i_2]) ? (((/* implicit */int) arr_30 [i_7] [i_2] [i_2])) : (((/* implicit */int) var_8))))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_4 [i_13]))));
                var_44 += arr_21 [i_13] [i_13] [i_13] [i_2];
            }
            for (int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                var_45 = ((/* implicit */unsigned short) arr_33 [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (signed char i_17 = 4; i_17 < 21; i_17 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) arr_20 [i_17 + 2] [i_17 + 1] [(_Bool)1] [i_17] [i_17 + 2] [i_17 + 2]))));
                            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_17] [i_2] [i_13] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)6] [i_16] [i_15] [(unsigned short)6]))))))));
                            var_48 = ((/* implicit */unsigned long long int) var_11);
                            arr_58 [i_13] [i_16] [i_15] [i_2] [i_13] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                arr_59 [i_13] [i_13 - 1] [i_13] = ((/* implicit */unsigned int) var_5);
            }
            var_49 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_13] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_13 - 1] [i_13] [i_2]))) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_54 [i_2] [i_13] [i_2])));
        }
        for (int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) arr_48 [i_18] [i_2] [i_2]))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_51 += ((/* implicit */unsigned int) var_3);
                var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) == (arr_51 [i_19] [i_18] [(unsigned short)21])));
                var_53 = ((/* implicit */_Bool) (-(arr_57 [i_19] [i_18] [i_18] [i_18] [i_18] [i_2])));
            }
        }
    }
}
