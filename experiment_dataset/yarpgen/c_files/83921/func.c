/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83921
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) -5113402769840814994LL)) && (((/* implicit */_Bool) 333296470)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -957827848)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -957827879))))) : (((/* implicit */int) var_18)))))));
        var_19 *= ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) arr_1 [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        arr_7 [(unsigned char)4] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2])))));
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28396)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))) ? (min((((/* implicit */int) (signed char)56)), (-333296499))) : (((/* implicit */int) min(((signed char)99), (((/* implicit */signed char) arr_6 [i_1] [i_1])))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_5 [i_1 - 2])));
        arr_9 [i_1] = ((/* implicit */signed char) max((max((-333296499), (957827848))), (((/* implicit */int) (unsigned short)33497))));
    }
    var_21 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_13 [i_2] = (signed char)99;
        var_22 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (333296455)));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            var_23 *= ((/* implicit */signed char) max((((/* implicit */unsigned char) (!((!(arr_3 [i_3 + 1])))))), (arr_17 [12ULL])));
            arr_18 [i_3] [i_4] [i_3] = max((((arr_4 [i_3 + 1] [i_3 + 1]) | (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)4548)) : (((/* implicit */int) (unsigned char)241)))))), (((957827858) / (((/* implicit */int) arr_17 [i_4])))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((min((((/* implicit */int) arr_5 [i_3 + 1])), (-957827865))) % (((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) arr_5 [i_3 + 1])))))))));
        }
        var_25 = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_3])), ((+(((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_3]))))))));
        var_26 = (!(arr_0 [i_3 + 1]));
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_16 [i_5] [i_5]))) * (((/* implicit */int) (unsigned short)13227))));
            arr_24 [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned char) var_17);
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 6; i_9 += 1) 
                    {
                        {
                            var_28 += ((/* implicit */unsigned short) ((unsigned int) arr_19 [i_5 - 1] [0U]));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-133921115932015560LL)));
                            arr_34 [i_5 - 1] [i_6] [i_6] [i_5] [(_Bool)1] = arr_14 [i_9 + 2] [i_5];
                        }
                    } 
                } 
            } 
            arr_35 [i_5 - 1] [i_5] [i_6] = ((/* implicit */int) ((957827858) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5])))))));
        }
        for (int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 7; i_11 += 2) 
            {
                for (signed char i_12 = 3; i_12 < 9; i_12 += 4) 
                {
                    {
                        var_30 += ((/* implicit */signed char) (+(arr_23 [6] [i_12 - 2])));
                        var_31 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) 1354617054)) & (((((/* implicit */_Bool) (unsigned short)48883)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) : (3754884596U)))));
                        arr_45 [i_5] [i_5] [i_10] [i_11] [i_11 + 1] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_12 - 3] [i_12] [i_12] [i_5 - 1]))));
                    }
                } 
            } 
            arr_46 [i_5 - 1] [i_5] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)120)))) / (arr_21 [i_5 - 1] [i_10])));
        }
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (_Bool)1))) - (((/* implicit */int) var_5)))))));
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12))))))))));
            var_35 = (+(((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1])));
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        {
                            arr_57 [i_5] [(unsigned char)0] [(unsigned char)0] [i_14] [i_15 - 1] [i_15] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5] [i_5 - 1]))));
                            arr_58 [i_5] [(_Bool)1] [i_16 - 1] [(signed char)6] [(signed char)6] [i_5] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_5 - 1] [i_5])) >= (((/* implicit */int) arr_16 [i_5 - 1] [i_5]))));
                        }
                    } 
                } 
                arr_59 [i_5 - 1] [i_13] [i_5] = ((/* implicit */_Bool) ((arr_53 [i_5] [i_5] [i_5] [i_14] [(_Bool)0]) + (arr_53 [i_5 - 1] [i_13] [i_5] [i_14] [i_13])));
                arr_60 [(_Bool)1] [i_5] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)511))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_63 [i_5] [i_5] [i_5] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_43 [(_Bool)1] [i_13] [i_5] [i_5] [i_5] [i_5]))) - (arr_55 [i_5] [i_5 - 1] [(short)9] [8U] [i_5] [i_5] [i_5])));
                arr_64 [i_5 - 1] [i_5] = ((/* implicit */unsigned short) ((arr_54 [i_5] [i_5] [i_5] [i_13] [i_17] [i_17]) == (((/* implicit */int) arr_32 [i_5] [i_5 - 1] [i_13] [(_Bool)1] [i_13] [(_Bool)1]))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_5 - 1] [i_5] [i_5 - 1])) / (((/* implicit */int) (signed char)112))));
                /* LoopSeq 1 */
                for (unsigned short i_18 = 1; i_18 < 7; i_18 += 2) 
                {
                    arr_67 [i_5] [i_5] = ((/* implicit */_Bool) ((arr_6 [i_17] [i_18 - 1]) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) (unsigned short)0))));
                    arr_68 [i_18] [i_18] [i_17] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_31 [i_18] [i_18] [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18])) : (((/* implicit */int) (_Bool)1))));
                }
                var_37 |= ((/* implicit */unsigned short) (+(arr_66 [i_5 - 1] [i_13])));
            }
            for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                var_38 = ((/* implicit */signed char) (!(arr_31 [i_19] [i_13] [i_5] [i_5] [i_5 - 1] [i_5])));
                var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
            }
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                arr_73 [i_5] [i_13] = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopSeq 1 */
                for (int i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    var_40 ^= ((/* implicit */unsigned short) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_41 = ((/* implicit */unsigned short) ((_Bool) ((arr_21 [i_20] [i_21]) & (((/* implicit */int) var_5)))));
                    arr_77 [i_5] [i_13] [i_13] [i_13] = ((((((/* implicit */_Bool) arr_54 [i_21] [i_5] [(_Bool)1] [i_13] [i_5] [i_5])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_75 [i_5] [i_5] [i_5] [i_20] [(unsigned short)6])))) < (((/* implicit */int) (!(var_10)))));
                }
            }
        }
        arr_78 [i_5] [i_5] = ((/* implicit */signed char) (unsigned char)162);
        var_42 *= (unsigned short)31892;
    }
}
