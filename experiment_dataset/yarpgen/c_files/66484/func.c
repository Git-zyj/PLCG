/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66484
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0])))))));
            var_16 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_1]))))));
            arr_5 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_1 [i_1]))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_9 [2LL] |= ((/* implicit */unsigned short) arr_2 [(_Bool)1] [i_2]);
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_6 [i_0] [(_Bool)0]) ? ((~(((/* implicit */int) arr_0 [(unsigned short)6] [(unsigned short)6])))) : (((/* implicit */int) (!(arr_10 [i_0] [i_3])))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_11 [i_0] [10ULL] [i_0])))));
        }
        arr_13 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_3 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(signed char)4])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_23 [i_0] = ((/* implicit */unsigned short) (-((+(arr_21 [i_5])))));
                    arr_24 [i_0] [i_0] [0] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_6 [(unsigned char)7] [i_4])))));
                }
            }
            var_21 = (-((+(((/* implicit */int) arr_16 [i_0] [i_0])))));
            var_22 = ((/* implicit */unsigned int) ((int) (-(arr_21 [i_0]))));
            var_23 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(signed char)6] [i_0] [(signed char)6] [i_4])))))));
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_24 = ((/* implicit */_Bool) (+((-(arr_27 [i_0] [i_0] [i_7])))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    {
                        arr_34 [i_0] [1LL] [i_0] [i_8] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_9])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_0] [i_0]))))) : (((long long int) arr_11 [i_0] [i_7] [i_0]))));
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_8] [i_9])))))));
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */unsigned short) (-((-(arr_8 [(_Bool)1] [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                arr_39 [i_0] [i_0] [i_10] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_0] [i_0] [i_7] [i_10]))))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_7])) ? (((/* implicit */int) arr_19 [i_0] [(signed char)5] [1] [i_11])) : (((/* implicit */int) arr_1 [i_11]))))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_10] [i_0])) : (((((/* implicit */_Bool) arr_20 [i_0] [i_7] [i_10] [i_11])) ? (((/* implicit */int) arr_38 [i_0] [i_7] [(unsigned short)3] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0]))))));
                    var_27 = ((/* implicit */signed char) arr_17 [i_7] [i_7]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        arr_45 [i_0] [i_7] [i_0] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_38 [i_7] [i_10] [(_Bool)1] [i_0]))))));
                        var_28 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_40 [i_0] [i_7] [i_0] [i_12])))));
                    }
                }
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_10]))));
            }
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((unsigned int) arr_38 [9U] [i_7] [9U] [i_0]));
                arr_48 [i_0 + 1] [10LL] [i_13] [8LL] |= (~(((((/* implicit */_Bool) arr_40 [(unsigned short)0] [7U] [i_13] [(_Bool)1])) ? (((/* implicit */int) arr_47 [8ULL] [10LL])) : (((/* implicit */int) arr_25 [i_0])))));
            }
        }
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        arr_51 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_49 [i_14]))) ? ((+((+(((/* implicit */int) arr_50 [i_14] [i_14])))))) : ((+((+(((/* implicit */int) arr_49 [2ULL]))))))));
        arr_52 [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_49 [i_14]))))))));
        var_31 -= (~(((/* implicit */int) max((((/* implicit */short) ((_Bool) 3419924204261303561ULL))), (((short) (short)3570))))));
    }
    /* vectorizable */
    for (short i_15 = 4; i_15 < 15; i_15 += 1) 
    {
        arr_57 [(_Bool)1] |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_50 [i_15] [10LL]))))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((unsigned int) ((long long int) arr_50 [i_15] [1LL]))))));
        var_33 = arr_50 [i_15] [(short)11];
    }
    /* LoopNest 3 */
    for (signed char i_16 = 2; i_16 < 19; i_16 += 1) 
    {
        for (int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-1)))))))));
                    var_35 = min((((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) arr_59 [i_17] [i_18])), (arr_64 [i_16] [9ULL] [9ULL]))))), (max((((/* implicit */long long int) arr_63 [i_17] [i_16] [i_17])), (arr_64 [i_16 + 1] [i_16] [i_16]))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_63 [i_16] [i_16] [i_16])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_62 [i_16] [i_17] [i_18]), (arr_58 [20U])))) ? (((((/* implicit */_Bool) arr_65 [i_16 + 1] [i_17] [i_18] [i_19])) ? (((/* implicit */int) arr_59 [i_16] [i_17])) : (((/* implicit */int) arr_60 [i_16 + 2] [i_16] [3LL])))) : (((/* implicit */int) ((_Bool) arr_68 [i_16] [(short)1] [i_16] [i_18] [i_19] [(short)1])))))) : (min(((~(arr_62 [i_16] [i_16] [i_16]))), (min((arr_67 [i_17] [i_17] [i_17]), (arr_58 [i_16])))))));
                        arr_69 [i_16] [i_18] [i_19] = ((/* implicit */_Bool) (-(((unsigned long long int) (~(((/* implicit */int) arr_66 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))));
                    }
                }
            } 
        } 
    } 
    var_37 *= ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_3))))));
    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((var_11) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
    var_39 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))))), ((~((~(var_7)))))));
}
