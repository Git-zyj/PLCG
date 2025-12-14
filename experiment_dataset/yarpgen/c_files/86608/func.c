/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86608
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) 411217452)) ? (-411217439) : (411217449)))));
    }
    for (int i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 411217452)) ? (max((((/* implicit */long long int) max((411217452), (411217437)))), (min((var_6), (((/* implicit */long long int) arr_3 [i_1])))))) : (((/* implicit */long long int) (+(-411217453))))));
        var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */long long int) -411217453)) : (arr_4 [i_1]))), ((-(arr_4 [i_1])))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) % (arr_6 [i_2]))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) 411217441)) | (arr_6 [i_1])))));
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_1 [i_4])) | (((((/* implicit */long long int) ((arr_1 [i_3]) & (var_4)))) & (var_6)))));
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (unsigned short)29441);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 |= ((/* implicit */int) ((long long int) max((arr_4 [i_2]), (((/* implicit */long long int) 411217452)))));
                        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 411217452)) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_10 [i_5] [i_2] [i_2])))), (((411217441) / (411217452)))));
                        /* LoopSeq 1 */
                        for (short i_6 = 3; i_6 < 6; i_6 += 2) 
                        {
                            arr_24 [i_1] = ((/* implicit */unsigned long long int) var_9);
                            var_18 = -3110492038087358565LL;
                        }
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_27 [i_1] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */int) (_Bool)1);
                        var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_1 + 3])) & (-411217422))), (((((/* implicit */_Bool) arr_1 [i_7])) ? (-411217422) : (823990569)))));
                        var_20 = ((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_1]);
                    }
                    var_21 = ((/* implicit */unsigned short) arr_0 [i_1 + 2]);
                    var_22 = ((/* implicit */unsigned short) max(((((((_Bool)1) ? (2475968713012007331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_3]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1])) ? (411217467) : (((/* implicit */int) (unsigned char)153))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)40))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((0U) & (((/* implicit */unsigned int) -411217441)))) : (((/* implicit */unsigned int) arr_1 [9LL]))));
                }
            } 
        } 
        var_24 = ((var_4) < (((((/* implicit */_Bool) 411217452)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 4) 
    {
        var_25 = max((((/* implicit */int) ((-900673124) == (((/* implicit */int) var_1))))), ((+(((/* implicit */int) (unsigned char)163)))));
        var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) arr_29 [7]))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (((((+(arr_29 [i_8]))) >> (((14371906113734131326ULL) - (14371906113734131314ULL))))) >> (((2448930538U) - (2448930512U))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        {
                            var_28 = var_1;
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11] [i_11 + 1] [i_11] [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 + 2])) ? (arr_38 [i_11] [i_11 + 1] [i_11] [i_11] [i_11]) : (((/* implicit */int) (_Bool)1))));
                            var_30 -= ((/* implicit */_Bool) var_9);
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((91914794402669258LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 + 1]))) : (((((/* implicit */_Bool) 541476501)) ? (((/* implicit */unsigned long long int) arr_38 [i_9] [i_9] [i_11] [i_9] [i_9])) : (4074837959975420275ULL))))))));
                            var_32 -= ((/* implicit */signed char) (unsigned short)3);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [(_Bool)1] [(_Bool)1] [(_Bool)1] [2ULL] [i_10] [i_10] [i_10])) * (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)1))))));
        }
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9] [(unsigned char)3] [(_Bool)1]);
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_9] [i_9] [i_9] [i_16 + 1])) ? (((/* implicit */unsigned long long int) 262143)) : (arr_45 [i_15] [i_14] [i_9] [i_16 + 3])));
                            var_36 -= ((((/* implicit */int) (signed char)82)) != (((/* implicit */int) arr_47 [i_16] [i_16 + 2] [i_9] [i_16 - 1] [i_16 + 3])));
                        }
                        for (short i_18 = 1; i_18 < 19; i_18 += 4) 
                        {
                            var_37 &= ((255LL) - (((/* implicit */long long int) ((/* implicit */int) (short)24193))));
                            arr_54 [i_14] [i_14] [i_14] [i_16] [i_16 + 2] [i_16 + 2] = ((/* implicit */int) arr_45 [i_9] [i_14] [i_15] [i_16]);
                        }
                        arr_55 [i_16 + 2] [i_14] [i_14] [i_14] [i_9] = ((/* implicit */int) var_1);
                    }
                    var_38 = ((/* implicit */unsigned int) (-(var_4)));
                    var_39 = ((/* implicit */int) (-(11355681946972149045ULL)));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -411217420)) : (var_6))) / (max((((/* implicit */long long int) (short)-24199)), (var_6))))), (((/* implicit */long long int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_19] [i_20] [i_22 - 1] [i_21 + 1])) | (((/* implicit */int) var_2))));
                        var_42 &= ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)104)))) || (((/* implicit */_Bool) arr_62 [i_21 + 1]))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)18514)) + (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_31 [(unsigned short)2] [(unsigned short)2])) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned short)47000))))))) ? (((253LL) + ((+(arr_39 [i_23] [i_23] [i_21 + 1] [i_20] [12] [12]))))) : ((+(-253LL))))))));
                        var_44 -= ((/* implicit */unsigned char) (_Bool)1);
                        var_45 = ((/* implicit */unsigned int) (signed char)-110);
                        var_46 = ((/* implicit */unsigned char) var_4);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_25 = 0; i_25 < 15; i_25 += 1) 
                        {
                            var_47 *= ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (900673146)))) * (((((/* implicit */long long int) var_4)) / (3525378569093393115LL)))))));
                            var_48 -= ((/* implicit */short) (!(var_2)));
                        }
                        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */long long int) 2703697627U)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) arr_50 [i_24] [i_24] [i_20] [i_21 + 1] [i_20] [i_20] [i_19])) | (((/* implicit */int) arr_50 [i_19] [i_19] [i_20] [i_21] [i_24] [i_24] [i_24]))))))))));
                    }
                    for (signed char i_26 = 2; i_26 < 12; i_26 += 4) 
                    {
                        arr_78 [i_19] [i_19] [i_20] [i_21] [i_26 + 1] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_26 + 2]))) / (arr_60 [i_19] [i_21] [i_26]))), (((/* implicit */long long int) (-(1325194797))))));
                        var_50 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (min((((/* implicit */long long int) arr_33 [i_26])), (-4141546249226069016LL)))))) ? ((~((~(((/* implicit */int) (signed char)75)))))) : (max((((((/* implicit */int) (signed char)88)) - (((/* implicit */int) (signed char)64)))), (max((-900673134), (arr_29 [i_19]))))));
                    }
                    arr_79 [i_19] [i_20] = ((/* implicit */long long int) (~(((((-900673119) <= (((/* implicit */int) var_5)))) ? (900673123) : (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_27 = 1; i_27 < 13; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 15; i_28 += 2) 
            {
                for (long long int i_29 = 2; i_29 < 13; i_29 += 2) 
                {
                    {
                        var_51 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_19] [i_27 + 2] [i_27 + 2])) ? (var_10) : (((/* implicit */unsigned long long int) arr_49 [i_19] [i_19] [i_19] [i_29] [i_19]))))) && (((/* implicit */_Bool) ((long long int) arr_52 [i_27] [i_27]))))))));
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) % (min((max((((/* implicit */unsigned long long int) var_9)), (arr_67 [i_19]))), (((/* implicit */unsigned long long int) arr_69 [i_29] [i_27 + 2] [i_29 + 1] [i_29 - 1])))))))));
                    }
                } 
            } 
        } 
        var_53 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_47 [i_19] [i_19] [(short)4] [i_19] [i_19]), (arr_47 [i_19] [i_19] [(_Bool)1] [i_19] [i_19])))) >> (((((((/* implicit */_Bool) (short)30732)) ? (((/* implicit */int) (short)10347)) : (((/* implicit */int) (_Bool)1)))) - (10329)))));
        var_54 = min((min((arr_36 [i_19] [i_19] [(_Bool)1] [i_19]), (((/* implicit */long long int) arr_70 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))), (((((/* implicit */_Bool) 900673112)) ? (3525378569093393115LL) : (((/* implicit */long long int) arr_71 [i_19] [(_Bool)1] [i_19] [i_19] [i_19] [i_19])))));
    }
}
