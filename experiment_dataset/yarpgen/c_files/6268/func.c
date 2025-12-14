/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6268
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
    var_19 = ((/* implicit */unsigned long long int) 8064U);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)39736)))))), (((unsigned int) var_17)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (min((4294967272U), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_18), (((/* implicit */unsigned long long int) var_3)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0])))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(min(((-(((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) arr_1 [i_0]))))))));
        var_22 = ((/* implicit */signed char) (~(var_0)));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25799))))) : (var_2)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_7 [i_1] = (unsigned short)39747;
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (var_3)));
            /* LoopSeq 3 */
            for (int i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1])) + ((-(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)25800))))) : (arr_6 [(unsigned short)17] [i_3 + 1] [i_3 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12))))))))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) var_6);
                            var_27 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) % ((-(var_16))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) arr_12 [i_1] [i_1])) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_15))))))) ? (((((/* implicit */_Bool) (-(var_17)))) ? ((~(((/* implicit */int) (unsigned char)144)))) : (((arr_15 [i_5] [i_4] [i_3] [i_2]) % (((/* implicit */int) (short)17662)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 229225080))))) << (((((/* implicit */int) ((unsigned short) arr_10 [i_2]))) - (57042)))))));
                        }
                    } 
                } 
            }
            for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                var_29 = var_17;
                arr_21 [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) ((signed char) min(((-(((/* implicit */int) arr_18 [i_2] [i_2] [i_2])))), (((/* implicit */int) arr_18 [i_6] [i_6] [i_6 + 1])))));
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 4) 
                {
                    arr_28 [i_7] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8 - 2] [i_8 - 1] [i_8]))) ^ (var_3)));
                    arr_29 [i_1] [(unsigned short)14] [i_1] [(unsigned short)14] = ((/* implicit */_Bool) (-(arr_19 [i_1] [i_2])));
                    arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_15 [i_8 - 1] [i_8] [i_8 - 3] [(unsigned short)3]) * (((((/* implicit */_Bool) arr_8 [i_8 - 3] [i_7] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_22 [i_8] [i_7] [i_1] [i_1]))))));
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_34 [i_1] [i_2] [i_2] [13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [(unsigned char)12] [i_7] [i_2] [i_2] [i_1])) ? (arr_14 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) 4294967287U))));
                    var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [11U] [i_2] [11U] [i_2] [11U] [i_2]))) != (((((/* implicit */unsigned long long int) arr_23 [i_1])) - (var_2)))));
                }
                for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_32 = ((/* implicit */int) ((unsigned int) ((unsigned char) arr_16 [i_10])));
                    arr_38 [(unsigned char)5] [(unsigned char)5] [(short)5] [(unsigned char)5] = ((unsigned short) (unsigned short)65524);
                }
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_33 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_11]))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_37 [i_1] [i_1] [i_2] [i_2] [i_11] [i_11])) : (arr_11 [i_2] [i_2] [i_2] [i_11] [i_12]))) < (var_17))))));
                        arr_44 [i_1] [i_2] [i_1] [i_1] [i_12] [i_1] = ((/* implicit */_Bool) (~(arr_27 [i_11] [i_1] [i_2] [i_1])));
                    }
                    arr_45 [i_1] [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) (-(arr_6 [i_1] [i_2] [i_7])));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) arr_4 [i_1] [i_1])))) : ((-(((/* implicit */int) (short)-3411))))));
                        var_36 = ((/* implicit */unsigned char) var_9);
                        var_37 = ((/* implicit */int) var_13);
                    }
                    for (signed char i_14 = 4; i_14 < 19; i_14 += 1) 
                    {
                        var_38 *= ((/* implicit */int) ((((/* implicit */int) arr_26 [i_1] [i_2] [i_7] [i_14 - 2] [i_7])) <= (((/* implicit */int) (short)-17664))));
                        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                    }
                    arr_51 [i_1] [i_1] [i_1] [i_2] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((unsigned short) var_11))) : ((-(((/* implicit */int) arr_35 [i_11] [i_7] [i_2] [i_1]))))));
                    var_40 = ((/* implicit */unsigned char) (~(-1729804285)));
                }
            }
        }
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */short) ((long long int) ((signed char) arr_13 [i_1] [(unsigned char)14] [i_15] [i_1] [i_1] [i_1])));
            /* LoopSeq 1 */
            for (short i_16 = 3; i_16 < 17; i_16 += 2) 
            {
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) 2147483647))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (unsigned char)177))));
                var_44 += ((/* implicit */signed char) var_5);
                arr_58 [i_16] [i_1] &= ((unsigned int) max((((/* implicit */int) ((short) 1304941027))), (((-1180437565) / (-2147483645)))));
                var_45 = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) var_1)))))) % (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65532)) == (((/* implicit */int) var_7))))), (var_9))))));
            }
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_46 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned short)28))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65246))) % (1409439609335792785ULL))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (unsigned short)26)) : (2147483618)));
                        var_48 = (unsigned short)20;
                    }
                } 
            } 
            var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) min(((~(((((/* implicit */_Bool) var_9)) ? (10382574491087690749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [1] [i_15] [i_1] [1] [i_1]))))))), (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_15] [i_1]))))))));
        }
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned char) ((unsigned long long int) arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
            var_51 = ((_Bool) (-(((/* implicit */int) var_8))));
            arr_67 [i_1] [i_1] [i_1] = (-(((((/* implicit */_Bool) arr_55 [i_1])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_1] [i_19]))))));
            var_52 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_19] [i_19] [i_19] [i_19] [i_19])) && (((/* implicit */_Bool) var_5))))) ^ (((/* implicit */int) ((unsigned char) var_16)))));
        }
        arr_68 [i_1] = ((/* implicit */_Bool) (unsigned short)32679);
    }
    for (unsigned char i_20 = 1; i_20 < 13; i_20 += 1) 
    {
        var_53 = ((signed char) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) (unsigned char)62))));
        arr_72 [i_20] = ((/* implicit */unsigned long long int) (short)-3217);
        var_54 = ((/* implicit */_Bool) (((~(var_17))) >> (((((/* implicit */int) min((arr_0 [i_20 + 2]), (arr_0 [i_20 + 2])))) - (4911)))));
    }
}
