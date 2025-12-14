/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63628
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_11))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) < (((((/* implicit */int) ((unsigned short) 2147483647))) / (var_2)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((signed char) ((arr_1 [i_0]) / (arr_1 [i_0]))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_2 [i_1]) : (arr_2 [i_1]))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) (~(arr_6 [i_1 + 2])));
                            arr_17 [i_1] [i_2] [i_3] [4] [i_5] = ((/* implicit */_Bool) ((arr_6 [i_1 - 1]) & (arr_6 [i_1 + 1])));
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) var_6))));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */int) ((signed char) arr_8 [i_3]));
                            arr_21 [i_1 + 2] [i_3] = ((/* implicit */signed char) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_6])))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_1 + 1] [i_2] [i_3] [i_4] [i_7] = (+(((/* implicit */int) arr_8 [i_1 - 1])));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [6U] [i_2] [i_3] [i_4] [i_1 + 1])))))));
                            var_25 = ((/* implicit */int) var_7);
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_8] [i_4] [i_3] [i_2] [i_1])) / (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1]))));
                            arr_31 [i_1 + 1] [i_1 + 1] [i_2] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                            var_27 = ((/* implicit */short) ((var_2) % (((/* implicit */int) var_5))));
                        }
                        arr_32 [i_1 + 2] [i_2] [18ULL] [i_1 + 2] [9] = ((/* implicit */_Bool) arr_16 [i_4]);
                        var_28 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(_Bool)1] [i_1 + 1]))));
                    }
                } 
            } 
            var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((_Bool) var_16))));
            arr_33 [8U] = ((/* implicit */int) ((unsigned long long int) arr_9 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]));
        }
        for (int i_9 = 1; i_9 < 18; i_9 += 1) 
        {
            arr_37 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_9 - 1])) & ((-(((/* implicit */int) arr_7 [i_9 - 1]))))));
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_9 - 1] [i_9 - 1])) == (((/* implicit */int) ((signed char) arr_6 [i_1 + 1]))))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_16))));
            arr_38 [i_1 + 2] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((arr_23 [i_1 + 1] [i_9 + 2] [i_9 - 1] [i_9]), (arr_23 [i_1 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 2])));
        }
        arr_39 [i_1] = ((((((((/* implicit */int) var_7)) < (((/* implicit */int) arr_35 [i_1] [i_1 + 2])))) && (((/* implicit */_Bool) var_16)))) ? (max((min((((/* implicit */int) var_1)), (arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */int) arr_3 [i_1 + 2])))) : (((((/* implicit */int) arr_3 [i_1 + 1])) * (((/* implicit */int) arr_3 [i_1 + 1])))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_34 [(_Bool)1] [(_Bool)1]))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                {
                    var_33 &= ((/* implicit */unsigned char) arr_8 [i_10]);
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_51 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_10] [(signed char)4])) ? (arr_15 [i_10] [i_12] [i_12] [i_13] [i_13] [i_11]) : (var_6)));
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_14 [i_10] [(unsigned short)16] [i_11] [i_11] [i_13] [i_13]))));
                        var_35 |= ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_11] [i_13] [i_11] [i_11] [i_10]));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1)))))))));
                        arr_52 [i_10] = ((((/* implicit */long long int) arr_12 [i_10] [i_12] [i_13])) + (arr_30 [i_10] [i_10] [i_12] [i_13] [(signed char)17] [i_10]));
                    }
                    var_37 = ((/* implicit */_Bool) ((arr_30 [i_12] [i_12] [i_11] [i_10] [i_10] [i_10]) ^ (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                }
            } 
        } 
        var_38 *= ((/* implicit */signed char) arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_39 = ((/* implicit */int) (-(((((/* implicit */long long int) var_13)) / (arr_46 [i_10])))));
    }
    for (int i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        arr_56 [i_14] [(unsigned char)11] = (~(((/* implicit */int) var_8)));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_14]))) - (((long long int) var_14))));
        var_41 = ((/* implicit */unsigned short) ((arr_15 [i_14] [i_14] [i_14] [i_14] [(unsigned short)9] [i_14]) > (((/* implicit */int) var_10))));
        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_14] [i_14] [i_14] [i_14] [i_14])), (arr_16 [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_14] [i_14] [15])) || (((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_14] [7] [i_14])))))) : ((~(arr_16 [i_14])))));
        var_43 = ((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_14] [i_14]);
    }
    var_44 |= ((/* implicit */unsigned char) var_0);
    var_45 = ((/* implicit */unsigned int) min((var_45), (((var_13) & (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - ((~(var_2))))))))));
}
