/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9587
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
    var_16 &= ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_15))))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))) : (var_10)))) >= (((var_1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (min((((/* implicit */unsigned int) var_13)), (arr_0 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */unsigned int) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) | ((~((+(((/* implicit */int) var_1))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) arr_3 [i_1] [i_1]);
            var_21 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((17359109592688145569ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (arr_4 [i_1] [i_1]))) : (((/* implicit */int) arr_5 [i_1] [i_1] [(_Bool)1]))))) | (17359109592688145562ULL));
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (17359109592688145551ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) var_12)) : (var_7)))) ? ((+(((((/* implicit */_Bool) arr_4 [(signed char)0] [3])) ? (((/* implicit */int) (unsigned short)47909)) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_14))))))));
            var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1087634481021406047ULL)) ? (((/* implicit */int) (unsigned char)80)) : (arr_4 [i_1] [i_2]))))));
            var_24 ^= 237298651;
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((_Bool) var_14))) / (((((/* implicit */int) (signed char)-1)) - (2108242396))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3])) ? (var_10) : (((/* implicit */int) (unsigned short)41947)))))))))));
            var_26 = ((/* implicit */unsigned short) var_10);
            arr_9 [i_1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_7 [i_1] [1ULL]), (arr_7 [i_1] [i_3])))), (((arr_7 [i_1] [(_Bool)1]) ? (((/* implicit */int) var_15)) : (2147483647)))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) (~(arr_17 [i_6] [i_5] [i_4] [(signed char)3])));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [(signed char)11] [i_4]))));
                        arr_20 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_4])) ? (((/* implicit */unsigned int) var_10)) : (var_5)));
                    }
                } 
            } 
            arr_21 [18U] [i_1] [i_1] |= ((/* implicit */signed char) ((arr_4 [i_1] [i_4]) != (var_12)));
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (_Bool)0);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (unsigned short)23588)))) : (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */_Bool) arr_5 [i_1] [i_7] [i_8])) ? (((/* implicit */int) arr_19 [(signed char)19] [i_8] [i_7] [i_7] [i_1] [i_1])) : (((/* implicit */int) var_15)))) * (var_10)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((var_3) / (((/* implicit */unsigned long long int) arr_4 [i_7] [(unsigned char)9])))))));
                            arr_33 [i_8] [i_9] [i_8] [i_7] [i_1] = min((((/* implicit */unsigned int) ((int) arr_11 [i_1] [i_8]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1]))) - ((-(var_9))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_37 [i_1] [i_7] [8] [i_9] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) : (var_11))))));
                            arr_38 [i_1] = ((/* implicit */signed char) (-(((int) ((((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) | (var_12))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_32 &= ((/* implicit */unsigned short) var_14);
                            arr_41 [i_1] [i_7] [i_8] [i_9] [i_12] = ((/* implicit */int) arr_25 [i_12]);
                            var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1087634481021406046ULL)) ? (((/* implicit */int) arr_23 [i_1] [i_7] [i_9])) : (((/* implicit */int) arr_23 [i_7] [i_8] [i_9]))));
                            var_34 *= ((/* implicit */signed char) arr_2 [(unsigned char)19] [(unsigned char)19]);
                        }
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            arr_44 [i_1] [i_1] [i_1] [i_13] = ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_36 [4U] [i_7] [i_8] [i_7] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))), (var_13)));
                            arr_45 [i_1] [i_7] [i_8] [i_13] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_28 [i_13] [i_8] [i_7] [i_1])))));
                        }
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_9] [11] [12ULL] [12ULL] [i_9])) >> (((((-2147483647) - (-2147483618))) + (59)))))) ? (((/* implicit */int) arr_11 [i_1] [i_7])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */int) ((17359109592688145549ULL) == (var_3))))));
                        var_36 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 18228646321930833932ULL)) ? (((((/* implicit */_Bool) var_8)) ? (2198260465U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (7340032) : (((/* implicit */int) (unsigned char)162))))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))), (arr_14 [i_1] [i_9]))));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_37 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_6))))))), (arr_16 [i_1] [i_1] [(signed char)16])));
                            arr_49 [i_9] [i_9] [i_8] [i_7] [i_9] &= ((/* implicit */unsigned short) var_13);
                            arr_50 [i_1] [i_1] [i_8] [i_1] [i_14] = ((((/* implicit */_Bool) arr_40 [i_1] [i_7] [i_8] [(unsigned short)11] [i_14])) ? (((/* implicit */int) min((arr_40 [i_14] [i_7] [i_9] [i_7] [i_7]), (arr_40 [i_1] [i_1] [i_1] [i_1] [(unsigned short)3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_14] [(unsigned char)14] [i_8] [i_1] [i_1])) || (((/* implicit */_Bool) arr_40 [(unsigned short)18] [i_7] [i_8] [i_7] [i_1]))))));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            arr_55 [i_1] [i_7] [i_8] [i_9] [i_15] [i_9] = ((/* implicit */signed char) var_15);
                            var_38 = ((((/* implicit */int) arr_43 [i_8] [i_15] [i_15] [i_1])) != (((/* implicit */int) arr_43 [i_1] [i_15] [i_1] [(unsigned short)7])));
                            arr_56 [i_15] [i_9] [i_15] [i_15] [i_7] [i_1] = arr_14 [i_7] [i_7];
                        }
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) var_14);
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (_Bool)0))));
                        }
                    }
                } 
            } 
        }
        arr_59 [19U] = var_9;
    }
}
