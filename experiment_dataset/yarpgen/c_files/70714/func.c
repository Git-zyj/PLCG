/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70714
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((16300076897446960466ULL) >= (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -546399778)))))) * (((((/* implicit */unsigned int) var_9)) ^ (1103150731U)))));
            /* LoopSeq 4 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_2 - 2])) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1]) : (arr_9 [i_1 + 1] [i_2] [i_2])));
                var_21 = ((/* implicit */unsigned long long int) (~(3191816564U)));
                var_22 += ((/* implicit */int) (((-(var_8))) + (var_8)));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(var_4))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_3] [i_0])) ? (var_11) : (((/* implicit */int) ((short) 1103150731U)))));
                arr_13 [i_1] = ((/* implicit */short) ((long long int) ((3191816561U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))));
                var_25 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_1 + 1]));
                var_26 = ((/* implicit */unsigned short) (-(arr_3 [i_1 + 1] [i_3])));
            }
            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) var_11)) : (arr_9 [i_1 + 1] [i_1 + 1] [i_4])));
                var_28 = ((/* implicit */_Bool) min((var_28), (((_Bool) (-(1103150726U))))));
                var_29 = ((/* implicit */int) 3191816578U);
                var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -546399792)) >= (14595556510800122637ULL)));
            }
            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    arr_21 [i_0] [(short)2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_6 [i_0] [i_5] [i_5]);
                    var_31 = ((/* implicit */signed char) ((arr_9 [i_5] [i_1] [i_1 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                }
                for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 + 2] [i_1 + 1])) ? (((16300076897446960466ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) -546399793)))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_7 + 1] [i_7 + 1] [i_7] [(unsigned char)13])) < (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_7]))));
                    arr_26 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 935158136)))) || (((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_10)) : (-546399777))))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-546399793) ^ (var_11)))) ? (((arr_4 [i_0] [i_5] [i_7]) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((((/* implicit */_Bool) var_17)) ? (arr_6 [i_1] [i_5] [6ULL]) : (var_9)))));
                }
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_35 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -6463989605898151262LL)) ? (3191816573U) : (((/* implicit */unsigned int) 935158136))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_5]))))) ? (935158125) : ((+(var_9)))));
                }
                for (long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1 + 1] [i_9 + 2] [i_9 - 1]))));
                    var_38 = ((/* implicit */signed char) (~(arr_7 [i_1 + 1] [i_5])));
                    arr_32 [19ULL] [i_1] [19ULL] [19ULL] [i_0] [i_1] = ((/* implicit */unsigned char) var_12);
                }
                arr_33 [i_5] = arr_20 [i_0] [i_0];
                var_39 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5])) ? (arr_25 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned int) arr_31 [(unsigned char)19] [(unsigned char)19] [i_1] [i_5])))) >> (((((arr_4 [i_0] [i_1] [i_5]) / (((/* implicit */int) (unsigned char)199)))) - (10556596)))));
            }
            var_40 = ((/* implicit */unsigned char) ((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))))) <= (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (arr_20 [i_0] [i_0]) : (((var_1) >> (((((/* implicit */int) (signed char)-91)) + (127))))))))));
            var_42 = ((/* implicit */_Bool) min((var_42), (((_Bool) (_Bool)1))));
        }
        for (short i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            var_43 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) >= (arr_7 [16LL] [(unsigned char)4])));
            var_44 = ((/* implicit */unsigned long long int) ((long long int) var_2));
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                var_45 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)-98)) * (((/* implicit */int) (unsigned short)46871))));
                var_46 = ((/* implicit */short) arr_8 [i_11] [i_10]);
                var_47 -= arr_39 [4] [i_0] [i_10 + 4] [i_10 + 1];
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                var_48 -= ((/* implicit */short) (-((((_Bool)0) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) arr_36 [i_0] [i_10 + 2] [i_0]))))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_10 - 1] [i_10 + 1] [i_10 + 3] [i_10])) + (((/* implicit */int) (signed char)102))));
                var_50 += ((/* implicit */long long int) arr_4 [i_12] [i_10] [i_10 + 1]);
            }
            for (unsigned long long int i_13 = 3; i_13 < 18; i_13 += 4) 
            {
                arr_44 [i_0] [i_10] [i_13] = ((/* implicit */unsigned char) arr_11 [i_13]);
                var_51 = ((/* implicit */int) (-(8825850731932265795LL)));
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned long long int) var_12)) : (arr_37 [i_0] [i_10 + 3] [i_13 - 3]))))));
                var_53 = ((((/* implicit */_Bool) -935158107)) ? (-1227246078) : (-546399765));
            }
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            arr_47 [9] [i_14] [16] = ((/* implicit */unsigned short) ((unsigned long long int) arr_41 [i_14] [i_14 + 1] [i_14 + 1] [i_14]));
            var_54 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)46871))));
            var_55 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((var_3) - (((/* implicit */int) (short)-22151)))))));
            var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_0] [i_14] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_43 [i_0] [i_14] [i_14 + 1])));
            arr_48 [i_0] [i_14] = ((/* implicit */long long int) ((int) arr_8 [i_14 + 1] [i_14]));
        }
    }
    for (unsigned short i_15 = 1; i_15 < 16; i_15 += 1) 
    {
        var_57 = ((/* implicit */signed char) (+(546399778)));
        var_58 = ((/* implicit */long long int) var_13);
        var_59 = ((/* implicit */unsigned int) arr_34 [i_15]);
        arr_51 [i_15] = ((/* implicit */unsigned char) 546399765);
        var_60 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */int) arr_10 [i_15 + 1] [i_15 + 1] [i_15] [i_15]))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
    {
        var_61 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))));
        var_62 -= ((/* implicit */unsigned long long int) (-((~(1930631053)))));
        arr_56 [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_16] [i_16]));
    }
    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
    {
        var_63 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_53 [(short)4] [i_17])) ? (((/* implicit */int) arr_53 [i_17] [0U])) : (((/* implicit */int) var_5)))));
        var_64 = ((/* implicit */long long int) arr_20 [i_17] [i_17]);
        var_65 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_36 [i_17] [i_17] [i_17])), (7772781402798250876ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_36 [i_17] [i_17] [i_17]))))));
    }
    var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-546399783), (546399788)))) && ((!(var_13))))))))))));
    var_67 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (var_10)))) ? (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_6))) : (((/* implicit */long long int) (-(var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_2)) / (var_15))) <= (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)10)), (546399764)))))))) : (((unsigned long long int) var_0))));
    var_68 = ((/* implicit */unsigned long long int) var_14);
}
