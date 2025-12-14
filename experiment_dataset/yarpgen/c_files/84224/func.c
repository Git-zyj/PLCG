/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84224
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_4)) ? (var_7) : (var_4))) / (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))))) & (((/* implicit */long long int) ((int) var_9))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)28616)) == (((/* implicit */int) (short)28616))))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : (min((var_3), (var_3)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [0] [i_1] [14LL] [i_3] [i_4] [i_1] = ((/* implicit */short) arr_13 [i_1]);
                                var_12 = ((/* implicit */unsigned long long int) ((((((long long int) var_1)) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_1] [i_2] [i_1])))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((var_8) ? (var_0) : (arr_8 [i_4] [i_1] [i_1] [5LL]))))))));
                                var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) >> (((arr_3 [i_1 + 1] [i_1 + 2]) - (993202457688384635ULL))))) - (((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1] [i_1 + 2])))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_6))) + (((arr_9 [i_1 + 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_1 + 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_9 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_1])))) << (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_8 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) == (var_7))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_9 [i_1 + 2])))))));
                            var_17 = ((/* implicit */short) ((max((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 + 1]))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_6 - 1] [i_1] [2ULL] [11ULL]) <= (arr_5 [i_1] [i_1 + 1])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((long long int) arr_19 [8ULL] [i_0] [8ULL] [6ULL] [i_1] [12LL]))) ? (max((arr_3 [i_0] [i_1]), (var_2))) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_4 [(_Bool)1] [(_Bool)1]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)28600)) ? (((/* implicit */unsigned long long int) 5277397498365044941LL)) : (12365671379592332725ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9211142935949106279LL)))))) ? (max((((/* implicit */unsigned long long int) arr_22 [(signed char)2])), (arr_21 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_22 [i_7])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))))))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 4; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_20 -= ((long long int) (signed char)124);
                        /* LoopSeq 4 */
                        for (short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_29 [i_9] [i_10 + 1] [i_9] [i_10]), (arr_29 [i_9] [i_10 - 3] [(_Bool)1] [i_10 - 3]))))) * (((-7785248754926267368LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)6)))))));
                            arr_33 [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_3)))) ? (arr_31 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_20 [i_10]))))) ? (((long long int) arr_23 [i_10 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((short) arr_20 [i_7])))))));
                            var_22 = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_10]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [i_10]))) ^ (var_3))))));
                            arr_34 [i_7] [14LL] [17LL] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_10 + 1] [i_10 + 2])) ^ (((/* implicit */int) arr_27 [i_10 - 1] [i_10 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_11] [i_10])) >> (((var_0) - (4702225938789112008LL)))))) : (((((((/* implicit */_Bool) var_2)) ? (var_4) : (var_5))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_30 [(_Bool)1] [i_10 + 2] [i_9] [i_8] [i_7]))))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_30 [i_10] [i_12] [i_9] [i_10] [i_10 - 2]);
                            arr_38 [i_9] [i_9] [i_12] = ((/* implicit */_Bool) ((long long int) arr_21 [i_10] [(short)4]));
                        }
                        for (short i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */_Bool) ((long long int) 15014978309822313584ULL));
                            var_25 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_39 [i_13] [(unsigned char)18] [8LL] [14LL] [i_8] [(unsigned short)8])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_10 + 3] [(short)12] [i_8] [i_8] [(short)4]))))) == (min((((/* implicit */long long int) arr_26 [i_7] [3LL] [9LL])), (var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((arr_30 [i_10 - 3] [i_10 - 3] [i_10 + 3] [(_Bool)1] [i_10 - 2]), (arr_30 [i_10 - 3] [i_10] [i_10 - 3] [i_10 - 3] [(unsigned short)13])))));
                            var_26 *= ((_Bool) ((((/* implicit */_Bool) ((long long int) arr_24 [i_7] [(unsigned short)8] [i_7]))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_7])) >> (((var_1) + (7060001442144359309LL))))))));
                        }
                        for (short i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) arr_22 [3LL])), (((((/* implicit */_Bool) arr_24 [i_7] [i_8] [i_14])) ? (var_7) : (var_0)))))) ? (((arr_37 [i_7] [i_8] [i_9] [i_14]) ? (((/* implicit */int) arr_37 [i_14] [i_10 - 2] [i_8] [i_7])) : (((/* implicit */int) arr_37 [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_4) < (arr_43 [i_7] [i_7] [8LL] [i_7] [16LL] [i_7])))) : (((/* implicit */int) ((unsigned char) arr_28 [18ULL] [18ULL])))))));
                            arr_44 [i_9] [i_8] [i_9] [i_14] = var_1;
                        }
                        var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_6))) ? (var_7) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8]))) : (var_1)))))), (((((/* implicit */unsigned long long int) var_0)) | (max((arr_39 [i_7] [i_8] [i_8] [(short)1] [i_10] [i_10 + 3]), (((/* implicit */unsigned long long int) var_6))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 1; i_15 < 18; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((_Bool) ((short) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_9])))))));
                            var_30 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-5));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64775)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15653))) : (4394437245569182016LL)));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_39 [i_7] [i_8] [i_16] [i_8] [i_17] [i_17])))) + (max((((/* implicit */long long int) arr_35 [(unsigned char)14] [6] [i_8] [i_8] [5ULL] [i_16] [i_17])), (arr_43 [i_17] [i_17] [i_16] [i_16] [i_8] [(short)18]))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_17] [i_16] [i_8] [i_7] [i_7])))));
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 18; i_18 += 3) 
                        {
                            var_33 -= ((/* implicit */signed char) arr_51 [i_8] [(unsigned short)14] [(unsigned short)14] [(signed char)18]);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28616)) && (((/* implicit */_Bool) (signed char)6))));
                        }
                        arr_56 [i_16] [i_8] [i_16] [3LL] = ((/* implicit */long long int) min((((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_46 [i_7] [i_7] [(unsigned short)1] [i_7] [17LL]))))) / (((/* implicit */int) ((_Bool) arr_30 [i_7] [i_8] [i_7] [i_16] [i_17]))))), (((/* implicit */int) ((_Bool) (short)28616)))));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            var_35 = ((/* implicit */long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_37 [i_7] [i_8] [i_17] [i_19]))))));
                            var_36 = min((((arr_20 [i_17]) / (arr_20 [i_17]))), (arr_20 [i_7]));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_21 [i_7] [i_16]))) && (((/* implicit */_Bool) arr_30 [(signed char)6] [i_8] [(short)2] [i_8] [i_8])))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_20 = 1; i_20 < 15; i_20 += 3) 
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((arr_58 [i_7] [i_8] [i_16] [i_16] [(short)10] [i_20]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_7] [(_Bool)1] [0ULL])) || (((/* implicit */_Bool) var_7))))))))), (arr_62 [i_20] [i_17] [i_16] [i_8] [i_7]))))));
                            arr_63 [i_16] [i_20] [i_20] [i_20] [i_20] [i_20] [i_16] = ((/* implicit */unsigned long long int) arr_48 [i_7] [i_20 + 1] [i_16]);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_21 = 0; i_21 < 19; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 2; i_22 < 15; i_22 += 4) 
                {
                    for (unsigned char i_23 = 1; i_23 < 18; i_23 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (arr_42 [i_22 + 4] [i_22] [i_22 + 4] [i_22 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)));
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_24 [(unsigned short)17] [i_8] [6LL])))) != (min((11414267714798988249ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))));
                            var_41 = ((/* implicit */long long int) min((var_41), (((long long int) arr_52 [i_8] [i_21] [i_22]))));
                            var_42 -= ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) == (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_45 [(short)2] [i_7] [i_7] [i_8] [(short)11] [i_8] [(short)11]))))));
        }
    }
    /* vectorizable */
    for (short i_24 = 0; i_24 < 19; i_24 += 3) /* same iter space */
    {
        arr_73 [(_Bool)1] [i_24] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-24967)) ? (((/* implicit */unsigned long long int) -5740736694160760468LL)) : (2829485425481268750ULL))));
        var_44 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-5581))) | (var_4))));
    }
}
