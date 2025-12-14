/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68462
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned char) (+((-(((/* implicit */int) var_10))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) var_9);
            var_20 = ((/* implicit */short) 1419218788021735390LL);
        }
        for (long long int i_2 = 3; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_0] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2 - 1]))));
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (+(arr_10 [i_3 + 1] [i_3 + 1] [i_2 - 2])));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_4]))) : (((arr_14 [i_0] [i_2]) << (((1305853996U) - (1305853963U))))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2989113300U) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (((/* implicit */long long int) ((3753389115U) << (((arr_11 [i_2] [i_0]) - (17628082451057241775ULL))))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        }
        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (+(((var_0) << (((arr_10 [i_8] [i_8] [i_7]) - (9077786134614664733ULL)))))));
                            arr_28 [i_0] [i_6 - 3] [i_0] [i_6 - 3] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_15 [i_0] [i_8] [i_8] [i_8 + 2] [i_8 + 2]));
                        }
                    } 
                } 
                arr_29 [i_0] [i_6] [i_6] [10LL] &= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_23 [i_6 - 2] [i_7] [i_7])) ? (-1419218788021735366LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_35 [i_0] [i_6 - 3] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7] [i_7])) && (((/* implicit */_Bool) arr_18 [i_10 - 1] [i_11]))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (var_5)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_6 [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            var_28 &= ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [i_0] [i_10 - 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) - (arr_4 [i_0] [i_11] [i_0]))) : ((-(-8760625937986171899LL))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) arr_33 [i_6 - 3] [i_6 + 1] [i_6] [i_6] [i_6 + 1])))))));
            }
            for (signed char i_12 = 4; i_12 < 18; i_12 += 4) 
            {
                var_30 = ((/* implicit */int) ((((arr_26 [i_0] [i_0] [i_0] [i_12 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_12] [i_12])))));
                var_31 ^= ((/* implicit */unsigned long long int) (-((-(-1419218788021735382LL)))));
                var_32 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-123)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8422345452995947977LL)) ? (((/* implicit */int) arr_25 [i_0] [i_6 - 3] [i_12] [i_12] [i_12 + 2])) : (((/* implicit */int) (signed char)-103)))))));
            }
            for (signed char i_13 = 1; i_13 < 19; i_13 += 4) 
            {
                var_33 = ((/* implicit */int) var_8);
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_11))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_0])) ? (((/* implicit */unsigned long long int) 1318185049989718382LL)) : (arr_15 [i_0] [i_13 + 2] [i_0] [i_13] [i_13])));
            }
            arr_41 [i_0] = arr_3 [i_0] [i_0];
        }
        /* LoopNest 2 */
        for (long long int i_14 = 2; i_14 < 18; i_14 += 1) 
        {
            for (long long int i_15 = 2; i_15 < 18; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
                    {
                        arr_52 [i_0] [i_14] [i_0] = ((/* implicit */unsigned char) (-(var_14)));
                        arr_53 [i_0] [i_14] [i_15] [i_14] = ((/* implicit */unsigned long long int) (+(arr_23 [i_14 + 3] [i_15 - 1] [i_14 + 3])));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)70)) - (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0])))))));
                        var_37 = ((((/* implicit */_Bool) ((long long int) arr_24 [i_0] [i_14] [i_14] [i_14 + 2] [i_15 + 3] [i_16]))) ? (((arr_26 [i_0] [i_0] [i_0] [i_14 - 1]) << (((6470383912480864139LL) - (6470383912480864139LL))))) : (((/* implicit */long long int) ((arr_34 [i_0] [i_0] [i_0] [i_14 + 3] [i_15 - 1] [i_14 + 3]) << (((var_16) - (322173511540804210LL)))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                    {
                        arr_56 [i_0] [i_14] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_0 [i_0])));
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5569))) > (arr_20 [i_14 - 1] [i_15 - 1])));
                        var_38 = ((/* implicit */long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_58 [i_14] [i_14] [i_0] [i_17] [i_15] [i_14 + 1] = ((/* implicit */_Bool) 1863507673U);
                    }
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_50 [i_0] [i_0] [i_14 - 1] [i_15 + 1] [i_15]))));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) arr_54 [i_15] [i_15] [i_15] [i_14 + 2]))));
                    arr_59 [i_0] = ((((/* implicit */_Bool) arr_55 [i_0] [i_14 + 2] [i_14] [i_15] [i_15 + 1] [i_15 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_0] [i_14]))))) : (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0])) ? (arr_14 [i_14] [i_14]) : (((/* implicit */unsigned long long int) var_15)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
    {
        var_41 += ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_60 [i_18])) / (((/* implicit */int) arr_60 [i_18]))))));
        arr_62 [i_18] = ((/* implicit */unsigned short) -4);
        var_42 = ((/* implicit */signed char) ((((/* implicit */int) arr_60 [i_18])) + (((/* implicit */int) arr_60 [i_18]))));
    }
    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
    {
        arr_65 [i_19] = min((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_60 [i_19])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [i_19])) ? (((/* implicit */int) arr_60 [i_19])) : (((/* implicit */int) arr_61 [i_19]))))) : (((var_11) / (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) var_2)));
        var_43 = ((/* implicit */long long int) ((unsigned int) min((((1305853996U) / (((/* implicit */unsigned int) 1710895280)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_64 [i_19] [i_19])) & (((/* implicit */int) arr_64 [i_19] [i_19]))))))));
    }
    for (unsigned short i_20 = 2; i_20 < 21; i_20 += 1) 
    {
        var_44 = min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (+(var_13)))))), (((/* implicit */unsigned long long int) (unsigned short)16241)));
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                {
                    arr_74 [i_20] [i_20 + 4] [i_21] [i_20] = ((/* implicit */long long int) arr_68 [i_22]);
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_73 [i_20] [i_21])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_63 [i_22]))))) : (((((/* implicit */_Bool) arr_70 [i_20] [i_20 - 1] [i_21] [i_22])) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_20 - 2]))) ^ (var_1))))));
                    var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) (+((-(((((/* implicit */_Bool) var_9)) ? (1863507653U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44555))))))))))));
                }
            } 
        } 
        var_47 += ((/* implicit */unsigned long long int) arr_61 [i_20]);
    }
}
