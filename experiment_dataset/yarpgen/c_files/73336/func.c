/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73336
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
    var_13 ^= ((/* implicit */signed char) min((min((var_7), (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_9)))))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), ((-(var_9))))))));
    var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((((_Bool)1) ? (var_9) : (((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) (short)31878)) ? (((/* implicit */int) var_11)) : (var_9))))))));
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 ^= arr_2 [i_0];
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */signed char) var_6);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) var_12);
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_4] [i_1])) ? (((/* implicit */long long int) arr_6 [i_3 + 2] [i_3 + 1] [i_3 + 1])) : (2199023255551LL))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((5261926829531788935LL) << (((((-4652728096856892162LL) + (4652728096856892220LL))) - (58LL)))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [(signed char)21] [i_6] = ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) max((((/* implicit */signed char) var_5)), (max(((signed char)-11), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) (_Bool)1)));
                    var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_20 [i_6]))))));
                    arr_25 [i_6] = min((((((/* implicit */_Bool) var_12)) ? (arr_23 [i_5] [i_6 - 2] [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_7]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_5 - 1] [i_6 - 2]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (+(var_0)));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_22 [i_5])))) == (((/* implicit */int) arr_20 [18LL])))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-1))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))), (arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))))));
        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)-1)));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    arr_30 [i_9] [i_8] [i_5] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned int) (short)-31880)))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) ^ (arr_23 [i_5 - 1] [i_5 - 1] [i_9]))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_8] [21U] = ((/* implicit */unsigned int) ((signed char) (((_Bool)1) ? (2843211726544858416LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (short)-16476)) : (((/* implicit */int) (short)31878))))))));
                        var_25 ^= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_11] [i_11] [8U])))))) <= (arr_27 [i_9])));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1596)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_27 [i_5 - 1])));
                        }
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */signed char) min(((short)-1), (((/* implicit */short) (unsigned char)255))));
                            arr_43 [i_12] [i_12] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((short)31881), (((/* implicit */short) (_Bool)1))))), (var_7)));
                            arr_44 [i_12] = var_10;
                            arr_45 [i_5 - 1] [i_12] [i_12] = ((/* implicit */short) ((signed char) min((((/* implicit */short) (_Bool)1)), ((short)-31879))));
                            var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_31 [i_12 - 1])) > (((/* implicit */int) arr_22 [i_12 + 3])))) ? ((~(var_12))) : (min((((/* implicit */unsigned int) (signed char)-78)), (4294967295U)))));
                        }
                        for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8]))) <= (((((/* implicit */_Bool) arr_34 [i_5] [i_8] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) arr_47 [i_10])) ? (((/* implicit */long long int) arr_40 [i_13])) : (var_1)))))));
                            var_31 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_27 [i_9]) >> (((var_9) - (1716222964)))))) ? (arr_47 [i_5 - 1]) : (min((arr_47 [(_Bool)1]), (((/* implicit */unsigned long long int) var_2)))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_5])) & (((/* implicit */int) arr_18 [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13])) ? (7915432832857754514ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31975)) ? (arr_29 [i_13] [i_10] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5 - 1] [i_8] [i_10] [i_10] [i_9]))))))))));
                            arr_48 [i_13] [i_10] [i_10] [i_9] [i_8] [i_5 - 1] [i_13] = ((/* implicit */signed char) arr_23 [i_5] [i_5 - 1] [i_9]);
                        }
                        var_32 = ((/* implicit */unsigned int) ((11415607312544825335ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        arr_52 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1] = ((/* implicit */short) (unsigned char)80);
                        arr_53 [i_5] [i_14] [i_9] [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_40 [i_14]);
                        var_33 ^= (unsigned char)119;
                        var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_50 [i_5 - 1] [i_9] [i_9])) < (((((/* implicit */_Bool) 1095064272317165608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_14]))) : (12500033235547160338ULL)))));
                        var_35 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_10))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 2; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_36 ^= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))) >> (((((((/* implicit */_Bool) (short)-16487)) ? (((/* implicit */int) arr_39 [i_5] [i_8] [i_9] [i_15] [i_16])) : (((/* implicit */int) (short)16294)))) + (36))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_58 [i_5 - 1] [i_9] [i_15] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_16 - 2] [i_8] [i_5 - 1] [i_16] [i_16 + 1])) + (((/* implicit */int) arr_42 [i_16 + 1] [i_8] [i_5 - 1] [i_15] [i_5 - 1]))));
                                arr_59 [i_15] = ((/* implicit */signed char) ((unsigned int) 15442644663201608379ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        var_37 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((11671992178806528035ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) var_9)) : (3004099410507943245ULL))))));
        var_38 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_12)))) ? ((-(var_9))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) (short)-13115)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_4)))))))));
    }
    for (signed char i_18 = 1; i_18 < 13; i_18 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            var_39 ^= ((/* implicit */unsigned int) var_1);
            arr_67 [i_18 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-1))));
        }
        var_40 ^= ((/* implicit */signed char) min(((-((-(3004099410507943236ULL))))), (((/* implicit */unsigned long long int) (short)24337))));
    }
    /* LoopSeq 2 */
    for (short i_20 = 0; i_20 < 11; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_41 += ((/* implicit */signed char) (((-(max((arr_6 [i_20] [i_20] [i_20]), (((/* implicit */int) arr_57 [i_20])))))) | (((/* implicit */int) var_4))));
                        var_42 = ((/* implicit */signed char) ((min((7380575004914791662ULL), (((/* implicit */unsigned long long int) (signed char)-1)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_61 [i_23]), (((/* implicit */unsigned long long int) var_11)))) == (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) arr_40 [i_20])) : (15442644663201608401ULL)))))))));
                    }
                } 
            } 
        } 
        var_43 ^= ((/* implicit */signed char) min((arr_1 [i_20]), (((/* implicit */unsigned long long int) min(((signed char)17), ((signed char)21))))));
        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) var_12))));
        var_45 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
        var_46 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (max((((/* implicit */unsigned int) var_4)), (var_8)))));
    }
    for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 2) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 2) 
                {
                    {
                        var_47 ^= ((/* implicit */signed char) (+((+(var_7)))));
                        arr_87 [i_24] [i_24] [i_25] [i_26 - 1] [i_26 - 1] [i_25] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_80 [i_25] [i_25])) ? (max((((/* implicit */unsigned long long int) var_11)), (arr_72 [i_24] [7LL]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-31984))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_7)))) == (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (arr_12 [i_24] [i_24] [i_24] [i_24])))));
        var_49 &= ((/* implicit */signed char) var_2);
    }
}
