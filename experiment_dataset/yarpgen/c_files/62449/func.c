/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62449
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
    var_20 = ((/* implicit */short) max((var_2), (var_2)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) ((unsigned long long int) (unsigned short)0));
                        var_22 -= ((/* implicit */unsigned int) (signed char)(-127 - 1));
                        var_23 = ((/* implicit */unsigned char) var_9);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1] [i_3]);
                        arr_11 [(_Bool)1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])))))) : (((unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)11] [i_0] [(short)4] [i_0])))));
        arr_12 [i_0] = ((unsigned long long int) arr_7 [i_0] [i_0]);
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_25 &= ((/* implicit */short) (-((+(0)))));
        var_26 = ((/* implicit */_Bool) min((((((arr_15 [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_15 [i_4]))))), (((/* implicit */unsigned int) arr_13 [(unsigned short)21] [i_4]))));
        var_27 = (!(((/* implicit */_Bool) min((-1), (4)))));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((arr_15 [(short)6]), (((/* implicit */unsigned int) ((int) arr_17 [i_5]))))))));
        var_29 -= ((/* implicit */unsigned long long int) (unsigned short)26);
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_30 -= ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_12)) : (-7LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_8])) == (((/* implicit */int) arr_16 [i_5])))))));
                        var_31 -= ((/* implicit */unsigned int) min(((-(((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_6]))));
                        var_32 = ((/* implicit */int) max((((((/* implicit */_Bool) -5261595076094046098LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_17)))))));
                        var_33 = ((/* implicit */short) (((~(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)14))))))) ^ ((~((~(((/* implicit */int) arr_14 [i_5] [i_7]))))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) -16))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)191)) || (((/* implicit */_Bool) 2873262633815292122LL))));
            var_36 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max((6LL), (((/* implicit */long long int) (unsigned char)42))))), (((16745714801595776650ULL) - (arr_17 [i_5]))))) - ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)16] [i_6] [(unsigned char)16] [i_6]))) | (var_14)))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_37 -= ((/* implicit */int) (_Bool)0);
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned char)57))) || (((/* implicit */_Bool) ((long long int) arr_21 [i_9]))))))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 16; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_29 [i_5] [i_10] [i_11 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_10 + 1] [i_11 - 1] [i_11 - 1]))) : (arr_24 [i_11])))))) == ((~(arr_20 [i_10 + 1] [i_5])))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((unsigned int) min((arr_25 [i_10 - 1] [i_11 - 1]), (arr_25 [i_10 - 1] [i_11 - 1])))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_10 - 1] [i_11 + 1] [i_11 - 1]))))))));
                        var_42 = ((/* implicit */int) ((min((min((arr_29 [i_5] [i_5] [16U] [i_5]), (((/* implicit */unsigned long long int) (unsigned char)45)))), (((/* implicit */unsigned long long int) arr_19 [i_10 - 1] [i_11 - 2])))) ^ (((((((/* implicit */_Bool) arr_27 [(unsigned short)11] [i_10] [i_11])) ? (arr_27 [15LL] [i_11 - 2] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_13]))))) | (((/* implicit */unsigned long long int) (~(10))))))));
                        arr_39 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_36 [i_10 - 1] [i_11 - 1] [i_11 + 1] [i_11] [i_13]))) - (arr_36 [i_10 + 1] [i_11 - 1] [i_11 + 1] [i_13] [i_10 + 1])));
                    }
                    var_43 = ((/* implicit */unsigned short) arr_25 [i_10] [i_10]);
                    arr_40 [i_5] [i_5] [i_11] [i_5] = (((-(arr_20 [i_10 + 1] [i_10 - 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)57), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))))))));
                    arr_41 [i_5] [i_10 - 1] [i_11] [i_11 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_32 [i_11] [i_5] [i_10] [i_10] [i_5] [(signed char)4])) ^ (((/* implicit */int) arr_32 [i_11] [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])))) & (((/* implicit */int) max((arr_32 [i_11] [i_11 - 1] [i_10 + 1] [i_10 + 1] [i_5] [i_11]), (arr_32 [i_11] [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 1]))))));
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) var_19)))))));
                }
            } 
        } 
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) arr_35 [i_5] [i_5] [i_5]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                {
                    arr_49 [i_14] [i_16] [i_15] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_16])))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        for (short i_18 = 3; i_18 < 18; i_18 += 4) 
                        {
                            {
                                var_46 &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_48 [i_18 - 3] [i_18 - 3])))) & (((/* implicit */int) ((signed char) arr_14 [i_14] [i_14])))));
                                var_47 = ((/* implicit */int) (-((-(arr_15 [i_14])))));
                                var_48 -= ((/* implicit */short) ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213)))));
                            }
                        } 
                    } 
                    var_49 = (-((-(arr_51 [i_14] [i_14] [i_16] [i_16] [i_14]))));
                    arr_54 [i_14] [i_14] [i_14] [i_16] = ((/* implicit */int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_14])))))));
                }
            } 
        } 
    } 
}
