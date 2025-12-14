/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86199
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (var_17)))))), (((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */long long int) var_2)))), (((var_6) ? (var_8) : (((/* implicit */long long int) var_3)))))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((max((var_1), (((/* implicit */long long int) var_7)))), (max((-1730990495111869663LL), (2021176011855147645LL)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_2)))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (var_14)));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0 + 2] [i_2 - 1] [i_3] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_18))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_1)));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((var_16) >> (((((/* implicit */int) var_18)) - (1445))))))));
                            arr_17 [0LL] [0LL] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((var_11) != (((/* implicit */unsigned long long int) var_9))));
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))));
                            arr_20 [i_0 + 1] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_3)) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            arr_21 [i_0 - 1] [i_2 - 1] [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    {
                        arr_27 [i_0 + 3] [i_2 + 1] [i_0 + 3] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((long long int) var_15))));
                        var_26 = ((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_27 = min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (max((var_8), (((/* implicit */long long int) var_19)))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned char i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_6)) << (((var_1) - (7053151909635613390LL)))))))));
                            var_29 |= ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_8))) - (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (short)-1)) ? (-2225484088132359570LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7)))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))) : (((((/* implicit */_Bool) 1489340055)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_41 [i_0] [i_9] [i_10] [7LL] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) min((18446744073709551615ULL), (1528090478645173333ULL)))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_7))))) : (min((var_11), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_2)))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_13 = 1; i_13 < 13; i_13 += 1) 
        {
            arr_45 [(signed char)10] [i_13 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)164))));
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_50 [i_0] [(_Bool)1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_16))))), (var_4)))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11))))) : (min((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) (unsigned char)79)) ? (1022ULL) : (((/* implicit */unsigned long long int) 3367497570U))))))));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_17))))) ? (min((var_5), (((/* implicit */long long int) var_19)))) : (min((((/* implicit */long long int) var_9)), (var_1))))))));
                arr_51 [8U] [(signed char)13] [i_14] [(short)8] = ((/* implicit */long long int) min((((unsigned char) min(((_Bool)0), ((_Bool)1)))), (max((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3)))))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) - (var_4)))) ? (((((var_6) ? (((/* implicit */unsigned long long int) var_8)) : (var_14))) << (((/* implicit */int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                var_34 = ((/* implicit */int) var_3);
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_9))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_19)), (var_9)))) : ((+(var_8))))))));
                var_36 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) 3978360195U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3904142319U)))), (var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_5)))));
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (((!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_19))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (((long long int) var_11))))) : ((-(var_4))))))));
            }
            arr_55 [i_13 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-11064))));
        }
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */int) max((var_2), (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            for (int i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    {
                        var_39 *= ((/* implicit */unsigned short) max((max((var_5), (var_8))), (((/* implicit */long long int) (-(1040882518))))));
                        var_40 = ((/* implicit */signed char) min((var_15), (var_15)));
                    }
                } 
            } 
        } 
        arr_63 [i_0] [14LL] = ((/* implicit */signed char) min((16695874997811302644ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (unsigned int i_19 = 2; i_19 < 19; i_19 += 1) 
    {
        arr_66 [i_19 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) var_17)), (var_14))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_17)))))))));
        var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1411278475717576794LL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_17))))), (var_5)))));
        arr_67 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_17)) ? (var_10) : (var_11)))))) ? (((((/* implicit */_Bool) ((int) var_6))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (1LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))))))));
        var_42 = ((/* implicit */long long int) ((var_10) < ((+(var_14)))));
    }
    /* LoopSeq 2 */
    for (short i_20 = 2; i_20 < 19; i_20 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_21 = 1; i_21 < 18; i_21 += 3) 
        {
            for (short i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        for (unsigned char i_24 = 2; i_24 < 20; i_24 += 3) 
                        {
                            {
                                arr_81 [i_20] [i_20] [i_23] [i_24 - 2] = ((/* implicit */unsigned long long int) min((((var_6) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) + (2147483647))) << (((var_15) - (1034789333865873251LL))))))));
                                var_43 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (var_10) : (var_4))) : (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))), (((/* implicit */unsigned int) max((max((((/* implicit */int) var_17)), (var_16))), (((/* implicit */int) var_17))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_5), (var_5)))), (min((var_11), (var_10)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_5))) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))));
            arr_84 [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_7))))))));
        }
        /* vectorizable */
        for (unsigned int i_26 = 2; i_26 < 20; i_26 += 2) 
        {
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3209057832U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114)))))));
            /* LoopSeq 1 */
            for (int i_27 = 2; i_27 < 21; i_27 += 2) 
            {
                arr_91 [14ULL] [i_26 - 1] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                arr_92 [i_20] [i_27] |= ((/* implicit */short) (+(var_16)));
            }
            var_47 |= ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) var_9)));
            /* LoopNest 2 */
            for (unsigned int i_28 = 0; i_28 < 22; i_28 += 2) 
            {
                for (signed char i_29 = 2; i_29 < 19; i_29 += 2) 
                {
                    {
                        arr_98 [i_20] [i_20] [i_20] [i_28] [i_28] [i_20] = ((/* implicit */long long int) ((unsigned long long int) var_16));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_3) : (var_3)));
                        var_49 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) ^ (var_9)));
                        arr_99 [i_26] [i_20] [i_29] = ((/* implicit */long long int) ((var_1) <= (var_5)));
                    }
                } 
            } 
        }
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (var_4))))));
    }
    for (short i_30 = 2; i_30 < 19; i_30 += 3) /* same iter space */
    {
        var_51 ^= (!(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_2)))))));
        var_52 = ((/* implicit */int) max((min((((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) (short)8327)) ? (((/* implicit */long long int) -478959691)) : (-9223372036854775802LL)))));
    }
    var_53 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned char) ((_Bool) max((var_14), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned short i_31 = 1; i_31 < 17; i_31 += 4) 
    {
        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)205)), ((short)-27893))))) : (max((((/* implicit */unsigned long long int) var_16)), (var_4)))));
        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_15)))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (var_11))))))));
    }
}
