/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72072
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
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_0 - 4])))) > ((+(((/* implicit */int) (unsigned char)19))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 4] [i_0 + 1])) < ((-(((/* implicit */int) arr_4 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                arr_7 [i_2] [i_0 - 2] = ((/* implicit */signed char) arr_4 [i_2 + 1] [i_1] [i_0]);
                var_19 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)28492)))));
                arr_8 [i_0 - 4] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 2]))));
                arr_9 [i_2] [i_1] = ((_Bool) ((short) 948724381561656677LL));
            }
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3994783111U))))) : (((/* implicit */int) (short)15306)))))));
        }
    }
    var_21 ^= (!(((/* implicit */_Bool) (unsigned short)32768)));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max(((((+(0LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 734805038)) && (((/* implicit */_Bool) (unsigned short)65535)))))))), (((/* implicit */long long int) 194004844U)))))));
        arr_13 [(unsigned char)21] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (268431360) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_3]))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                for (signed char i_6 = 4; i_6 < 20; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_5] [i_7] [i_6] [i_7] [(short)22] [i_7] = ((/* implicit */unsigned short) 4294967295U);
                            arr_26 [i_3] [i_4] [i_6] [i_7] [i_7] [i_5 + 1] [i_5 + 3] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483648U))) && (((/* implicit */_Bool) -983774429))))), (((int) max((((/* implicit */long long int) (unsigned char)236)), (-857287718812555228LL))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [5U] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (3277263181U)))) ? ((-(((/* implicit */int) (short)-15319)))) : (((/* implicit */int) (_Bool)1)))) - (15319)))));
                            arr_30 [i_3] [i_4 - 1] [i_5] [(unsigned short)15] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) 15692096505859562656ULL))))) << ((((-(arr_27 [i_3] [i_3] [i_5] [i_5] [i_8]))) - (364584553U)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_22 [i_8 + 3] [i_8 + 3] [i_8 + 3]), (((/* implicit */long long int) 104851813))))) ? (((long long int) 5893596666107244664LL)) : ((-(7472695717332616915LL)))));
                        }
                        arr_31 [i_4] [i_4] [i_4 - 3] [(unsigned short)19] [i_4 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)30885))))) ? (((/* implicit */unsigned long long int) (((((-(202798807))) + (2147483647))) >> ((((-(((/* implicit */int) arr_18 [i_3] [i_4 - 3])))) - (31042)))))) : (max((3319564696540090141ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17209))))))));
                        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (252819368U)))) ? (arr_16 [i_5] [i_4 - 3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (4294967292U) : (4202862659U))))))));
                        arr_32 [3LL] [i_5] [i_3] [i_3] |= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */long long int) 1667462770)) ^ (1082032787998045946LL))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_27 = -5218808146339227697LL;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (238374988U)));
            arr_42 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 238374988U)) + (138538465099776LL)))) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (signed char)-122))));
            var_29 = ((/* implicit */unsigned short) 3489816108U);
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned int i_14 = 2; i_14 < 11; i_14 += 4) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_9] [(short)18] [i_13])))))));
                            arr_51 [i_15] [i_12] [i_9] [i_12] [i_9] = ((/* implicit */long long int) (-(4056592298U)));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_16 = 2; i_16 < 10; i_16 += 2) 
        {
            for (short i_17 = 1; i_17 < 11; i_17 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) (-(3341458004U)));
                        var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 15360U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17LL]))) : (495396766U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                        /* LoopSeq 2 */
                        for (int i_19 = 2; i_19 < 10; i_19 += 2) 
                        {
                            var_33 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3907231118886560291LL)))))));
                            var_34 = ((/* implicit */short) ((int) arr_50 [i_17 + 1] [i_17] [i_17 - 1] [i_16 + 1] [i_9] [i_9]));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)176))));
                            arr_63 [i_9] [i_17] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)85))));
                        }
                        arr_64 [i_9] [(short)2] [i_17] [i_17] [i_18] [i_17] = ((/* implicit */long long int) ((unsigned int) arr_38 [i_17 - 1] [i_17] [i_16 - 1]));
                    }
                    for (short i_21 = 2; i_21 < 9; i_21 += 2) 
                    {
                        arr_67 [i_17] [i_17 - 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9]))))) ? (((((/* implicit */int) (unsigned short)19038)) + (((/* implicit */int) arr_18 [i_21 - 2] [i_17])))) : ((+(((/* implicit */int) (unsigned char)246))))));
                        var_36 &= ((/* implicit */short) ((int) 3907231118886560291LL));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (short)-32184))) : ((~(((/* implicit */int) (short)32184))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(9903165697748604206ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1895765920U)));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_17 [i_9] [(unsigned char)20] [(_Bool)1])) ^ (((/* implicit */int) (unsigned short)52582)))))))));
                    }
                    var_40 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                {
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (7240229173735035154LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)63)) - (((/* implicit */int) (unsigned short)64382))))) : ((+(-138538465099777LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 3; i_24 < 9; i_24 += 3) 
                    {
                        for (unsigned int i_25 = 2; i_25 < 11; i_25 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned long long int) ((int) (short)3267));
                                var_43 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)61769))));
                                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6232485967473091982LL)) ? (((/* implicit */int) arr_52 [i_9] [i_22] [i_23])) : (((/* implicit */int) (short)-14177))))) ? (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) : (134217727U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_54 [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)86))))))))));
                                arr_78 [i_9] [i_22] [i_23] [i_24] [11LL] [i_9] |= ((/* implicit */unsigned int) (short)14176);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_26 = 3; i_26 < 11; i_26 += 4) 
                    {
                        arr_81 [(_Bool)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_47 [i_23])) % (((/* implicit */int) (unsigned char)179)))) + ((+(((/* implicit */int) (unsigned char)159))))));
                        arr_82 [i_9] [11LL] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94))))) : ((+(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_27 = 0; i_27 < 12; i_27 += 2) /* same iter space */
                        {
                            var_45 = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_86 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_59 [(signed char)8] [i_26 - 1]);
                            var_46 -= ((/* implicit */long long int) (_Bool)1);
                            var_47 = ((/* implicit */short) (unsigned short)65535);
                        }
                        for (unsigned char i_28 = 0; i_28 < 12; i_28 += 2) /* same iter space */
                        {
                            var_48 -= ((/* implicit */short) ((long long int) (signed char)-55));
                            arr_90 [i_28] [i_28] [i_26 - 1] [i_23] [i_22] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned short)51969)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123)))))));
                            var_49 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_61 [i_28] [i_26 - 3] [i_23] [i_22] [i_9]))))));
                            arr_91 [i_9] [i_22] [i_9] [i_26] [i_28] [i_26] [i_22] |= ((/* implicit */signed char) (_Bool)1);
                            arr_92 [i_9] [5U] [i_23] [i_26] [i_28] = ((/* implicit */_Bool) -1834469483);
                        }
                        for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            var_51 ^= ((/* implicit */_Bool) (unsigned char)128);
                            arr_96 [i_22] [i_26] [i_23] [i_22] [i_9] = (short)32341;
                        }
                    }
                    for (short i_30 = 4; i_30 < 8; i_30 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 3297570267U)) % (17179869180LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
                        var_53 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                        var_54 = ((/* implicit */signed char) arr_40 [i_9] [i_22]);
                        var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((signed char) ((arr_33 [i_23]) & (((/* implicit */long long int) 2672788173U))))))));
                        /* LoopSeq 2 */
                        for (short i_31 = 0; i_31 < 12; i_31 += 4) 
                        {
                            var_56 = ((/* implicit */_Bool) ((((unsigned long long int) 1834469483)) >> (((-1834469483) + (1834469486)))));
                            var_57 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3822))) : (2251799813554176ULL)));
                        }
                        for (long long int i_32 = 0; i_32 < 12; i_32 += 2) 
                        {
                            var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65515)) >= (((/* implicit */int) arr_49 [i_9] [i_9] [i_9] [0] [i_9] [i_9] [i_9])))))));
                            var_59 ^= (unsigned short)65465;
                            var_60 = 9223372036854775807LL;
                        }
                    }
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        var_61 = ((_Bool) arr_17 [i_9] [i_22] [i_9]);
                        var_62 = ((/* implicit */unsigned char) ((arr_88 [i_33] [i_22]) ? (((/* implicit */int) (unsigned short)7554)) : ((+(((/* implicit */int) (signed char)-95))))));
                        var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_23] [i_22])) ? (((((/* implicit */_Bool) (unsigned short)40310)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9] [i_9]))) : (1622179137U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [(unsigned char)6] [i_23] [i_22] [6LL] [i_9]))))))));
                        var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13910)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18444492273895997457ULL)))) : ((+(18446744073709551613ULL)))));
                    }
                    arr_108 [i_9] [i_9] [i_23] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_23] [(_Bool)1])) ? (((/* implicit */int) (signed char)-35)) : (1616950943))));
                    arr_109 [i_9] [i_9] [i_9] [i_22] = ((/* implicit */_Bool) (-(arr_60 [i_22] [i_9] [i_9] [i_22] [i_22])));
                }
            } 
        } 
    }
}
