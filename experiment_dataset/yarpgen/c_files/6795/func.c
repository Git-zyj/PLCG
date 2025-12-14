/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6795
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
    var_12 = var_9;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((arr_2 [14ULL] [(short)8]), (arr_2 [i_0] [i_0])))))));
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (arr_0 [i_0] [i_0])))) ? (((unsigned long long int) ((long long int) var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (var_3))))))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_7 [(short)14] [13LL] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) | (var_1))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (133955584LL)))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [7LL]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) ((arr_6 [i_1]) || (((/* implicit */_Bool) var_2))))))))));
            arr_10 [(signed char)14] [(unsigned short)4] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(unsigned short)7] [(signed char)12]))));
        }
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_4 [i_3 + 1])) : ((+(((/* implicit */int) (short)-31868))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3 + 3])) | (((/* implicit */int) arr_4 [i_3 - 1]))));
                            arr_23 [i_1] [(_Bool)1] [i_3] [i_5] = ((/* implicit */short) ((_Bool) arr_21 [i_4 - 1] [14LL] [i_4] [(_Bool)1] [i_5] [i_5]));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3 + 3] [i_3] [i_3 - 1] [5LL])) || (((/* implicit */_Bool) var_2))));
                        arr_31 [i_1] [(_Bool)0] |= ((/* implicit */unsigned short) arr_13 [12ULL] [2LL] [i_1]);
                    }
                } 
            } 
            var_18 = arr_25 [i_1] [i_3] [i_1];
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_41 [0LL] [i_1] [10LL] [i_11] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31868)) | (((/* implicit */int) arr_24 [12LL] [i_9] [i_1]))))), (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_11] [i_10] [i_9] [i_1])), (arr_9 [(signed char)9] [i_10] [(_Bool)1]))))))) : ((-(((/* implicit */int) arr_40 [11LL] [i_9] [i_10] [(_Bool)1]))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(var_2))))));
                    }
                } 
            } 
            arr_42 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) max((min((arr_20 [i_9] [i_9] [14LL] [i_9]), (((/* implicit */long long int) arr_29 [i_1] [i_1] [(_Bool)1] [i_1])))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [13LL])) || (((/* implicit */_Bool) var_8))))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 2; i_12 < 12; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        arr_47 [(short)8] [i_1] [(_Bool)1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_25 [(_Bool)1] [i_9] [4LL])), (arr_38 [i_12] [i_9] [i_12] [i_12 - 1]))), (((/* implicit */unsigned long long int) var_7))));
                        arr_48 [(unsigned short)2] [(signed char)11] [(_Bool)1] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_18 [i_12 - 2] [i_12] [(_Bool)1] [12LL] [i_1] [(signed char)4])))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_12] [i_12] [8LL] [i_1])) || (((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))) : (((/* implicit */int) var_8))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [13ULL] [(_Bool)1]))))) ? (((/* implicit */int) ((short) arr_0 [i_13] [(_Bool)1]))) : (((/* implicit */int) (short)-31868))))) ? (((((/* implicit */int) arr_8 [i_13] [i_9])) ^ (((/* implicit */int) arr_16 [i_12 + 1] [2ULL] [i_12] [i_12 - 1])))) : ((~(((((/* implicit */int) var_8)) | (((/* implicit */int) (short)31867))))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
        {
            for (long long int i_15 = 4; i_15 < 11; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 11; i_16 += 4) 
                {
                    {
                        arr_57 [i_15] [2LL] [i_15] [i_16] = ((/* implicit */_Bool) arr_12 [1ULL] [i_15]);
                        var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_46 [i_1] [2LL] [(_Bool)1])) ? (9060328332997074829LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)9329), (((/* implicit */unsigned short) arr_32 [i_1] [i_14])))))))), (((/* implicit */long long int) var_5))));
                        arr_58 [i_15] [(signed char)10] [i_14] [i_14] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_39 [i_15 - 1] [(_Bool)1] [5LL] [i_14 + 1] [i_1])))) || (((/* implicit */_Bool) min((arr_21 [i_16 + 4] [i_15 - 1] [8LL] [9LL] [i_14 + 1] [i_1]), (arr_21 [i_16 + 4] [i_15 - 1] [7LL] [(_Bool)0] [i_14 + 1] [(short)4]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_18 = 1; i_18 < 18; i_18 += 4) 
        {
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_67 [i_17] = ((/* implicit */unsigned short) arr_60 [i_18 + 3] [i_19 + 1]);
                        arr_68 [i_17] [(_Bool)1] [i_17] [(short)16] [i_20] [i_20] = ((/* implicit */long long int) (((!((_Bool)0))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_65 [i_17])))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_6)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (short i_22 = 1; i_22 < 18; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_17] [i_21])) ? (((/* implicit */int) arr_62 [i_17] [(_Bool)1])) : (((/* implicit */int) arr_62 [i_24] [4LL]))));
                            var_24 = ((/* implicit */_Bool) arr_79 [(signed char)16] [i_17] [i_17] [7LL] [(_Bool)0]);
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_83 [i_17] [(signed char)0] [i_23] [i_23] = ((/* implicit */long long int) (!(arr_80 [17ULL] [i_17] [i_22 + 2] [i_17] [i_22 + 2])));
                            arr_84 [i_23] [(unsigned short)1] [i_25] [i_17] = ((/* implicit */unsigned short) ((arr_82 [7LL] [16LL] [i_22 + 1] [2LL] [17LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                        for (signed char i_26 = 0; i_26 < 22; i_26 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) arr_61 [i_21] [1LL]);
                            var_26 = ((/* implicit */long long int) arr_59 [4LL]);
                            arr_87 [(_Bool)1] [(_Bool)1] [3LL] [i_17] [i_26] = ((/* implicit */long long int) var_4);
                        }
                        var_27 += ((/* implicit */short) (-(((((/* implicit */int) arr_80 [(_Bool)1] [(_Bool)1] [i_22] [(_Bool)1] [i_17])) | (((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_27 = 0; i_27 < 20; i_27 += 4) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [(_Bool)1] [i_27] [i_27] [(_Bool)1]))))) : (((/* implicit */int) arr_71 [i_27]))));
        var_29 = ((/* implicit */signed char) (((_Bool)1) ? (arr_89 [(_Bool)1] [i_27]) : (((/* implicit */unsigned long long int) arr_70 [i_27] [(_Bool)1]))));
        /* LoopSeq 1 */
        for (long long int i_28 = 0; i_28 < 20; i_28 += 1) 
        {
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_71 [i_27])))))))));
            /* LoopNest 3 */
            for (short i_29 = 0; i_29 < 20; i_29 += 4) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (long long int i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : (((((/* implicit */unsigned long long int) var_6)) | (var_10))));
                            var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_77 [i_27] [i_30] [18LL])) | (var_1)));
                        }
                    } 
                } 
            } 
            arr_103 [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_95 [i_28])) || (((/* implicit */_Bool) var_11))));
        }
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_102 [i_27] [(_Bool)1] [i_27] [(signed char)10] [16LL] [i_27])) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)));
    }
}
