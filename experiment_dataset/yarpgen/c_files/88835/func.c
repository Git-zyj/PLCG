/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88835
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) var_5);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_2] [(_Bool)0] [i_0])) ? (arr_3 [i_1] [13ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (((var_11) - (((/* implicit */unsigned long long int) 26U))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12575))));
                            var_22 = ((/* implicit */unsigned short) var_10);
                        }
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)1));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned int) var_12);
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) >= (var_4)));
            var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [i_5] [i_6] [i_6])) < (((/* implicit */int) arr_9 [i_5] [(unsigned char)13] [i_5] [i_6] [i_6] [i_6]))))), ((~(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
            arr_18 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)4488))));
            arr_19 [(short)5] = ((/* implicit */long long int) arr_1 [i_5]);
        }
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_5]))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        arr_22 [i_7] [i_7] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))));
        arr_23 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)52961)) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((short) (unsigned short)8160)))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_29 [i_7] = ((/* implicit */unsigned short) var_12);
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (15998772787535636954ULL))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            arr_32 [i_7] [i_10] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)52)))) == (((/* implicit */int) ((((/* implicit */int) arr_16 [i_7] [i_7])) == (((/* implicit */int) arr_31 [i_7])))))));
            var_28 = ((/* implicit */long long int) (_Bool)1);
        }
    }
    /* LoopSeq 4 */
    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        arr_37 [i_11] [16ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 4286792596012288223ULL))) && (((/* implicit */_Bool) ((long long int) (+(arr_34 [i_11])))))));
        var_29 = ((/* implicit */unsigned char) var_16);
        var_30 = arr_33 [i_11];
    }
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
    {
        var_31 *= ((/* implicit */signed char) (~(arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned char)0] [i_12])));
        arr_41 [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57362)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12]))) : (var_7)));
        var_32 = ((/* implicit */unsigned short) min((((long long int) var_7)), (((/* implicit */long long int) var_17))));
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
    {
        arr_45 [i_13] = ((/* implicit */signed char) (~(((unsigned int) ((long long int) arr_34 [18ULL])))));
        var_33 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)57338)) ^ (((/* implicit */int) var_1)))) == (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)183)) <= (((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
    {
        var_34 *= ((/* implicit */unsigned char) ((((_Bool) (signed char)94)) ? (((/* implicit */int) (unsigned short)36702)) : (((/* implicit */int) arr_8 [i_14] [i_14] [i_14] [i_14]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            var_35 |= ((/* implicit */unsigned long long int) (short)-29193);
            var_36 = ((/* implicit */long long int) var_9);
        }
        for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            arr_55 [i_14] [11ULL] [i_16] = ((/* implicit */unsigned char) ((((arr_47 [i_16]) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) : (arr_42 [i_14] [i_16])));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((4563556567911720934LL) / (6091856005042561310LL)))) ? (((long long int) 1648645390)) : (((/* implicit */long long int) arr_46 [i_16])))))));
        }
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                for (short i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        var_38 = ((/* implicit */long long int) arr_50 [i_14]);
                        var_39 |= ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_14] [i_17]))));
                        var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)205))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                {
                    var_41 |= ((/* implicit */unsigned long long int) arr_10 [3LL] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
                    /* LoopSeq 3 */
                    for (short i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        var_42 = (!(((/* implicit */_Bool) arr_36 [i_14])));
                        arr_70 [13LL] [(unsigned short)5] [i_21] [i_22] = ((/* implicit */long long int) ((arr_9 [i_14] [i_14] [i_20] [i_20] [i_21] [i_22]) ? (((/* implicit */int) arr_52 [i_14] [i_14])) : (((/* implicit */int) arr_9 [i_14] [i_20] [i_20] [i_20] [i_21] [i_22]))));
                        /* LoopSeq 4 */
                        for (long long int i_23 = 0; i_23 < 16; i_23 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned char) arr_8 [i_20] [i_21] [i_22] [(unsigned short)14]);
                            var_44 = ((/* implicit */signed char) (~(((/* implicit */int) arr_63 [i_22] [i_20]))));
                            arr_73 [i_23] [4ULL] [i_21] [6U] [i_14] = ((((/* implicit */_Bool) (unsigned short)17633)) && (arr_44 [0U]));
                        }
                        for (unsigned int i_24 = 0; i_24 < 16; i_24 += 1) /* same iter space */
                        {
                            arr_76 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (short)13828);
                            var_45 *= ((/* implicit */signed char) (~(17ULL)));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_14] [8U] [i_21] [i_22])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_24] [i_20] [i_21] [i_20])))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (unsigned char)78))))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) var_16))));
                            arr_79 [i_14] [i_22] [i_21] [i_22] [i_25] = ((/* implicit */signed char) ((arr_51 [i_22] [i_22]) > (arr_51 [i_14] [i_20])));
                            var_48 = ((/* implicit */signed char) (unsigned char)161);
                        }
                        for (short i_26 = 0; i_26 < 16; i_26 += 3) 
                        {
                            var_49 = ((/* implicit */_Bool) (+(arr_0 [i_14])));
                            var_50 = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_82 [i_14] [i_21] [i_26] = ((((/* implicit */_Bool) 3297118740375124504LL)) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                            var_51 = ((/* implicit */short) ((long long int) arr_81 [i_26] [i_22] [i_21] [i_14] [i_20] [i_14]));
                            var_52 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) == ((~(((/* implicit */int) (_Bool)0))))));
                        }
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) ((long long int) (-(var_0)))))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned char) arr_52 [i_14] [3U]);
                        var_55 = ((/* implicit */short) ((arr_35 [i_21]) % (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_14] [i_27])))));
                        var_56 *= ((/* implicit */unsigned int) (_Bool)1);
                        var_57 |= ((/* implicit */short) var_16);
                    }
                    for (unsigned short i_28 = 0; i_28 < 16; i_28 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_29 = 0; i_29 < 16; i_29 += 3) 
                        {
                            arr_91 [i_14] [i_20] [i_20] [i_21] [i_28] [i_29] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) ((-559510053257439495LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_80 [i_21]))));
                            arr_92 [i_29] [i_28] [i_21] [i_20] [i_14] = ((/* implicit */signed char) arr_87 [i_21] [i_21] [i_21]);
                        }
                        arr_93 [i_14] [(_Bool)1] [i_14] [i_14] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((5346268855229041678LL) - (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_28] [12ULL] [i_21] [9LL] [i_14] [9LL]))))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                }
            } 
        } 
    }
    var_58 = ((/* implicit */unsigned long long int) var_16);
}
