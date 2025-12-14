/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90530
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned short)39419))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62957)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)16320))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)56163)))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 - 1] [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1 + 2] [i_1 - 1]);
                        arr_14 [i_0] [i_1 - 3] [i_0] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_3 - 3] [i_1 + 1])) : (((/* implicit */int) (short)3133))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) var_11)))) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)3)))))));
            var_18 = arr_17 [i_0] [i_4] [(unsigned short)8];
        }
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(short)3] [i_5 - 1])) ? (((/* implicit */int) arr_5 [(unsigned short)1] [i_0])) : (((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) arr_5 [(signed char)10] [i_5 - 1])) : (((/* implicit */int) var_0))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 3; i_6 < 9; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    arr_26 [i_5] [i_7 + 3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_6] [i_5])) <= (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_7 + 2])))) ? (((/* implicit */int) (unsigned short)20345)) : (((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5] [(unsigned short)10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
                    var_19 = ((/* implicit */unsigned short) arr_16 [i_5] [i_6]);
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_5] [i_5] [i_6 + 3])))));
                arr_27 [i_5] [i_5] [i_6] [i_6] = var_7;
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_8] [i_8])) ? (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) arr_1 [i_8] [i_8])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)46842))));
        arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [(signed char)8] [i_8] [i_8])))) : (((/* implicit */int) (signed char)-85))));
    }
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned short) var_13);
        /* LoopSeq 1 */
        for (signed char i_10 = 4; i_10 < 9; i_10 += 4) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_9])) : (((/* implicit */int) arr_9 [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_10 + 3])) <= (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_9 [i_9])) : (((/* implicit */int) arr_9 [i_9]))))));
            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
            arr_35 [i_9] [i_9] [i_10 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65508)) ? (((/* implicit */int) arr_32 [i_9] [i_10 + 3])) : (((/* implicit */int) (unsigned short)49212)))) <= (((/* implicit */int) var_7))));
        }
        /* LoopSeq 3 */
        for (signed char i_11 = 2; i_11 < 11; i_11 += 3) 
        {
            arr_39 [i_9] [i_11] = ((/* implicit */unsigned short) arr_16 [i_9] [i_11]);
            var_25 = ((/* implicit */short) ((unsigned short) arr_10 [i_11 + 1] [i_9] [i_9] [i_9]));
            arr_40 [i_9] [i_11 - 1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((arr_18 [(unsigned short)3]), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)64975)), (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-28)) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-1))));
        }
        for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
        {
            arr_45 [i_9] [i_12 - 2] [(unsigned short)5] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)38797)) ? (((/* implicit */int) (unsigned short)49196)) : (((/* implicit */int) arr_34 [i_9] [i_9] [i_12])))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_12] [i_12])))))) ? (((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_41 [i_9])) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_23 [(unsigned short)9] [(unsigned short)11])))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)56163))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_9] [i_12] [i_9])) : (((/* implicit */int) arr_5 [(short)8] [i_9])))) : (((/* implicit */int) (unsigned short)45092))))));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 1) 
                    {
                        {
                            arr_55 [i_15 - 3] [i_13] [i_14] [i_9] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34970)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551599ULL)))) ? ((+(((/* implicit */int) (unsigned short)26115)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (arr_18 [(short)10])))))) <= (((((((/* implicit */int) (signed char)-66)) <= (((/* implicit */int) (unsigned short)1849)))) ? (((/* implicit */int) arr_44 [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_2 [i_9]))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_12 - 1] [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_6 [i_9]))))) : (((((/* implicit */_Bool) arr_49 [i_14] [i_14] [i_12 - 1] [i_14] [i_15] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_33 [i_13] [i_15]))))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_9] [i_12])) || (((/* implicit */_Bool) arr_24 [i_9] [i_9] [(short)6] [i_15 + 3])))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_34 [(unsigned short)10] [(unsigned short)10] [i_15])) : (((/* implicit */int) arr_20 [i_9] [i_12 - 2] [i_9])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_41 [i_9])))))))))))));
                        }
                    } 
                } 
                arr_56 [(unsigned short)1] [(unsigned short)0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_9] [6ULL] [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_13])) <= (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (signed char)115)))))))) : (((/* implicit */int) ((var_5) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9] [i_13] [i_13]))) : (var_5))))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_9])))) : (((/* implicit */int) arr_17 [i_9] [i_9] [i_13]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (((14053004955642425796ULL) / (arr_12 [i_9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_12)))) : (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned short)65525))))))))))));
            }
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                var_28 = ((/* implicit */short) ((signed char) var_4));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
                    {
                        {
                            var_29 ^= (signed char)108;
                            arr_64 [i_9] [i_17] [i_16] [i_17] [i_17] [(short)8] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)127))) <= (((/* implicit */int) ((signed char) arr_32 [i_12] [i_12])))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned short i_19 = 1; i_19 < 9; i_19 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_19 + 2] [i_19])) ? (((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_11)))))));
            arr_68 [i_19] [i_9] [i_9] = ((/* implicit */unsigned short) (signed char)-66);
            arr_69 [i_9] [i_19 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-113)) <= (((/* implicit */int) var_3))));
        }
        /* LoopSeq 1 */
        for (short i_20 = 4; i_20 < 11; i_20 += 1) 
        {
            var_31 = var_10;
            var_32 = ((/* implicit */signed char) arr_24 [i_20] [i_20] [i_20 - 1] [i_20]);
            var_33 = var_12;
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_9] [i_20])) : (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) (unsigned short)62957)) ? (((/* implicit */int) arr_9 [i_20])) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_24 [i_20] [i_9] [i_20 - 3] [i_20])) : (((/* implicit */int) (signed char)72))))))));
            arr_73 [i_20] [i_20] [i_9] = (unsigned short)39407;
        }
    }
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)62)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((10906438241734820591ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (signed char)28)) <= (((/* implicit */int) (unsigned short)62940))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)2578))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
}
