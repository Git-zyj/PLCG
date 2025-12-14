/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9347
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_14 [(unsigned char)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)90)) ? (-2147483645) : (-76742853)));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) min((arr_11 [i_1]), (arr_11 [i_1])))) == (((/* implicit */int) ((unsigned char) arr_11 [i_1]))))))));
                            arr_15 [i_0] [0] [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_0] [(unsigned char)2] [i_0])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (var_13) : (var_4)))) ? (arr_10 [i_4] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
            arr_17 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((arr_2 [(signed char)6]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_0])) : (558446353793941504LL))))))));
        }
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) == (3807965716U)))), (min((((/* implicit */long long int) (unsigned char)166)), (5892770892853558975LL))))), (max((((/* implicit */long long int) arr_20 [i_0] [i_5])), (min((arr_12 [8U] [i_0] [i_5] [i_0] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [i_5] [i_0] [i_0]))))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_5] [i_0]))))))))));
        }
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
            var_21 = ((/* implicit */long long int) (_Bool)0);
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_6]))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 7; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_24 [i_8])))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((min((arr_30 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) arr_22 [i_0]))))))), (((max((arr_23 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_7] [i_8])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-7337))))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_28 [i_10])) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0]))))) : (((/* implicit */int) ((unsigned short) arr_28 [i_9]))))))));
                        arr_37 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3807965716U)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_9] [i_0] [i_10] [i_0] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16)))))) : ((+(arr_7 [i_10] [i_0])))));
                            var_26 = ((/* implicit */unsigned long long int) ((int) arr_26 [i_6] [i_6]));
                            var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10])) || (((/* implicit */_Bool) arr_21 [i_0] [i_10]))));
                            arr_43 [i_0] [i_0] [5U] [5U] [5U] = (+(((/* implicit */int) ((674239259) == (((/* implicit */int) (unsigned char)90))))));
                        }
                        var_28 = ((/* implicit */signed char) arr_35 [i_0] [(signed char)5] [i_9] [i_6] [i_0] [i_0]);
                    }
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((((/* implicit */int) (signed char)53)) % (arr_35 [i_0] [i_12] [i_12] [i_12] [i_12] [i_0]))) : (((/* implicit */int) ((_Bool) arr_19 [i_0] [i_0]))))) <= (((/* implicit */int) ((unsigned char) var_2)))));
            var_29 -= ((/* implicit */_Bool) max((((13983247553344618626ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))), (((((/* implicit */_Bool) (signed char)-34)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0])))))));
        }
        for (short i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((var_12), (arr_5 [i_0] [i_0])))), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_48 [i_0])))));
            var_31 = ((/* implicit */int) arr_40 [i_13] [(signed char)2] [i_13] [(signed char)2] [(signed char)2]);
            arr_50 [i_0] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_45 [i_0] [i_0] [i_0])))) : ((((!(((/* implicit */_Bool) (unsigned char)207)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)183)), (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((long long int) arr_12 [i_0] [i_0] [i_0] [i_13] [i_13])))));
        }
        var_32 ^= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(signed char)9]))) : (arr_27 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)69))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 18; i_14 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_51 [i_14] [i_14 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        arr_53 [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_52 [i_14 - 2])) == (arr_51 [i_14] [i_14 - 2])));
    }
    for (unsigned short i_15 = 3; i_15 < 18; i_15 += 2) /* same iter space */
    {
        arr_56 [i_15] = ((/* implicit */long long int) var_16);
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            var_34 = ((/* implicit */signed char) (-(arr_60 [i_15] [15])));
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (unsigned char)186))));
            var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(var_16)))), (((((/* implicit */_Bool) arr_51 [i_15] [i_16])) ? (3572748132U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_15] [i_16])))))))), (min((arr_51 [i_15 - 2] [i_16 + 1]), (arr_51 [i_15 - 2] [i_16 + 1])))));
        }
        var_37 = ((/* implicit */int) (+(arr_59 [i_15])));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) arr_57 [i_15 - 2] [i_15] [(unsigned short)11])));
                    arr_67 [i_15] [i_15] [i_18] [i_15] = ((/* implicit */int) var_0);
                    var_39 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)186)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_55 [i_15 - 1])) <= (arr_62 [i_15 - 3]))))) : ((+(arr_62 [i_15 - 1]))));
                    var_40 = ((/* implicit */unsigned char) arr_65 [i_18] [i_18] [i_18] [i_18]);
                }
            } 
        } 
        arr_68 [i_15] = max(((unsigned char)196), ((unsigned char)186));
    }
    for (unsigned short i_19 = 3; i_19 < 18; i_19 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                {
                    var_41 &= ((/* implicit */_Bool) -743854525);
                    var_42 = (~(((((/* implicit */_Bool) 674239279)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
        arr_76 [i_19] [i_19] = ((/* implicit */long long int) arr_59 [i_19]);
        var_43 = (~((~((~(((/* implicit */int) (unsigned short)38009)))))));
    }
    var_44 = ((/* implicit */unsigned short) var_7);
}
