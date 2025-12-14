/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6751
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
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_10 ^= var_9;
        var_11 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_0 [i_0 + 2] [i_0])))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2136724652)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 1]))) : (-3824412712569274767LL)))))) ? (min((((((/* implicit */_Bool) var_4)) ? (arr_10 [(short)9] [i_2] [i_1] [9LL]) : (var_7))), (((arr_6 [i_0 + 2] [i_0 + 2] [i_1]) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)7] [(unsigned short)7] [i_3 + 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_6))))))))));
                        var_12 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_1] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)25161)));
                        arr_13 [i_3] [i_1] [(signed char)3] [i_1] [i_1] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_0] [i_1])), (var_4)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) var_8))))) - (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_0 [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (long long int i_8 = 4; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_4]))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
                arr_27 [i_4] [(unsigned char)8] [i_4] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)142));
            }
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_25 [i_4] [i_4] [i_5] [i_4] [i_9 + 1]))))) ? ((+(((((/* implicit */int) arr_20 [i_4] [i_4] [i_9] [i_4])) / (((/* implicit */int) (unsigned char)5)))))) : ((-(((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [2])) * (((/* implicit */int) arr_14 [i_4]))))))));
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_4] [i_4] [i_9]))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    arr_32 [i_4] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */short) min((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_0))))), (((arr_20 [i_9 + 2] [i_4] [i_9 - 1] [i_9 - 2]) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_30 [i_4]))))));
                    arr_33 [i_9] [i_5] [i_5] [(_Bool)1] [i_10] &= ((/* implicit */int) arr_17 [i_9]);
                }
            }
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_1)))))) & (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) ^ (((/* implicit */int) var_3))))), ((~(arr_29 [11LL] [i_4]))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 11; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_43 [i_4] = ((/* implicit */_Bool) ((0) / (((/* implicit */int) (unsigned char)214))));
                            var_19 ^= ((/* implicit */int) var_5);
                            arr_44 [i_4] [2LL] = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                            var_20 *= ((/* implicit */signed char) (!(var_3)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (2745637034779835250LL) : (arr_29 [i_11] [i_4])));
            }
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
            {
                var_22 ^= ((/* implicit */unsigned long long int) var_2);
                var_23 = ((/* implicit */long long int) -3);
            }
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) arr_42 [i_4] [i_11]);
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min((arr_17 [4ULL]), (((/* implicit */unsigned short) var_4)))))))) ? (((/* implicit */int) arr_25 [i_16] [(_Bool)1] [i_16] [(unsigned char)2] [i_11])) : (arr_15 [(short)2]))))));
                var_26 = ((/* implicit */unsigned long long int) ((max((-3824412712569274767LL), (var_9))) & (((/* implicit */long long int) (~(min((((/* implicit */int) arr_42 [i_4] [(unsigned char)0])), (var_0))))))));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((arr_36 [i_4] [i_4] [i_4] [i_4]) * (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4800358999993768619LL))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)94))))) : (max((((/* implicit */int) (signed char)119)), (((int) arr_37 [i_4] [i_4] [i_11]))))));
            var_28 ^= ((/* implicit */_Bool) var_2);
            var_29 = ((/* implicit */unsigned int) (+(var_0)));
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_42 [i_4] [i_4])), (arr_18 [i_4])))) ? (((/* implicit */long long int) ((int) arr_19 [i_4] [i_4] [i_4]))) : ((+(arr_34 [i_4])))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) arr_35 [i_4] [i_4]))))));
        var_31 = ((/* implicit */long long int) var_7);
        arr_50 [i_4] [i_4] = min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4)));
    }
    for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            var_32 ^= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_53 [6])) ? (var_2) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_53 [2]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_6)), (((unsigned char) var_0)))))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((long long int) min((arr_52 [(unsigned char)16]), (arr_53 [(_Bool)1])))) & ((-(((((/* implicit */_Bool) var_5)) ? (5852195026515357089LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
            arr_55 [i_17] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_53 [i_17])) <= (((/* implicit */int) arr_53 [i_17])))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) (short)-9085)) * (((/* implicit */int) (short)-26328)))))));
            arr_56 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_8), (var_8))))))) ? (((((/* implicit */_Bool) (unsigned short)58245)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) arr_54 [i_17]))));
        }
        for (long long int i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            var_35 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)223)) == (((/* implicit */int) arr_53 [i_17]))))), (min((((/* implicit */short) arr_54 [i_17])), ((short)-26328)))))), (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)53)) ^ (((/* implicit */int) var_8))))), (min((5434041159082260298LL), (((/* implicit */long long int) var_8))))))));
            arr_61 [i_17] [i_19] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_60 [i_17])), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_1))), (((/* implicit */long long int) ((_Bool) var_3)))));
        }
        var_36 -= ((/* implicit */short) arr_58 [(_Bool)1] [i_17]);
    }
    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        var_37 = ((/* implicit */short) (((((-(max((((/* implicit */long long int) 149037652U)), (5852195026515357083LL))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)16)), (arr_62 [i_20] [i_20])))) <= ((+(((/* implicit */int) arr_63 [i_20] [i_20])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_21 = 3; i_21 < 22; i_21 += 2) 
        {
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((int) (+((-(((/* implicit */int) var_6))))))))));
            arr_66 [i_21] = ((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned char)235), ((unsigned char)20)))), (((int) max((var_1), (((/* implicit */long long int) arr_62 [i_21] [i_20])))))));
            var_39 = min((min((var_5), (((/* implicit */long long int) arr_62 [i_20] [i_20])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_21 - 1] [i_21 + 2])) ? (((/* implicit */int) arr_63 [i_21 - 1] [i_21 + 2])) : (((/* implicit */int) arr_63 [i_21 - 1] [i_21 + 2]))))));
            var_40 = ((/* implicit */_Bool) arr_63 [i_20] [i_21]);
        }
        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((short) ((long long int) min((((/* implicit */unsigned int) var_0)), (134201344U))))))));
            /* LoopNest 3 */
            for (signed char i_23 = 2; i_23 < 21; i_23 += 3) 
            {
                for (signed char i_24 = 0; i_24 < 24; i_24 += 3) 
                {
                    for (unsigned char i_25 = 2; i_25 < 23; i_25 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_20] [i_22] [i_23] [i_24])) >> (((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3)))))) - (235)))));
                            var_43 = (-(var_2));
                            var_44 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)250))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_22])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-19812)))))))));
                            var_45 = ((/* implicit */_Bool) ((unsigned int) max((arr_78 [i_25] [i_24] [i_24] [i_23 + 1] [i_22] [i_20]), (arr_78 [i_20] [i_22] [i_23] [i_24] [i_25 + 1] [11LL]))));
                            arr_79 [i_20] [i_24] [i_23] [i_23] [i_25 - 1] [i_23] [i_25 - 1] = ((/* implicit */unsigned long long int) max((((long long int) var_5)), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_26 = 0; i_26 < 24; i_26 += 2) /* same iter space */
        {
            arr_84 [21U] [i_26] [i_20] = ((/* implicit */unsigned char) (+(4160765927U)));
            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_81 [i_26])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) arr_67 [i_26] [i_20] [i_20])))))))));
        }
        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 2) /* same iter space */
        {
            var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_64 [i_20]))))), ((-(var_5))))))));
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_76 [i_20]), (((/* implicit */unsigned short) (short)12931))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 1302883580U))) > (((/* implicit */int) max((var_8), ((unsigned char)202))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1)), (var_1)))))))));
            var_49 = ((/* implicit */signed char) ((((_Bool) var_2)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_77 [i_27] [i_27] [(short)18] [i_20] [i_20]))))) ? (min((((/* implicit */long long int) var_3)), (-3824412712569274767LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_73 [i_27] [i_27] [i_27] [i_27] [6] [i_20]))))))) : (var_9)));
        }
    }
    var_50 += ((/* implicit */unsigned int) min((((var_5) % (((/* implicit */long long int) ((/* implicit */int) var_8))))), (var_5)));
}
