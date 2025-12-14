/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59562
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */signed char) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((var_10) >= (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((signed char) var_8))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)));
            arr_11 [i_2] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (+(var_1)))))));
        }
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-66), (((signed char) var_0)))))) <= (var_5)));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) var_7)))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_16 *= ((/* implicit */unsigned char) var_8);
                    var_17 = ((/* implicit */unsigned char) ((var_10) != ((~(((((/* implicit */_Bool) var_2)) ? (var_12) : (var_12)))))));
                    var_18 = (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) | (((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    var_19 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((unsigned char) var_6))), (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) var_8)))))) < (((/* implicit */long long int) ((int) ((_Bool) var_10))))));
                    var_20 = ((/* implicit */short) max(((~(((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) var_7))));
                }
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    arr_24 [i_2] [i_4] [i_2] [(short)1] [(short)1] [(short)1] = ((/* implicit */short) ((signed char) ((_Bool) (!(((/* implicit */_Bool) var_2))))));
                    var_21 += ((/* implicit */_Bool) var_3);
                    var_22 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (var_10)))) / (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_23 = var_4;
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        var_24 *= ((/* implicit */signed char) ((var_9) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)15)))))));
                        arr_32 [i_2] [i_2] [i_4] = var_10;
                        var_25 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) ((signed char) var_8))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((5233367092614127987ULL), (((/* implicit */unsigned long long int) (signed char)-35)))))));
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) % (3ULL)));
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_35 [i_2] [i_4] = ((((/* implicit */int) var_4)) < (((((/* implicit */int) var_2)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                var_28 += ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) | (var_0)))));
                arr_36 [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) ((var_0) / (var_0))))), (var_9)));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
        {
            arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */short) min(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) var_0))))))), (max((((/* implicit */short) var_7)), (((short) var_4))))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        {
                            arr_47 [i_2] [i_11] [(unsigned char)9] [i_13] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) & (var_12)))))));
                            var_29 = ((/* implicit */signed char) var_9);
                            arr_48 [(signed char)6] [i_12] [i_12] [i_12] [4] = ((/* implicit */short) min((min((((/* implicit */unsigned int) var_12)), (var_9))), (((/* implicit */unsigned int) ((var_8) << (((var_11) / (var_9))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (short i_17 = 1; i_17 < 12; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_18 = 2; i_18 < 9; i_18 += 2) 
                        {
                            var_30 += ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) var_10)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                            var_31 = ((/* implicit */unsigned char) var_3);
                        }
                        var_32 *= ((/* implicit */int) ((signed char) ((((((/* implicit */int) var_2)) > (var_12))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_9)))))));
                        var_33 += ((/* implicit */unsigned char) ((((/* implicit */int) max(((signed char)54), ((signed char)-98)))) ^ ((+((+(var_1)))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_1))));
            /* LoopSeq 3 */
            for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11)))))));
                            arr_68 [i_20] [i_19] = ((/* implicit */unsigned char) max((((int) (short)372)), (((/* implicit */int) min(((signed char)79), ((signed char)48))))));
                            var_36 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)56)))) / (((/* implicit */int) var_6))))) - (var_9)));
                            var_37 = ((/* implicit */unsigned char) (+(((unsigned long long int) ((var_1) != (((/* implicit */int) var_3)))))));
                            arr_69 [i_2] [(signed char)2] [(unsigned short)3] [(signed char)3] [i_19] = ((/* implicit */signed char) max((((((_Bool) 5)) ? (((((/* implicit */int) var_4)) - (var_10))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_7)))))), (var_12)));
                        }
                    } 
                } 
                arr_70 [i_19] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_3)))));
                /* LoopSeq 3 */
                for (unsigned char i_22 = 4; i_22 < 11; i_22 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned short) var_1);
                    var_39 = ((/* implicit */long long int) var_7);
                }
                for (unsigned char i_23 = 4; i_23 < 11; i_23 += 3) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) + (18446744073709551610ULL))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (unsigned char)1))))))));
                    var_41 += var_6;
                }
                /* vectorizable */
                for (signed char i_24 = 0; i_24 < 13; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        var_42 |= ((/* implicit */unsigned char) var_2);
                        var_43 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-74))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_6)))));
                    }
                    for (long long int i_26 = 2; i_26 < 12; i_26 += 1) 
                    {
                        arr_87 [i_19] [i_26] [i_24] [i_2] [i_2] [i_2] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)65)) < (((/* implicit */int) (signed char)-104))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) <= (((((/* implicit */int) var_3)) % (var_12)))));
                        var_45 = var_5;
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */int) var_6)) >> (((var_1) - (1899800372))))) : (((((((/* implicit */int) (signed char)-6)) + (2147483647))) >> (((((/* implicit */int) (signed char)-51)) + (62)))))));
                        arr_88 [i_19] [i_26] [i_15] [i_19] [i_15] [i_15] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((unsigned char) var_11)))));
                    }
                    var_47 += ((/* implicit */unsigned char) ((var_8) | (((/* implicit */int) ((unsigned char) var_7)))));
                    var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)52)))))));
                }
            }
            for (unsigned char i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                var_49 = ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_3))), (((unsigned char) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-87)))))));
                arr_92 [i_27] [i_27] [(signed char)3] [i_2] = ((/* implicit */short) var_6);
            }
            for (int i_28 = 0; i_28 < 13; i_28 += 4) 
            {
                arr_95 [i_28] = ((/* implicit */int) ((unsigned char) ((long long int) ((var_1) >= (((/* implicit */int) var_7))))));
                var_50 = ((/* implicit */unsigned char) var_2);
                var_51 = ((/* implicit */short) var_9);
            }
            /* LoopNest 3 */
            for (signed char i_29 = 1; i_29 < 9; i_29 += 1) 
            {
                for (short i_30 = 4; i_30 < 9; i_30 += 1) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 2) 
                    {
                        {
                            var_52 = ((unsigned char) (+(min((((/* implicit */unsigned int) var_2)), (var_9)))));
                            var_53 |= max((max((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            arr_103 [i_30] = ((/* implicit */short) var_6);
                            arr_104 [i_31] [i_30] [i_30] [i_15] [i_2] = max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_3))))) == (((((/* implicit */unsigned int) var_8)) / (var_9)))))), (max(((unsigned char)37), (((/* implicit */unsigned char) (signed char)58)))));
                            var_54 = ((/* implicit */signed char) ((((_Bool) ((var_11) / (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */int) var_6)), (var_10))) != ((~(((/* implicit */int) (signed char)24)))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (min((((/* implicit */long long int) var_6)), (var_5)))))));
                        }
                    } 
                } 
            } 
        }
        var_55 = ((((/* implicit */_Bool) ((unsigned char) ((signed char) var_10)))) ? (((long long int) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned int) var_12))))) || ((!(((/* implicit */_Bool) var_3)))))))));
    }
    for (signed char i_32 = 0; i_32 < 20; i_32 += 4) 
    {
        /* LoopNest 3 */
        for (int i_33 = 0; i_33 < 20; i_33 += 1) 
        {
            for (unsigned long long int i_34 = 1; i_34 < 16; i_34 += 2) 
            {
                for (int i_35 = 0; i_35 < 20; i_35 += 4) 
                {
                    {
                        var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)123)) | (((/* implicit */int) (unsigned char)2)))))));
                        arr_117 [i_32] [i_32] [i_32] [i_32] [i_32] = var_10;
                    }
                } 
            } 
        } 
        arr_118 [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_0)))) ? (((/* implicit */unsigned int) var_10)) : (((var_11) & (var_11)))))) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_12)))))))));
        var_57 |= var_2;
    }
    for (unsigned char i_36 = 2; i_36 < 10; i_36 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_37 = 4; i_37 < 10; i_37 += 2) 
        {
            var_58 = ((/* implicit */signed char) (-(((int) (unsigned char)99))));
            arr_124 [(short)5] [(unsigned char)7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) && (((var_4) || (((/* implicit */_Bool) var_7)))))) ? (min((((/* implicit */int) ((unsigned char) var_9))), (max((((/* implicit */int) var_2)), (var_12))))) : (((/* implicit */int) ((_Bool) var_4)))));
            arr_125 [(signed char)2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (var_8)))) % (((var_1) / (((/* implicit */int) var_3)))))));
        }
        arr_126 [i_36] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) max((var_1), (((/* implicit */int) var_4)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_4) ? (((/* implicit */unsigned int) var_1)) : (var_9))))))));
        var_59 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 23ULL))) * (((/* implicit */int) (signed char)72))));
        var_60 = ((/* implicit */long long int) ((int) ((var_0) <= (((/* implicit */unsigned int) var_10)))));
    }
}
