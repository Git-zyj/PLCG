/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88009
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) arr_2 [13LL]);
            var_16 += ((/* implicit */unsigned char) arr_2 [i_0]);
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1701223577)) ? (((((/* implicit */int) arr_5 [8] [i_1])) + (var_10))) : (((/* implicit */int) ((arr_2 [i_1 + 1]) >= (arr_2 [i_1 - 1]))))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                            var_19 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [2])) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_5 [i_4] [(signed char)8]))))))));
                        }
                    } 
                } 
                arr_16 [i_1 - 1] [i_1] [(signed char)7] = ((/* implicit */unsigned short) ((signed char) arr_11 [i_0] [i_0] [i_0] [i_2]));
            }
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_7 [i_1] [i_1 + 1])) + (((/* implicit */int) (unsigned char)85))))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)43940), (((/* implicit */unsigned short) (unsigned char)29))))) & (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)52140)))))))));
            }
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                var_22 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)65518)))) && (((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)617)))))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((unsigned long long int) arr_4 [i_6])) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_7 [i_0] [(unsigned char)0]))))))))));
            }
            for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                var_24 += ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)48571)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_26 [i_1 - 1] [i_1 + 1] [i_1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                var_25 -= var_8;
                arr_28 [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_4 [i_1]) : ((-(((/* implicit */int) arr_17 [6] [i_7] [i_1]))))));
            }
        }
        var_26 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_14 [i_0])) << (((((int) arr_11 [(signed char)4] [(signed char)4] [i_0] [i_0])) - (74))))));
    }
    /* LoopSeq 3 */
    for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) (-(((-3939706152362122583LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61515)))))));
            var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_30 [i_9] [i_8])))))), (arr_30 [i_8] [i_8])));
            arr_33 [i_8] [i_8] = (((~(min((arr_31 [i_8] [i_9 + 3]), (((/* implicit */long long int) (_Bool)0)))))) | (((((/* implicit */_Bool) arr_29 [i_9])) ? ((+(arr_29 [i_9 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8 + 2] [i_8]))))));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 13; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        var_29 += ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (-(0ULL)))))));
                        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [(signed char)4] [i_9 - 2] [i_9 - 2]))));
                        arr_38 [i_8] [i_10] [4LL] &= ((/* implicit */short) ((int) ((((((arr_31 [i_10] [i_9]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_36 [i_8])) + (33))))) <= (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_30 [0LL] [i_10])))))))));
                        var_31 ^= ((/* implicit */unsigned short) ((unsigned char) (signed char)83));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48750))) : (4665682773349345373LL)));
        var_33 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)68)))) ^ ((~(((/* implicit */int) arr_35 [i_8 - 1] [i_8] [i_8 + 2]))))));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_37 [i_8] [i_8] [i_8]))));
    }
    for (signed char i_12 = 1; i_12 < 10; i_12 += 3) 
    {
        var_35 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_37 [i_12 - 1] [i_12] [i_12 + 1])))) >> (((((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) : (-8265734622342771548LL))) - (220LL)))));
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((arr_11 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned char) arr_0 [i_12])))))));
    }
    for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                {
                    var_37 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_21 [i_15] [i_15] [i_15])) + (((/* implicit */int) arr_46 [i_13] [i_14])))) & ((+(((/* implicit */int) arr_32 [i_13])))))) + (((int) arr_20 [i_13] [i_14] [i_15]))));
                    var_38 = ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_14] [(unsigned char)3])) | (((((/* implicit */_Bool) arr_20 [6LL] [i_14] [i_14])) ? (((/* implicit */int) arr_22 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_39 [i_13])))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58279)) || ((_Bool)1))))));
                    arr_48 [i_13] [i_14] = ((/* implicit */_Bool) (unsigned char)158);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_16 = 1; i_16 < 6; i_16 += 3) 
        {
            for (int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) arr_22 [i_13] [(_Bool)1] [(_Bool)1]);
                    var_40 = ((/* implicit */signed char) arr_23 [(_Bool)1] [i_16 + 4] [i_17] [i_13]);
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))) << (((((((/* implicit */_Bool) arr_49 [i_17 + 1])) ? (((/* implicit */int) arr_49 [i_17 - 1])) : (((/* implicit */int) arr_49 [i_17 + 1])))) - (19225)))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned short) min((((long long int) arr_15 [i_13] [i_13] [i_13] [9ULL] [i_13])), (((/* implicit */long long int) ((unsigned char) arr_7 [i_13] [(unsigned short)5])))));
        var_43 &= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) - (18446744073709551615ULL)))));
    }
}
