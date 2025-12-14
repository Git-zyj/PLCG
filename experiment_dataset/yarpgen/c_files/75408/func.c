/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75408
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
    var_13 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_6)))))) ^ (min((var_8), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-30966), ((short)-30963)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30966)))))) : (8521215115264LL))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [(unsigned short)3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [(unsigned short)15]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3]))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) || (((/* implicit */_Bool) max((arr_1 [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] = ((max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_1] [i_2] [i_2]))))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3] [16LL])) >= (((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1])))))))));
                        arr_13 [(_Bool)0] [i_2] [(_Bool)0] = ((/* implicit */long long int) ((max(((~(4258305574283317292LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_3] [i_0] [19LL] [i_0] [i_0]))))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2 - 1] [9] [(_Bool)1] [(short)11])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_4] [i_4 + 2] [i_4]);
        var_16 = ((/* implicit */short) min((((/* implicit */int) (short)-30991)), (-1)));
    }
    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) min(((-(min((arr_5 [i_5] [(short)13] [i_5 + 2]), (((/* implicit */long long int) arr_10 [i_5] [i_5] [(signed char)10] [(_Bool)1] [i_5 - 2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5 - 3])) && (((/* implicit */_Bool) arr_16 [i_5 + 3])))))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-((+(((/* implicit */int) max((arr_14 [i_5]), (((/* implicit */unsigned short) arr_20 [(short)15] [i_5] [(short)15]))))))))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_18 = ((/* implicit */_Bool) ((arr_21 [i_5 + 2] [i_5 - 3] [1LL]) * (((((/* implicit */int) arr_7 [i_5 + 3])) % (((/* implicit */int) arr_7 [i_5 + 4]))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(min(((+(((/* implicit */int) arr_6 [i_5 - 1] [(_Bool)1])))), (((/* implicit */int) min((arr_6 [i_7] [i_8]), (((/* implicit */short) arr_22 [i_5] [(short)11] [i_5 - 3]))))))))))));
                            arr_28 [i_5] [i_7] [i_8 + 2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_27 [i_9 + 1] [(unsigned char)4] [i_7] [2ULL] [i_5 - 2])), (arr_20 [i_5 + 2] [(_Bool)1] [7U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [12ULL] [12ULL] [(unsigned short)14])))))) : (arr_8 [i_8 + 2] [(unsigned char)10] [i_5 + 4] [i_5 + 4]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_5] [i_8 - 1] [i_8] [i_8 + 2])))))));
                            var_20 ^= ((/* implicit */long long int) arr_2 [i_5]);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_5]))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    arr_32 [i_5 - 1] [i_5 - 1] [i_7] [i_10] = ((/* implicit */unsigned int) min((arr_19 [i_5 + 4]), (((((/* implicit */_Bool) arr_19 [i_5 + 4])) ? (arr_19 [i_5 + 3]) : (arr_19 [i_5 + 1])))));
                    var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_6] [i_7] [i_10])), (arr_8 [i_10] [i_7] [i_6] [i_5 + 4])))), (((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_11 [i_10] [i_5] [(_Bool)1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7])))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) / (3575418764907332591ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_5])), (arr_29 [i_5 + 1] [13LL] [i_5 - 3] [i_5 + 3] [i_6] [i_7]))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_23 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_8 [i_5] [i_5 + 4] [i_5 + 1] [i_11])), (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_6] [i_7]))) : (arr_25 [i_5] [16ULL] [i_11]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_6] [i_7])) : (((/* implicit */int) arr_26 [i_7] [i_11] [(unsigned short)19] [(unsigned short)19] [5LL] [i_5 + 3]))))), (arr_16 [(unsigned char)17])))));
                    var_24 = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (1264608591)));
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_5 - 1] [(short)0] [(_Bool)1] [i_12] [17LL])) ? (arr_5 [i_5 - 1] [i_5 - 2] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5 - 1] [i_5 - 1] [i_12] [i_12] [i_12])))));
            var_26 = ((/* implicit */int) max((var_26), ((~((+(((/* implicit */int) arr_37 [11] [11] [i_5 + 4]))))))));
        }
    }
    for (unsigned int i_13 = 3; i_13 < 16; i_13 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(max((arr_21 [i_13] [i_13 - 1] [i_13 - 1]), (((/* implicit */int) arr_40 [i_13]))))))), (max((((/* implicit */unsigned long long int) arr_23 [i_13 - 1] [i_13] [i_13])), (arr_11 [i_13 - 1] [i_13] [i_13 + 2] [i_13 + 4])))));
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_15 [i_13 + 2])), (min((arr_10 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 4]), (arr_35 [i_13] [i_13] [i_13]))))))));
        var_29 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((arr_39 [i_13]) > (((/* implicit */unsigned int) arr_21 [i_13] [i_13 - 1] [i_13 - 1])))))))));
        var_30 ^= ((/* implicit */unsigned short) arr_21 [i_13 + 2] [i_13 + 3] [i_13]);
        arr_41 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_13 + 2] [i_13 + 2] [i_13 - 1])) ? (((/* implicit */int) arr_37 [i_13 + 4] [i_13 + 4] [i_13 - 1])) : (((/* implicit */int) arr_37 [i_13 + 2] [i_13 - 2] [i_13 + 2]))))) ? (((/* implicit */int) arr_37 [i_13 - 1] [i_13 + 3] [i_13 + 3])) : (((/* implicit */int) max((arr_37 [i_13 + 1] [i_13 - 3] [i_13 + 2]), (arr_37 [i_13 + 4] [i_13 + 2] [i_13 - 1]))))));
    }
    var_31 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) 
        {
            for (signed char i_16 = 1; i_16 < 17; i_16 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_14] [i_15] [(_Bool)1] [1ULL] [(unsigned short)3]))))) ? (((((/* implicit */_Bool) arr_5 [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14] [i_15 + 3]))) : (arr_39 [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_22 [i_15] [i_15] [i_16]), (arr_33 [i_14] [i_14] [i_15] [i_15] [i_16])))))))), ((~(max((arr_16 [i_15]), (((/* implicit */long long int) arr_24 [i_14] [i_14] [i_14] [3LL]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 2; i_17 < 17; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            {
                                var_33 ^= (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_53 [(_Bool)1] [i_17] [i_16 - 1] [i_15] [(unsigned char)10] [2ULL]), (arr_29 [i_14] [i_15 - 1] [i_16] [i_17] [i_18] [i_18])))), (((((/* implicit */_Bool) arr_51 [i_14] [i_14] [i_15 + 1] [i_14] [i_17] [i_15 + 1])) ? (arr_1 [14LL] [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_14])))))))));
                                var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_39 [i_14])))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_14] [i_15]))))), ((+(arr_25 [i_18] [i_16 - 1] [i_15]))))) : (min(((-(arr_25 [i_14] [i_14] [i_14]))), (((((/* implicit */_Bool) arr_47 [i_14] [i_15] [i_16 + 2])) ? (((/* implicit */long long int) arr_52 [i_14] [i_15 - 1] [i_16] [i_16] [i_18])) : (arr_47 [i_14] [i_15] [i_16 - 1])))))));
                                arr_55 [i_18] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((arr_19 [i_18]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_16 + 1] [i_17] [i_17 - 2]))) : (((((/* implicit */_Bool) arr_54 [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_16]))) : (arr_39 [i_14]))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_37 [i_14] [i_14] [i_14])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_7))))))))));
}
