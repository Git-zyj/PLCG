/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92662
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
    var_10 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((1621776301433616482ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) 1621776301433616504ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23274))) : (1621776301433616493ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_4))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17115)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) 1621776301433616494ULL)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                                var_13 ^= ((/* implicit */signed char) ((unsigned int) (((-(((/* implicit */int) (unsigned short)20108)))) / (((((/* implicit */int) (unsigned short)23258)) + (3))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = ((/* implicit */int) ((_Bool) (-(arr_12 [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((min((((/* implicit */long long int) var_3)), (arr_20 [i_2] [i_2 - 1] [i_2 - 1] [i_6 - 1] [i_6]))), (min((((/* implicit */long long int) (((_Bool)1) ? (arr_12 [i_6] [i_1]) : (((/* implicit */int) (signed char)56))))), (min((9223372036854775807LL), (((/* implicit */long long int) arr_12 [i_6] [i_2 + 1]))))))));
                                arr_23 [i_0] [i_6] = ((/* implicit */short) 15484965945518715570ULL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [(unsigned char)22])))))))) : (min((((/* implicit */long long int) ((signed char) var_8))), ((+(arr_11 [i_0] [i_0] [i_1] [i_1])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_0] [24U])) ^ (var_9))) > (((int) arr_19 [i_0] [(unsigned char)13] [i_0] [i_2] [i_7] [i_7]))));
                        arr_26 [i_1] [i_7] [i_2 + 1] [i_7] [i_0] = ((/* implicit */int) arr_14 [11LL]);
                        var_17 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)28734))))));
                    }
                    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */_Bool) -4370376655438461496LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18713))) : (12969390988204492782ULL)))))))));
                        var_19 = ((/* implicit */int) ((signed char) -5349523786902164856LL));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((long long int) arr_12 [i_8] [i_2 + 2]));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((-2116207417), (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_22 = ((((/* implicit */int) (short)-2081)) == (((/* implicit */int) (short)-17130)));
                        arr_35 [i_0] [i_0] [i_0] [i_1] [i_2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)34)) ? (1621776301433616504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        var_23 *= ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_0] [i_1] [i_2] [i_10] [i_2]));
                        arr_36 [i_0] [i_1] [i_0] [i_2 + 2] [i_2 + 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_32 [i_0] [i_1] [15ULL] [i_10]))))) ? (((int) var_5)) : (((/* implicit */int) arr_31 [i_0] [i_10 - 1] [i_2 - 2] [i_10] [i_2 - 2]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            for (int i_13 = 4; i_13 < 13; i_13 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) max(((unsigned char)64), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (452284694) : (((/* implicit */int) (signed char)(-127 - 1)))))) <= (min((1621776301433616504ULL), (arr_25 [i_12] [17ULL] [17ULL] [17ULL] [i_12] [17ULL]))))))));
                    arr_43 [13] [13] [i_13 - 3] = ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_19 [i_13 - 3] [i_13 - 3] [i_13] [i_13] [i_13 - 4] [i_13 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13 - 3] [i_13 - 1] [i_13]))) : (67108352U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_30 [i_13 - 3] [i_13 - 1] [i_13])))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_3 [i_11] [i_11])) : (((((/* implicit */_Bool) arr_22 [i_11] [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_11] [7] [i_12] [i_12])))))))))));
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) arr_34 [21ULL] [i_13 - 4] [i_13] [i_12]))), (var_2)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 12; i_15 += 3) 
            {
                {
                    var_27 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_24 [i_11])) ? (((/* implicit */int) arr_24 [i_11])) : (((/* implicit */int) arr_24 [i_11])))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) + (((/* implicit */int) ((unsigned char) arr_18 [i_17 + 1]))))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((min((((/* implicit */int) min(((short)28734), (((/* implicit */short) var_6))))), (max((arr_8 [i_11] [i_11] [19ULL]), (((/* implicit */int) var_4)))))) >> (((max((((/* implicit */int) var_6)), ((((_Bool)1) ? (2) : (((/* implicit */int) (unsigned char)47)))))) - (31))))))));
                                var_30 = ((/* implicit */int) ((16824967772275935117ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 532707079)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17866885118691621116ULL))))) : (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_3))))))))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (2527910753U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9)))))) ? (var_5) : ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0)))))))));
                                var_32 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-21207)), (5494166791993438537LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_54 [i_11] = ((/* implicit */unsigned long long int) (unsigned short)46342);
    }
    for (long long int i_18 = 4; i_18 < 11; i_18 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_19 = 1; i_19 < 11; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned short i_21 = 2; i_21 < 12; i_21 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) ((short) 1621776301433616494ULL));
                        var_34 = ((/* implicit */long long int) var_4);
                        /* LoopSeq 1 */
                        for (short i_22 = 1; i_22 < 12; i_22 += 3) 
                        {
                            var_35 = ((/* implicit */int) arr_56 [i_18 + 1]);
                            arr_67 [(unsigned short)7] [i_19] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_62 [(unsigned short)10] [(unsigned short)10] [i_20]) ? (((/* implicit */int) arr_19 [i_18] [20ULL] [i_18] [i_22] [i_22 - 1] [i_22])) : (((/* implicit */int) (unsigned short)46348))))))) ? ((+(((long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_20])))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)60)), ((short)17133)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)23274))))) && (((/* implicit */_Bool) ((signed char) var_2)))))) : (((((/* implicit */_Bool) arr_20 [i_22 - 1] [i_22] [i_22] [i_22] [i_21 - 1])) ? (((((/* implicit */_Bool) -3791395530246501006LL)) ? (arr_29 [i_18] [i_19] [i_20] [i_19] [i_22]) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) min(((unsigned char)226), (((/* implicit */unsigned char) var_0)))))))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) max(((~(arr_50 [i_18] [i_18] [i_19] [i_18]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9931909645578356276ULL)))))) | (((((/* implicit */_Bool) (unsigned short)19193)) ? (1801735773U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            var_38 = (-(arr_20 [i_18 + 2] [i_19] [i_19 - 1] [i_19 + 1] [i_19]));
        }
        for (unsigned short i_23 = 4; i_23 < 10; i_23 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_24 = 2; i_24 < 12; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 2; i_26 < 10; i_26 += 3) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (unsigned short)7680)) : (601371489))), (((/* implicit */int) ((((/* implicit */int) var_3)) > (arr_40 [i_18 + 1]))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                            var_41 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_26 + 3] [i_23 + 2] [i_18 - 2])) || (((/* implicit */_Bool) arr_4 [i_26 - 2] [i_23 - 4] [i_23])))) ? (((/* implicit */int) ((unsigned short) (unsigned short)8151))) : (((/* implicit */int) max((arr_4 [i_26 - 1] [i_23 + 2] [i_23]), (arr_4 [i_26 + 2] [i_23 + 2] [(unsigned short)10]))))));
                        }
                    } 
                } 
            } 
            arr_77 [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (2147483647)))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) var_1))))))));
            var_42 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_6 [i_18 - 2]))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
        {
            /* LoopNest 2 */
            for (short i_28 = 4; i_28 < 12; i_28 += 2) 
            {
                for (signed char i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    {
                        var_43 -= ((/* implicit */_Bool) max((arr_85 [i_18] [i_28 - 2] [i_18]), (((/* implicit */unsigned long long int) arr_3 [i_18] [(_Bool)1]))));
                        var_44 = ((/* implicit */int) var_1);
                        var_45 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_34 [i_28 - 1] [i_28 - 3] [i_28 - 2] [i_18 + 1]), (((/* implicit */unsigned int) var_6)))))));
                        var_46 = ((/* implicit */unsigned int) ((unsigned char) 70368727400448LL));
                    }
                } 
            } 
            var_47 = ((/* implicit */int) min((arr_57 [i_18 - 3]), (((/* implicit */long long int) (+(2373257774U))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_30 = 0; i_30 < 13; i_30 += 4) 
        {
            for (int i_31 = 1; i_31 < 12; i_31 += 1) 
            {
                {
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 402509948)) ? (((/* implicit */long long int) 7U)) : (-70368727400434LL)));
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? ((-(arr_90 [i_18 + 2]))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((short) (unsigned short)19193))))))));
                    var_50 = ((/* implicit */unsigned char) arr_27 [i_18] [i_30] [i_30] [i_30] [i_30]);
                    var_51 = ((/* implicit */unsigned long long int) ((int) ((int) arr_49 [i_18] [i_31 + 1] [i_18] [12] [i_18])));
                }
            } 
        } 
        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4266)) ? (8914231493481226280ULL) : (8959382362608611488ULL)));
        var_53 = ((/* implicit */signed char) ((((/* implicit */int) arr_84 [i_18])) | (min((((((/* implicit */int) arr_38 [i_18])) / (((/* implicit */int) arr_24 [i_18])))), (((/* implicit */int) ((unsigned char) 17916868966123349772ULL)))))));
    }
}
