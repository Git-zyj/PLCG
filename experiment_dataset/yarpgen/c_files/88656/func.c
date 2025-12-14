/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88656
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_15 = arr_0 [(signed char)13];
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0] [6U] [(unsigned char)10] &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (5260761422049199843LL))))));
                            var_16 -= ((/* implicit */unsigned int) arr_10 [(short)12] [(short)18] [i_2] [i_3] [i_4 - 1]);
                            var_17 = ((/* implicit */unsigned int) (_Bool)1);
                            var_18 -= ((/* implicit */unsigned short) 237590216);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_6))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) ((arr_5 [i_1]) ? (3897597801U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 2143936897))));
                        var_22 = ((/* implicit */int) (unsigned short)24655);
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 0))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-11))));
        arr_14 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)4994))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0] [(short)6] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 4; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1800200099)) && (((/* implicit */_Bool) max(((signed char)-65), (((/* implicit */signed char) (_Bool)1)))))))), (var_13)));
                            var_26 = ((/* implicit */unsigned char) 3897597805U);
                        }
                        for (signed char i_10 = 4; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            var_27 *= ((/* implicit */int) min((var_5), (((/* implicit */unsigned int) arr_26 [i_5] [i_5] [14LL] [2LL] [i_10]))));
                            var_28 += ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)5))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_29 ^= ((/* implicit */short) ((((/* implicit */int) (short)18988)) != (((/* implicit */int) arr_21 [i_8] [i_8 - 1] [i_8]))));
                            var_30 -= ((/* implicit */int) ((short) ((var_4) > (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) (signed char)-110))))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min(((-(710254161))), (max((((((/* implicit */int) arr_23 [i_5] [(unsigned char)15] [i_7] [i_8])) - (((/* implicit */int) (signed char)-19)))), (((((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_7] [i_5] [i_8] [(signed char)16])) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (_Bool)1)))))))))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (~((-(((/* implicit */int) (signed char)112)))))))));
                        }
                    }
                } 
            } 
        } 
        var_33 ^= ((/* implicit */signed char) var_0);
        var_34 += ((/* implicit */unsigned int) var_13);
    }
    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 3; i_13 < 15; i_13 += 3) 
        {
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)5)), (arr_3 [i_12] [(unsigned short)14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18989)) | (817113562)))))))));
            var_36 += ((((/* implicit */_Bool) (~(var_10)))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_13 + 3] [i_13 + 2] [18ULL])), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        {
                            var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-111)), (arr_37 [i_13 - 2] [i_13] [i_14])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)13538)) : (((/* implicit */int) (signed char)-107))))) : (var_5)));
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
                {
                    var_39 -= ((/* implicit */signed char) max(((short)-18996), (((/* implicit */short) (_Bool)1))));
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((max((((/* implicit */long long int) (short)-18989)), (4463864348716445637LL))) ^ (((/* implicit */long long int) min(((~(var_9))), (((/* implicit */unsigned int) ((signed char) (signed char)90)))))))))));
                }
                for (signed char i_18 = 0; i_18 < 18; i_18 += 3) /* same iter space */
                {
                    arr_51 [i_13] [i_12] [(signed char)0] [(unsigned char)13] [(short)12] = min((arr_43 [i_12] [i_13] [i_13] [(short)7]), (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_19 [(signed char)17])) : (((((/* implicit */int) arr_11 [i_13])) - (((/* implicit */int) (signed char)118)))))));
                    var_41 &= ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (short)28157)))));
                }
                var_42 &= ((/* implicit */_Bool) arr_38 [(unsigned char)12] [i_13 - 3] [i_14] [i_14]);
                var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                var_44 += ((/* implicit */short) arr_5 [(signed char)8]);
            }
        }
        var_45 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))) != (3897597801U))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (2746833550151778346ULL))) : (((/* implicit */unsigned long long int) max((arr_15 [i_12] [(signed char)12]), (((/* implicit */unsigned int) (short)-28158)))))));
        /* LoopSeq 3 */
        for (short i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 4; i_20 < 15; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    {
                        var_46 ^= ((/* implicit */unsigned int) (-(((min((11022981412494252839ULL), (((/* implicit */unsigned long long int) -4463864348716445637LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_12] [(signed char)0])))))));
                        var_47 *= ((/* implicit */unsigned long long int) (unsigned short)53179);
                        var_48 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_3 [i_19] [(unsigned char)7]), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-22208)), (1956214478U))))))), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned long long int) 1816262630U)) : (97573901362429516ULL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                for (short i_23 = 3; i_23 < 17; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        {
                            var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (+(arr_62 [i_23 + 1] [(short)4]))))));
                            var_50 -= ((/* implicit */unsigned short) arr_50 [8LL] [8LL] [i_22] [8LL] [i_12]);
                            var_51 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_28 [(_Bool)1] [i_23 - 2] [(_Bool)1] [i_23 - 1] [i_23 - 1] [i_23 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_25 = 0; i_25 < 18; i_25 += 3) /* same iter space */
        {
            var_52 = ((/* implicit */unsigned long long int) (signed char)-118);
            /* LoopNest 3 */
            for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                for (unsigned int i_27 = 4; i_27 < 16; i_27 += 3) 
                {
                    for (unsigned short i_28 = 0; i_28 < 18; i_28 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */signed char) ((unsigned short) arr_77 [6U] [i_12] [i_12] [i_12] [(signed char)3] [14LL] [i_28]));
                            var_54 = ((/* implicit */short) ((((/* implicit */int) ((2147483647) != (var_2)))) & (((/* implicit */int) (short)-32712))));
                            var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_57 [i_26] [i_27] [i_27 - 2] [i_27 - 3])))))));
                        }
                    } 
                } 
            } 
            var_56 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_18 [i_12] [(short)8] [6U])))) ? (((/* implicit */int) (_Bool)1)) : ((~(2147483647)))));
        }
        for (long long int i_29 = 0; i_29 < 18; i_29 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_30 = 0; i_30 < 18; i_30 += 3) 
            {
                for (long long int i_31 = 0; i_31 < 18; i_31 += 3) 
                {
                    for (int i_32 = 3; i_32 < 16; i_32 += 3) 
                    {
                        {
                            var_57 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) -1352492162)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1))))));
                            var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) ((329853099U) - (((2920377684U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-28164))))))))));
                            var_59 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) (~(8408597893779630626LL))))), (arr_64 [(signed char)13] [i_30] [i_32])));
                        }
                    } 
                } 
            } 
            var_60 &= ((/* implicit */long long int) (-(((/* implicit */int) (short)28165))));
            arr_89 [i_29] [i_29] [i_12] = (short)-13519;
        }
        var_61 *= ((/* implicit */signed char) ((unsigned int) max((((unsigned long long int) arr_16 [i_12])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9)) && (((/* implicit */_Bool) 3298429254U))))))));
        var_62 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_76 [6ULL] [i_12] [i_12] [6ULL])), (2332161327970228462LL)))) ? (((int) (signed char)15)) : (max((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-6)))), ((-(((/* implicit */int) (short)-19216)))))));
    }
    var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) (short)-28171))));
    var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28135)))))));
    /* LoopNest 2 */
    for (short i_33 = 3; i_33 < 9; i_33 += 3) 
    {
        for (short i_34 = 0; i_34 < 12; i_34 += 3) 
        {
            {
                var_65 *= ((/* implicit */unsigned long long int) min(((-(arr_3 [i_33 - 3] [i_33 - 3]))), ((-(arr_3 [i_33 - 3] [i_33 - 1])))));
                /* LoopNest 3 */
                for (int i_35 = 0; i_35 < 12; i_35 += 3) 
                {
                    for (int i_36 = 0; i_36 < 12; i_36 += 3) 
                    {
                        for (unsigned int i_37 = 0; i_37 < 12; i_37 += 3) 
                        {
                            {
                                var_66 -= ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) ((unsigned int) 2147483634)))));
                                var_67 = ((/* implicit */short) max((var_67), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_68 *= ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)28195)), ((unsigned short)7770)))))))));
                /* LoopSeq 2 */
                for (signed char i_38 = 4; i_38 < 10; i_38 += 3) 
                {
                    var_69 = ((/* implicit */short) max(((-(((var_13) ^ (((/* implicit */unsigned long long int) 4076586426U)))))), (((/* implicit */unsigned long long int) (short)-5513))));
                    var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-32712)), (max((((/* implicit */long long int) (short)-28201)), (97868274796464708LL)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) arr_91 [i_33])))) <= (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (short)19207)))))))))))));
                    var_71 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_84 [(unsigned short)11] [i_34] [i_34] [(unsigned short)11]))))) : ((-(-2992268745255504016LL)))));
                }
                for (signed char i_39 = 0; i_39 < 12; i_39 += 3) 
                {
                    arr_112 [i_33 - 3] [i_34] [i_34] [i_34] = ((/* implicit */int) var_4);
                    var_72 += ((/* implicit */short) (unsigned short)56127);
                    /* LoopNest 2 */
                    for (unsigned long long int i_40 = 0; i_40 < 12; i_40 += 3) 
                    {
                        for (signed char i_41 = 0; i_41 < 12; i_41 += 3) 
                        {
                            {
                                var_73 = ((/* implicit */unsigned char) min((var_73), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) max((((/* implicit */int) arr_80 [i_33])), (var_2)))) * ((-(var_9))))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)1895))))))));
                                var_74 = ((/* implicit */unsigned long long int) (((~(((long long int) (signed char)15)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((_Bool) (signed char)45)))))));
                            }
                        } 
                    } 
                }
                var_75 += ((/* implicit */int) var_14);
            }
        } 
    } 
}
