/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8774
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)52158)) != (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (unsigned short)52158)))))))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)92)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))));
            var_16 = ((/* implicit */short) var_5);
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_17 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (unsigned short)52155)) : (((/* implicit */int) arr_7 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2])))))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)49152)) & (((/* implicit */int) (signed char)-112))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] [6U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)52158))))) ? ((+(((/* implicit */int) arr_12 [(short)0] [i_2] [(signed char)12] [(short)5] [i_2])))) : (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0])))));
                    arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) 0LL)));
                    arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (((~(((/* implicit */int) (signed char)2)))) & (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [i_0] [i_4])) != (((/* implicit */int) (short)5023))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 242941113U)))))));
                    arr_16 [8U] [8U] [i_2] [i_2] [3LL] [i_2] &= ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_4])))));
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (arr_9 [i_0] [i_3] [(short)4])))) ? (((((/* implicit */int) (signed char)111)) & (((/* implicit */int) (short)-26572)))) : ((-(var_5)))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) (short)0)))));
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) var_10)) >> (((/* implicit */int) (signed char)30))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_3] [i_7] [i_7] [i_7] [i_2])) != (((/* implicit */int) var_2)))))))));
                        var_25 = ((/* implicit */long long int) ((int) ((((/* implicit */int) (signed char)-27)) + (2082687064))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(var_9))))));
                        var_27 = ((/* implicit */unsigned char) ((signed char) arr_21 [i_7 - 1] [i_2] [i_3] [(unsigned short)4] [i_7 - 3] [i_5] [i_0]));
                    }
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)17754)) : (-2082687065)));
                }
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((arr_0 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))))));
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_0])))))));
            }
        }
        var_31 = ((/* implicit */long long int) max((var_31), ((~(arr_20 [i_0] [i_0] [i_0] [5LL] [(short)12])))));
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_32 += ((/* implicit */long long int) ((short) max((arr_24 [i_8] [i_8]), (((arr_24 [i_8] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_25 [16LL]))))))));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-89)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26572))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)7))))))))));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_8] [i_8]))));
            var_34 = ((/* implicit */signed char) arr_27 [i_8]);
            var_35 = ((/* implicit */signed char) (((+(var_9))) / (((/* implicit */int) ((((/* implicit */int) arr_28 [i_8] [i_8])) <= (((/* implicit */int) arr_28 [i_8] [i_8])))))));
            arr_30 [i_9] [14LL] |= ((/* implicit */unsigned char) ((885575855) << ((((~((~(((/* implicit */int) (short)684)))))) - (683)))));
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_36 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_31 [i_8])) ? (var_9) : (((/* implicit */int) (signed char)2))))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_8] [i_10] [i_10])) ? (arr_27 [i_10]) : (((/* implicit */int) arr_34 [i_8] [i_10] [i_10])))))));
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_5))));
                var_39 = ((/* implicit */unsigned char) (-(arr_24 [i_8] [i_8])));
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 3; i_13 < 24; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */long long int) min((var_40), ((-(-8369858678853488016LL)))));
                            arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_8] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) ((unsigned char) 959861999U))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (short)32324)))))));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_8] [i_8])))))));
                        }
                    } 
                } 
                var_42 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-2048)) || (((/* implicit */_Bool) (unsigned char)180)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18423)))))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        {
                            arr_53 [i_8] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-64)) < (((/* implicit */int) (unsigned char)238))));
                            var_43 += ((/* implicit */short) (~(((/* implicit */int) arr_43 [i_15] [i_15] [i_10] [i_15] [i_15] [i_16]))));
                            var_44 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_51 [i_8] [i_8])))) ? (((/* implicit */int) (short)-32324)) : ((-(((/* implicit */int) (unsigned char)53))))));
                            var_45 = ((/* implicit */long long int) ((unsigned char) arr_28 [i_8] [(unsigned char)16]));
                        }
                    } 
                } 
                var_46 = ((/* implicit */int) 242941113U);
            }
            /* LoopSeq 2 */
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8] [17])) ? (((/* implicit */int) (unsigned short)48087)) : (((/* implicit */int) arr_39 [i_17] [i_8] [i_8] [i_8]))));
                var_48 = ((/* implicit */unsigned char) ((signed char) (signed char)30));
            }
            for (short i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 24; i_19 += 4) 
                {
                    for (short i_20 = 1; i_20 < 23; i_20 += 4) 
                    {
                        {
                            var_49 |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)234))));
                            var_50 -= arr_62 [(short)19] [i_18] [i_19 + 1] [i_18] [(short)3] [20U];
                            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) -2421267512818117353LL)))));
                            arr_67 [9LL] [(unsigned char)3] [i_8] [(unsigned char)3] [i_8] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_54 [i_8] [i_18 - 1]))));
                        }
                    } 
                } 
                arr_68 [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) 643711124))));
                /* LoopSeq 2 */
                for (long long int i_21 = 4; i_21 < 23; i_21 += 4) 
                {
                    var_52 = ((/* implicit */unsigned short) (short)-9147);
                    var_53 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)30)) - (((/* implicit */int) (unsigned char)239))))) : (var_7)));
                }
                for (unsigned char i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    arr_73 [i_8] [i_18] [i_10] [(short)6] [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_59 [i_8] [(unsigned short)16] [(unsigned char)24] [i_22] [i_8])) ? (((/* implicit */int) var_12)) : (var_9)))));
                    var_54 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((~(-1074255351))) : (((/* implicit */int) arr_47 [i_8] [i_10] [i_10] [i_10]))));
                }
                var_55 &= ((/* implicit */signed char) (short)-9149);
            }
        }
    }
    for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_24 = 4; i_24 < 19; i_24 += 3) 
        {
            for (long long int i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                {
                    arr_82 [i_23] [i_23] [i_25] |= ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_47 [i_24 - 3] [i_24 - 3] [i_24 + 3] [i_25])))));
                    var_56 -= ((/* implicit */unsigned char) var_0);
                    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_70 [i_23] [(unsigned char)24] [i_23] [i_23])))) - (((/* implicit */int) var_10)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        arr_87 [i_23] [(short)13] [(short)13] [i_26] [i_26] = ((short) (short)(-32767 - 1));
                        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((var_5) % (((/* implicit */int) (short)4872)))))));
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)46)) << (((/* implicit */int) var_0))))) ? (((-687275054) * (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_69 [i_23] [i_23] [i_25] [i_26]))));
                        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (var_1) : (((/* implicit */long long int) var_5)))))));
                    }
                    for (signed char i_27 = 0; i_27 < 22; i_27 += 2) 
                    {
                        var_61 = ((/* implicit */unsigned char) (((-((-(2082687064))))) - (((/* implicit */int) (unsigned char)0))));
                        /* LoopSeq 1 */
                        for (unsigned char i_28 = 0; i_28 < 22; i_28 += 2) 
                        {
                            var_62 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) (unsigned short)24))) : (((/* implicit */int) ((signed char) var_5)))))) + (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)9753))))) ? (((((/* implicit */_Bool) (signed char)4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))))) : (arr_77 [i_24] [i_28])))));
                            arr_92 [i_28] [i_27] [1LL] [i_24] [i_24] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)4))))) ? (((/* implicit */long long int) arr_83 [i_25])) : (arr_79 [i_24 + 3] [i_24 - 1] [i_24 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_23])) ? (((((/* implicit */_Bool) 4052026182U)) ? (((/* implicit */int) var_12)) : (arr_56 [i_23] [16U] [i_25] [i_23]))) : (((/* implicit */int) ((signed char) arr_61 [i_23] [i_23] [i_25] [i_25] [(short)20])))))) : (arr_36 [i_23] [i_23] [i_23])));
                            var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) (signed char)107))));
                            var_64 *= ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_1), (var_4))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)0)))) - (65388)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max(((short)28446), (arr_60 [i_27] [i_24] [i_25] [i_27] [i_27] [(unsigned char)22]))))))) : (arr_54 [i_23] [i_24 + 2])));
                            var_65 -= ((/* implicit */signed char) (short)-717);
                        }
                    }
                    for (signed char i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
                    {
                        var_66 = ((/* implicit */signed char) max((var_66), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
                        arr_95 [i_29] [i_24] [i_24] [i_23] [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_40 [i_23] [i_24] [i_25] [i_29] [i_25]))));
                        var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) arr_88 [i_23] [i_23] [i_23] [i_25] [i_25]))))))));
                    }
                    for (signed char i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
                    {
                        var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) ((((/* implicit */_Bool) 242941113U)) ? (((var_8) - (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) var_5)))))));
                        var_69 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */int) arr_80 [i_24 + 3])) : (((/* implicit */int) arr_81 [9U] [i_30] [i_25] [i_24 - 3]))))));
                        var_70 = ((/* implicit */signed char) ((unsigned short) (unsigned char)0));
                        var_71 |= ((/* implicit */unsigned char) arr_99 [i_23] [17]);
                        var_72 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_74 [i_24 + 3] [i_24 + 3])), (arr_54 [i_24 + 3] [i_24 - 4]))))));
                    }
                    var_73 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)51)) & (((/* implicit */int) arr_45 [i_24] [i_25]))))) ? (max((((/* implicit */int) var_12)), (-1597346988))) : ((+(((/* implicit */int) arr_86 [i_23] [i_23] [(signed char)2] [i_23])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_31 = 3; i_31 < 21; i_31 += 4) 
        {
            for (short i_32 = 0; i_32 < 22; i_32 += 3) 
            {
                for (signed char i_33 = 0; i_33 < 22; i_33 += 2) 
                {
                    {
                        var_74 = ((((((/* implicit */_Bool) var_8)) ? (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_91 [i_32] [i_32] [i_32] [i_33] [i_33] [i_32]))))) : (((((/* implicit */long long int) 0U)) | (8012890051810832362LL))))) / ((((!(((/* implicit */_Bool) (signed char)87)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)189)))) : (var_7))));
                        var_75 += ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) (short)-28447)))))) && ((!(((/* implicit */_Bool) arr_37 [i_31 - 3] [i_31 + 1] [i_31 - 2] [i_31]))))));
                        arr_109 [i_32] [7LL] |= ((/* implicit */short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_70 [i_31] [i_31] [i_31 - 2] [i_31]))))) ? (((long long int) ((((/* implicit */_Bool) arr_106 [i_23] [i_31 - 1] [(signed char)4] [(short)16])) ? (arr_54 [i_23] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) (short)-26797)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (unsigned short)48362)) : (((/* implicit */int) arr_74 [(signed char)1] [i_31])))))));
                    }
                } 
            } 
        } 
    }
}
