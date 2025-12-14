/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90075
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
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = var_9;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = arr_1 [i_0] [i_0];
        var_14 |= ((/* implicit */signed char) (short)32767);
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 *= ((((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (max((((/* implicit */long long int) var_7)), (var_4))) : (min((((/* implicit */long long int) arr_0 [i_0])), (35184371040256LL))))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
            var_19 = ((/* implicit */_Bool) arr_5 [i_1]);
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((0LL) << (((((((/* implicit */_Bool) 0LL)) ? (-35184371040256LL) : (((/* implicit */long long int) var_11)))) - (1112506969LL)))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) arr_12 [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (-35184371040256LL) : (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))));
                            var_21 = ((/* implicit */unsigned short) ((((-14LL) != (((/* implicit */long long int) 3281859308U)))) ? (((((/* implicit */int) arr_0 [i_1])) << (((((/* implicit */int) var_7)) - (13924))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_3))))));
                            var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_14 [(signed char)8] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_4] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_3 + 2] [i_3 + 2])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) min((var_23), ((unsigned short)60554)));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            arr_19 [i_1] = ((/* implicit */unsigned short) ((0ULL) & (18446744073709551603ULL)));
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        {
                            arr_29 [i_9] [i_9] [(unsigned short)3] [i_7] [i_1] [i_1] = ((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 - 1]);
                            arr_30 [i_1] [i_1] [(unsigned short)10] [(unsigned short)10] [i_8] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) var_11));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(signed char)3] [i_9 - 2] [i_9 + 2] [(signed char)3]))) : (0LL))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 1; i_10 < 8; i_10 += 3) 
        {
            var_25 = ((/* implicit */short) ((unsigned short) arr_16 [i_1] [i_10 - 1] [i_10 - 1] [i_10 - 1]));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_26 = (unsigned short)21;
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_3))));
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10 + 3])) ? (((/* implicit */int) (unsigned short)60533)) : (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) arr_24 [i_12] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1]))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_10 + 2])) ? (((((/* implicit */_Bool) arr_4 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10 - 1] [i_1]))) : (11849320102882088344ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 33554432U)) + (arr_36 [i_1] [i_10 + 3] [i_11] [i_12])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_30 *= ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [(signed char)7]))));
                            arr_44 [i_10 + 1] [i_10 + 1] [i_10] [i_12] [i_10] = ((/* implicit */_Bool) var_3);
                            var_31 += (!(((/* implicit */_Bool) arr_38 [i_10 + 2] [i_10 + 3] [i_10 + 3])));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) arr_25 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_10]))) >= (arr_42 [i_10 + 2] [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_1] [i_15] [(short)5] [i_10 + 2] [i_10 + 1] [i_10] [i_1]))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65515)) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_1] [(unsigned short)5] [(unsigned short)5] [i_15] [i_14])))))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_50 [i_1] [i_1] [i_10 + 2] [i_14] [i_1])) : (((/* implicit */int) (unsigned short)19755))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [(_Bool)1] [i_1]))) * (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_10 + 1] [i_1] [i_15]))))))));
                    }
                } 
            } 
        }
        var_36 *= ((arr_4 [i_1]) << (((((/* implicit */int) arr_46 [i_1] [i_1] [i_1])) - (48991))));
        arr_52 [i_1] [i_1] = ((/* implicit */long long int) ((arr_17 [(_Bool)1]) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1])) : ((((_Bool)1) ? (((/* implicit */int) arr_45 [(signed char)7] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 1; i_17 < 7; i_17 += 1) 
            {
                for (unsigned short i_18 = 4; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((arr_8 [i_18 - 1]) & (((/* implicit */unsigned long long int) arr_37 [i_17] [(short)5] [i_17 + 1] [i_17] [i_17 + 3] [i_17])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_64 [i_18] [i_18] [i_16] [i_16] [i_1] [i_1] = ((/* implicit */_Bool) arr_34 [i_1]);
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((-984452519065858523LL) + (984452519065858545LL)))));
                            arr_65 [i_19] [i_19] [i_16] [i_16] [i_16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [(short)8]))) : (arr_36 [i_1] [i_1] [(_Bool)1] [i_19])))) ? (((unsigned long long int) -7911452473814261957LL)) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_17 + 1] [i_1] [i_17] [i_18 + 1] [(signed char)2]))));
                        }
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1])))) | (((/* implicit */int) (unsigned short)22601))));
                            arr_68 [i_16] [i_16] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_20] [i_18] [(short)9] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_48 [i_18])))) : (((/* implicit */int) arr_22 [i_1] [i_16] [i_17] [i_18] [i_20 - 1]))));
                            arr_69 [i_1] [i_1] [0LL] [i_16] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_1] [i_16] [i_16] [(short)2])) - (((((/* implicit */int) arr_40 [i_1])) % (((/* implicit */int) var_10))))));
                            arr_70 [(_Bool)0] [i_16] [i_17 - 1] [i_17] [i_16] = ((/* implicit */short) (unsigned short)18);
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_18 - 4] [i_18 + 1] [(unsigned short)4] [i_18] [(unsigned short)4] [(signed char)9])) ? (((/* implicit */int) arr_62 [i_20] [i_20] [i_20] [i_20] [i_20 - 1])) : (((/* implicit */int) arr_46 [i_16] [i_17 - 1] [(_Bool)1])))))));
                        }
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_1])) ? (((/* implicit */int) arr_39 [i_1] [(unsigned short)8] [(unsigned short)0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (var_9))), (min((var_6), (var_9))))));
}
