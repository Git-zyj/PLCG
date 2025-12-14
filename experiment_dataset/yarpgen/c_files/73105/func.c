/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73105
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) arr_3 [i_0]);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : ((+(arr_3 [9])))));
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [0U]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 += ((/* implicit */_Bool) arr_2 [i_0]);
                var_18 = ((/* implicit */int) max((var_18), ((+(48052913)))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_19 ^= ((/* implicit */int) (-(4294967295U)));
                    var_20 = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
                    var_21 = ((/* implicit */short) arr_2 [i_2]);
                    arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] &= ((/* implicit */_Bool) (((+(arr_3 [i_3]))) & (((/* implicit */long long int) arr_10 [i_0] [i_3]))));
                }
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_10 [i_0] [i_2]) : (arr_10 [i_1] [i_0])));
            }
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_23 &= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) arr_11 [i_5] [i_5] [i_4] [i_1] [i_1] [i_0]);
                    var_25 = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_1])));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_5])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_4])) - (((/* implicit */int) arr_5 [12LL] [i_4] [i_6]))));
                        var_28 = ((/* implicit */unsigned short) (+(arr_14 [i_1] [i_4])));
                    }
                    arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_5] [i_4] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_4] [i_5]))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(unsigned short)5] [i_1] [i_1] [i_4] [i_1] [i_7])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_4] [i_0])))))));
                    var_30 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (short)30))))) % (arr_9 [i_0])));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(arr_10 [i_0] [i_4]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((arr_9 [i_4]) | ((-(arr_0 [i_4] [i_8]))))))));
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_9] [i_4] [i_9] [i_0] = ((/* implicit */unsigned char) ((3753125090990759256LL) < (((/* implicit */long long int) ((/* implicit */int) (short)15)))));
                        var_34 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6109729342498572439LL)) ? (232773074) : (((/* implicit */int) (signed char)-5)))))));
                        var_35 ^= ((/* implicit */int) arr_1 [i_0]);
                        var_36 = ((/* implicit */unsigned short) arr_29 [i_0] [i_9] [(unsigned char)14] [i_0] [i_0] [(unsigned char)14] [i_0]);
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_37 = arr_0 [1] [i_7];
                        var_38 += ((/* implicit */short) arr_7 [i_0] [i_1] [i_4] [i_10]);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_1] [i_4])) || (((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_0] [i_4] [i_1] [i_0])))))) & (arr_9 [i_0]))))));
                        var_40 += ((/* implicit */unsigned short) arr_4 [i_4]);
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_41 -= ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_4] [i_1] [i_1] [i_0] [(signed char)3]))) : ((~(arr_25 [i_4]))));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((arr_8 [i_0] [i_0]) / (arr_8 [i_0] [i_1]))))));
                    var_43 ^= (!(((/* implicit */_Bool) arr_3 [i_1])));
                    arr_38 [i_11] [i_1] [i_4] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [11ULL] [i_11])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_11])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_11]))));
                }
            }
        }
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)15))));
            var_45 = ((/* implicit */unsigned long long int) ((arr_10 [i_12] [i_0]) + (((/* implicit */int) arr_12 [14LL] [i_12]))));
            arr_41 [i_12] = ((/* implicit */short) arr_10 [i_0] [i_12]);
            var_46 = ((/* implicit */int) min((var_46), ((~(((/* implicit */int) arr_11 [i_0] [i_12] [1] [i_12] [1] [i_0]))))));
        }
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_47 = (+(arr_20 [i_0]));
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_13])) ? (((/* implicit */int) arr_39 [i_14] [i_13] [i_14])) : (((/* implicit */int) arr_5 [i_0] [i_13] [i_14]))));
            }
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                var_49 |= ((/* implicit */long long int) arr_47 [i_0] [i_0]);
                var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_31 [i_0] [i_13] [i_13] [i_13] [1U])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_15] [i_13] [(short)4]))) : (arr_16 [i_0] [i_13] [i_15] [i_15] [(signed char)14])))) : (arr_42 [i_0])));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_51 ^= ((/* implicit */unsigned long long int) arr_9 [i_16]);
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_16] [i_13])) ? ((+(arr_4 [(signed char)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_16] [i_13] [i_16])))));
            }
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_53 -= ((/* implicit */unsigned long long int) arr_10 [i_17] [(unsigned short)12]);
                var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) (-(((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_17])))))));
            }
        }
        /* LoopSeq 4 */
        for (int i_18 = 0; i_18 < 15; i_18 += 2) 
        {
            arr_59 [(unsigned short)11] [(unsigned short)11] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_18] [i_0] [i_0] [i_0]))) : (arr_51 [i_0] [i_0])))));
            var_55 = arr_26 [i_18] [i_18] [i_18] [i_18] [i_18];
            var_56 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0]) * (((/* implicit */int) arr_55 [i_18] [i_0]))));
            var_57 = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_18] [i_0] [i_0] [i_18] [i_0] [i_0] [(_Bool)1])) + (((/* implicit */int) arr_29 [i_0] [i_0] [i_18] [i_0] [i_18] [14LL] [i_0]))));
        }
        for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            var_58 = (-(arr_42 [i_0]));
            var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) arr_12 [i_0] [i_19]))));
            var_60 = ((/* implicit */short) (-(((/* implicit */int) arr_37 [i_19] [i_19] [i_0] [i_0] [i_0]))));
        }
        for (long long int i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            var_61 |= arr_52 [i_0] [i_0] [i_0] [i_0];
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 15; i_21 += 3) /* same iter space */
            {
                var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_21] [i_20] [(short)14] [i_0])) ? (((/* implicit */int) arr_56 [i_0])) : (((/* implicit */int) arr_62 [i_0] [i_20])))))));
                arr_68 [i_21] [i_0] [i_0] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_21] [i_21] [i_21])) || (((/* implicit */_Bool) arr_8 [i_20] [i_21]))));
                var_63 = arr_25 [i_0];
                var_64 = ((/* implicit */_Bool) (-(arr_42 [i_20])));
            }
            for (signed char i_22 = 0; i_22 < 15; i_22 += 3) /* same iter space */
            {
                var_65 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [11])) ? (arr_14 [i_0] [i_20]) : (arr_14 [i_0] [i_20])));
                var_66 = ((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_20] [i_22]);
            }
        }
        for (int i_23 = 0; i_23 < 15; i_23 += 1) 
        {
            var_67 = ((/* implicit */long long int) min((var_67), (((/* implicit */long long int) ((988283434829775516ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18))))))));
            var_68 = ((/* implicit */unsigned short) (+(arr_9 [i_0])));
            var_69 |= arr_69 [i_0] [i_0] [6U];
        }
    }
    var_70 = ((/* implicit */short) ((max((min((((/* implicit */unsigned long long int) var_1)), (17458460638879776091ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28174)) && (((/* implicit */_Bool) (short)21))))))) << (((17458460638879776100ULL) - (17458460638879776059ULL)))));
    var_71 = ((/* implicit */int) min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_6)))) || (((/* implicit */_Bool) (~(var_2)))))))));
    var_72 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_6)));
}
