/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64224
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_4)), (var_3)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((short) arr_9 [i_1] [i_1 + 2] [i_1 - 2]));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned short) ((int) ((short) arr_1 [i_0])));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_2])))) != (arr_5 [i_4] [(unsigned short)6] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_13 [i_0] [i_1 - 1] [i_1 + 1]) | (arr_13 [i_0] [i_1 + 2] [i_1 - 1])));
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            arr_19 [5LL] [5LL] [5LL] [5LL] [i_1] [5LL] = ((/* implicit */unsigned char) ((short) arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [2] [i_6 + 1] [i_1]));
                            arr_20 [i_0] [i_6] [i_6] [i_6] |= ((/* implicit */signed char) (-(arr_8 [i_2] [i_5 + 1] [i_6] [i_5 + 1])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_7] [i_1 + 2] [i_1 - 2])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_1] [i_5] [i_5])) == (arr_17 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_7] [i_5] [i_0]))))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5])) - (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))) / (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_1])) == (((/* implicit */int) arr_7 [(unsigned short)8] [12LL] [i_1])))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        arr_28 [i_1] = ((/* implicit */unsigned char) ((int) arr_22 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3]));
                        arr_29 [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0])) > (((/* implicit */int) arr_10 [i_8]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((2243003720663040ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37202)))));
                        var_18 = ((/* implicit */int) arr_27 [i_0]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_10 [i_0]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) arr_17 [i_1 - 3] [i_1 + 2] [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1]);
                        arr_37 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_13 [i_1] [i_2] [(short)2]))) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1])) > (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [6ULL] [3])))))));
                        var_21 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))) + (arr_3 [i_2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-10))))));
                    }
                    arr_38 [i_0] [i_0] [i_2] [(signed char)4] |= ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_4 [i_0])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            arr_42 [i_0] [i_11] [(unsigned short)11] = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_11] [i_11] [i_11]))));
            arr_43 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_2 [11LL]);
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) arr_32 [i_0] [7ULL] [7ULL] [(unsigned short)13])))));
        }
        for (long long int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
        {
            arr_46 [i_0] [i_12] = ((/* implicit */unsigned char) arr_35 [i_0] [i_0] [i_0] [i_0]);
            arr_47 [9LL] [9LL] = (~(arr_40 [i_12] [i_12]));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((unsigned int) arr_8 [i_0] [i_12] [i_0] [i_12])) % (((/* implicit */unsigned int) arr_4 [i_0])))))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 4; i_14 < 12; i_14 += 3) 
                {
                    {
                        arr_52 [i_0] [i_0] [i_13 + 1] [i_14] = ((arr_32 [i_0] [i_12] [i_12] [i_0]) % (((/* implicit */int) arr_24 [i_0] [i_0] [4ULL] [i_14] [4ULL] [i_14 - 4])));
                        arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_13 - 1] [6ULL]))));
                        arr_54 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */short) ((arr_3 [i_0]) - (((/* implicit */unsigned long long int) arr_18 [10] [10] [i_0] [10] [7ULL]))));
                        arr_55 [i_12] [i_12] = ((/* implicit */int) (-(193009092U)));
                    }
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
        {
            arr_59 [i_0] &= (-(arr_30 [i_0] [i_0] [i_0] [i_0]));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_23 [13ULL] [i_0] [i_15] [14LL] [i_15])))));
        }
        arr_60 [i_0] [(unsigned short)0] &= ((/* implicit */unsigned int) ((short) ((_Bool) arr_9 [i_0] [i_0] [14LL])));
        arr_61 [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_16 = 1; i_16 < 21; i_16 += 2) /* same iter space */
    {
        arr_66 [i_16] = ((/* implicit */signed char) max((arr_65 [i_16]), (((/* implicit */unsigned int) arr_64 [i_16]))));
        var_25 += ((/* implicit */short) (~(min(((~(arr_65 [(unsigned char)6]))), (((/* implicit */unsigned int) min((arr_63 [i_16] [6]), (arr_62 [(signed char)2]))))))));
        arr_67 [i_16] = ((/* implicit */unsigned long long int) (~(arr_63 [i_16 + 1] [i_16])));
    }
    for (short i_17 = 1; i_17 < 21; i_17 += 2) /* same iter space */
    {
        var_26 ^= (-(arr_62 [11]));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((short) min((arr_68 [i_17] [i_17 + 1]), (arr_68 [i_17 - 1] [i_17 + 1])))))));
            arr_73 [i_17] [i_17] |= ((/* implicit */unsigned short) max((max((4101958189U), (((/* implicit */unsigned int) (short)-20552)))), (((((/* implicit */unsigned int) -1)) & (arr_65 [(signed char)12])))));
            var_28 = ((/* implicit */int) (~(min((arr_70 [i_17 - 1] [i_17 - 1] [i_17]), (arr_65 [(unsigned char)20])))));
        }
        for (short i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            arr_76 [i_17 + 1] [(unsigned short)9] [i_17 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(arr_62 [i_19])))) || (((/* implicit */_Bool) arr_72 [i_17])))))));
            var_29 -= ((/* implicit */short) ((int) arr_69 [i_17 + 1]));
            arr_77 [i_17] [i_19] [i_19] = ((/* implicit */unsigned char) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) 193009096U))));
        }
    }
    var_30 |= ((/* implicit */unsigned long long int) ((short) (-(min((193009107U), (((/* implicit */unsigned int) var_4)))))));
}
