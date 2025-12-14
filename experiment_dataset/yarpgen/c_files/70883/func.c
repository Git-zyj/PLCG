/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70883
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))) : ((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_6 [(unsigned char)17] [(unsigned char)17] [i_1]))))) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (max((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_5 [i_0] [i_1] [i_1]))))), ((~(((/* implicit */int) arr_2 [i_0] [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0]))))) >= (((/* implicit */int) arr_0 [i_1])))))));
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_3)))) / (((((/* implicit */_Bool) arr_10 [i_0] [(short)5] [19ULL] [(signed char)19])) ? (var_16) : (((/* implicit */long long int) var_6))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)21]))))), (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_6 [i_0] [i_0] [4LL]))))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_2])))))))));
                arr_11 [i_1] [(short)8] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [11U] [i_1] [i_2]))));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_15 [i_1] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_22 [19ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [20LL])))))) >= (((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [i_1] [2ULL]) : (arr_9 [i_0] [i_0] [i_0])))));
                            var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_4] [i_5])), (var_6)))) ? (((/* implicit */int) arr_6 [i_5] [i_1] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_0] [20ULL]))))) || (((/* implicit */_Bool) min((arr_9 [i_3] [i_4] [i_5]), (((/* implicit */unsigned long long int) ((arr_18 [i_0] [22ULL] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                var_23 -= arr_1 [(short)1];
            }
            var_24 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((min((arr_19 [i_0] [0U] [i_1] [i_1]), (arr_19 [i_0] [i_1] [i_1] [i_1]))) << (((((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (var_9))) * (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_1] [i_1] [i_1])))))) - (16427151078584663402ULL)))))) : (((/* implicit */unsigned long long int) ((min((arr_19 [i_0] [0U] [i_1] [i_1]), (arr_19 [i_0] [i_1] [i_1] [i_1]))) << (((((((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (var_9))) * (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_1] [i_1] [i_1])))))) - (16427151078584663402ULL))) - (2ULL))))));
            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [2] [i_0] [i_0] [17U])) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1])), (var_11)))) >= (((/* implicit */int) arr_6 [i_0] [i_0] [7LL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [4U])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_29 [(unsigned short)8] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_9 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_21 [i_6]))))))) ? (max((arr_8 [i_0] [i_6] [i_7] [i_6]), (((/* implicit */int) arr_5 [i_0] [i_0] [i_7])))) : (((((/* implicit */_Bool) min((arr_27 [(unsigned short)10] [(unsigned short)10] [i_6]), (((/* implicit */long long int) arr_24 [i_0] [i_6]))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_6] [i_6] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)23])))) : ((-(((/* implicit */int) arr_25 [i_6] [i_7]))))))));
                arr_30 [i_6] = arr_12 [i_0] [23] [i_0] [i_0];
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                            var_26 = ((/* implicit */int) var_9);
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_9 + 1] [i_10] [i_10] [i_10] [i_10 - 2]))))) ? (((/* implicit */int) max((arr_17 [i_9 + 2] [i_9 + 1] [i_10] [i_10] [i_10] [i_10 - 2]), (arr_17 [(short)10] [i_9 - 2] [i_9] [i_9] [i_9] [i_10 - 2])))) : (((((/* implicit */int) arr_17 [i_9 + 2] [i_9 - 1] [i_10] [i_10] [13] [i_10 - 2])) + (((/* implicit */int) arr_17 [i_0] [i_9 - 3] [i_10] [i_10] [i_10] [i_10 - 2]))))));
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_26 [i_8]), (arr_26 [i_9 - 3])))) ? (((/* implicit */int) max((arr_26 [i_0]), (arr_25 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_26 [i_9 - 2])) ? (((/* implicit */int) arr_20 [i_0] [(signed char)4] [i_8] [i_9 - 2] [i_9 - 2] [i_8])) : (((/* implicit */int) arr_25 [i_10 - 1] [i_6]))))));
                        }
                    } 
                } 
                var_29 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_19)))) * (arr_9 [i_0] [i_6] [i_8]))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_18 [i_8] [(signed char)22] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_6] [i_8] [i_8]))) : (var_19))))))));
            }
            for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                arr_43 [i_11] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6] [i_11])) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) arr_12 [i_0] [i_6] [i_11] [i_11])) : ((~(((/* implicit */int) arr_12 [i_0] [(unsigned short)3] [i_11] [i_11]))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [7LL] [i_6] [i_6] [3] [i_11] [i_11])) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)15] [i_11])))))) ? (((((/* implicit */_Bool) arr_34 [i_11] [i_6] [i_0] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_11])))) : (((/* implicit */int) arr_33 [i_0] [i_6] [i_6]))))));
            }
            arr_44 [i_0] [i_6] = ((/* implicit */int) arr_25 [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_12] [i_13]))))) != (((arr_47 [(short)3]) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(unsigned char)22] [i_12] [(unsigned short)6]))) == (arr_18 [i_0] [i_12] [i_12])))))))))));
                    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_12] [(signed char)5] [(unsigned short)9] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_13] [i_13] [i_0]))) : (arr_40 [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0])), (var_0)))) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_13] [i_12] [(signed char)20] [12])))))));
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        arr_52 [i_14] = ((/* implicit */short) (+((~(((/* implicit */int) ((arr_49 [i_14]) >= (((/* implicit */int) arr_16 [i_14] [i_14] [i_14] [i_14] [(unsigned short)1] [i_14])))))))));
        var_33 = ((/* implicit */long long int) (((-((+(arr_14 [i_14] [i_14] [i_14]))))) == (max((((/* implicit */unsigned int) arr_2 [i_14] [i_14])), (arr_18 [i_14] [i_14] [(unsigned char)16])))));
        var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14])) ? (arr_50 [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [8LL] [(signed char)0] [i_14]))))), ((+((~(arr_37 [i_14] [i_14] [i_14] [i_14] [7U] [i_14])))))));
    }
    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_42 [(signed char)22] [i_15])) == (((/* implicit */int) max((arr_42 [i_15] [i_15]), (((/* implicit */short) arr_54 [(unsigned short)14]))))))))) == (arr_37 [(unsigned short)18] [i_15] [i_15] [i_15] [(signed char)18] [i_15])));
        var_36 = ((/* implicit */unsigned char) arr_45 [23LL] [3U] [i_15]);
        arr_56 [i_15] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [14U] [i_15] [8LL] [i_15]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15] [i_15]))) * (arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned char)19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_15] [i_15] [i_15] [i_15]))) : (((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_15] [i_15] [i_15] [i_15]))))))))));
        var_37 -= ((/* implicit */unsigned int) max((max((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned char) arr_26 [i_15]))))), (arr_27 [i_15] [i_15] [i_15]))), (((/* implicit */long long int) max(((+(arr_45 [(short)13] [i_15] [i_15]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_15] [i_15] [i_15])) / (arr_19 [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) var_19)))))));
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_3)))) || (((/* implicit */_Bool) var_11))))) / (((/* implicit */int) var_0))));
    var_40 = ((/* implicit */short) var_6);
    var_41 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * ((+(var_18)))))));
}
