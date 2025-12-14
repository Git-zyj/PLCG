/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8404
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_1))))) ? (((unsigned long long int) ((unsigned char) var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 16312735798823291517ULL)) ? (var_11) : (var_11))))) < ((+(min((var_15), (((/* implicit */unsigned long long int) var_1))))))));
    var_18 &= ((/* implicit */long long int) (~((-(((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_2]))));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_11 [i_0] [0] [i_0] [i_3] = ((/* implicit */signed char) ((arr_4 [i_0] [i_0]) ^ (arr_4 [i_0] [i_0])));
                var_20 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_3 + 1]))));
                var_21 = ((/* implicit */unsigned char) ((arr_6 [i_3 + 1]) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) arr_6 [i_3]))))));
            }
            for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? ((+(arr_14 [4ULL] [i_0] [i_1] [i_4] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_4])) >= (((/* implicit */int) arr_3 [i_4]))))))));
                    arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4 + 1] [i_4] [i_0]))) % (var_7)));
                }
                var_24 = ((/* implicit */unsigned short) arr_6 [i_4]);
                var_25 = ((/* implicit */unsigned int) (signed char)79);
            }
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                arr_23 [(unsigned short)10] [i_1] [(unsigned short)10] &= ((/* implicit */unsigned char) (!(arr_2 [i_0 + 2] [i_0 + 1])));
                /* LoopSeq 4 */
                for (long long int i_7 = 3; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((unsigned long long int) (+(((/* implicit */int) (unsigned char)240)))))));
                    var_27 = ((/* implicit */unsigned short) (unsigned char)1);
                    var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_8))))));
                }
                for (long long int i_8 = 3; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_8 + 2] = ((/* implicit */int) arr_3 [i_0 + 3]);
                    var_29 = ((/* implicit */unsigned long long int) var_10);
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) var_1);
                    arr_32 [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [(unsigned short)14] [i_0]);
                    var_31 = (_Bool)1;
                    var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_6 + 1] [i_6] [i_6] [i_6 - 1]))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_33 = ((/* implicit */signed char) (!(((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 4; i_11 < 22; i_11 += 4) 
                    {
                        var_34 = ((((/* implicit */_Bool) 16355424305070139482ULL)) ? (((/* implicit */int) arr_37 [i_6 + 1] [i_6] [i_6] [i_10] [i_0 - 2] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_37 [i_6 + 1] [i_1] [i_6] [i_11] [i_0 - 2] [i_11 - 3] [i_6])));
                        var_35 = ((unsigned char) arr_29 [i_0]);
                        var_36 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_0] [i_1] [i_6] [i_10] [i_11] [i_11 - 3])) % (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) arr_36 [i_11] [i_10] [(unsigned char)18] [i_1] [i_11])))))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [(short)21] [i_11])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_11])))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((16355424305070139499ULL) >> (((((/* implicit */int) (signed char)69)) - (46))))))));
                        var_39 = ((/* implicit */long long int) arr_20 [i_0] [i_10] [i_0]);
                        var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_6)))) ? ((-(((/* implicit */int) (signed char)-69)))) : (((/* implicit */int) arr_26 [i_6 - 1] [(unsigned char)22] [i_6] [i_6] [i_6]))));
                        var_41 = 2091319768639412134ULL;
                        var_42 = ((/* implicit */int) (((~(var_15))) > (((unsigned long long int) arr_24 [i_0] [(unsigned short)7] [i_6] [i_6]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_43 = ((/* implicit */signed char) ((arr_25 [i_0] [i_0] [i_6 - 1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0 + 3] [17ULL] [i_0 - 1] [i_6 - 1] [i_6 + 1] [i_13] [i_13])))));
                        var_44 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 14136747966064782350ULL)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [14U] [i_1]))))));
                        arr_45 [i_0] [i_10] [i_0] = (unsigned char)167;
                        var_45 = ((long long int) arr_7 [i_0] [i_0 - 1]);
                    }
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_29 [0LL]))))));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        {
                            var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_0 + 3] [(unsigned short)0])) - (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_15]))));
                            var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_15] [i_0 + 3])) ? (((/* implicit */int) arr_7 [i_15] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_15] [i_0 - 2]))));
                            var_49 = ((/* implicit */unsigned char) ((unsigned short) arr_21 [i_6 + 1]));
                            var_50 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2091319768639412139ULL)) && (((/* implicit */_Bool) arr_27 [i_0 + 3] [15ULL] [20] [i_0 + 3]))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */signed char) (_Bool)1);
            }
            var_52 = ((/* implicit */int) ((long long int) (_Bool)0));
            var_53 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0 - 2])) ? (((/* implicit */int) arr_17 [i_0 + 2])) : (((/* implicit */int) arr_17 [i_0 + 1]))));
        }
        var_54 = (~(((/* implicit */int) arr_48 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1])));
    }
}
