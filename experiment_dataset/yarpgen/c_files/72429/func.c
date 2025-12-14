/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72429
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) max(((+(arr_6 [i_0] [i_1] [i_1] [i_1] [(_Bool)0]))), (max((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned short)49152)))))))))));
                        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1] [i_3])) ? (var_7) : (((/* implicit */int) arr_0 [i_0]))))) ^ (11U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9966927)) ? (((/* implicit */int) (short)1533)) : (251144258)))) ? (2851349923U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (short)-1521))))))) : (((((/* implicit */_Bool) (short)-1541)) ? (4046222905U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_11 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (441422384U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_12 [i_4] [(short)2] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (233225071) : (var_0)))) ? ((-(977993101))) : (((((/* implicit */_Bool) (unsigned short)36934)) ? (((/* implicit */int) (unsigned short)11511)) : (-251144240))))), (var_6));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_6), (arr_3 [i_0] [i_0]))) ^ ((+(((/* implicit */int) arr_0 [i_4]))))))) ? ((-((((_Bool)1) ? (251144236) : (var_6))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-18281)) : (1158904638)))));
            var_13 = ((((/* implicit */_Bool) (-(2987715248U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3128255414U));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_14 -= ((/* implicit */unsigned int) 251144235);
            arr_17 [i_5] = ((/* implicit */unsigned int) (~(var_0)));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_31 [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) var_1);
                            arr_32 [i_0] [i_6] [i_8] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6)))))))));
                        }
                    } 
                } 
            } 
            var_15 -= ((((/* implicit */_Bool) (-(((var_3) % (-1374977322)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28627)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (120843498U))))))) : (var_9));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                arr_35 [i_0] [i_0] [(short)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 233225053)))) ? (var_9) : (((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-22416))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)36906)) ? (((/* implicit */int) (short)-20686)) : (((/* implicit */int) (short)-12)))))) : (((/* implicit */int) var_1))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (134217727U))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_0)) : (33U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10733)) ? (((/* implicit */int) var_2)) : (var_7)))) ? (var_9) : (var_0))) : (((/* implicit */int) var_4))));
            }
            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28608)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16951))) : (1102765730U)));
        }
        for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
        {
            arr_39 [i_0] [i_0] [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)28611), (((/* implicit */unsigned short) (signed char)-72))))) ? (((((/* implicit */_Bool) var_0)) ? (-1822344368) : (((/* implicit */int) var_5)))) : ((~(var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2490773313U)) ? (arr_29 [i_11] [i_11] [i_11] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21436)))))) ? (((/* implicit */unsigned int) ((var_6) - (var_7)))) : (((1792173050U) - (2065115673U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99)))));
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((-1080538192) > (((/* implicit */int) (unsigned short)54561)))))));
                var_19 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_11] [i_11] [i_0])), (-601061639)))) ? (var_9) : ((-(((/* implicit */int) var_8))))))));
                arr_44 [i_0] = ((/* implicit */short) var_8);
            }
            for (int i_13 = 2; i_13 < 11; i_13 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((2384818011U) % (1161443870U)))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 329956218U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)89)) : ((-(((/* implicit */int) (unsigned short)36899))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 117440512U)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_2)))), (((var_3) % (((/* implicit */int) (unsigned short)64543))))))) : ((-(329956230U))));
            }
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (55166007U))))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                var_23 = (short)24576;
                arr_51 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1822344378) != (var_9))))) : (((((/* implicit */_Bool) -1080538176)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36920)) : (963116801)))) : (max((((/* implicit */unsigned int) (unsigned short)41954)), (2014452707U)))))));
            }
        }
        var_24 = ((((/* implicit */_Bool) ((var_0) + (var_6)))) ? (min((((/* implicit */int) var_5)), (((var_8) ? (arr_3 [i_0] [i_0]) : (255))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
    }
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        var_25 = (~((-(var_7))));
        arr_54 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1712670617U)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_17 = 1; i_17 < 13; i_17 += 4) /* same iter space */
        {
            arr_60 [i_16] [i_16] [i_16] = ((/* implicit */signed char) arr_56 [i_17 + 2] [i_17 + 2]);
            arr_61 [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) var_0);
            arr_62 [i_16] = ((((/* implicit */_Bool) 4239801294U)) ? (((/* implicit */unsigned int) -264)) : (4294967295U));
        }
        for (short i_18 = 1; i_18 < 13; i_18 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                arr_68 [i_16] [i_16] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) var_0)) : ((-(arr_53 [i_18 - 1] [i_18]))));
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) (signed char)92);
                    var_27 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) > (((/* implicit */int) var_8))));
                }
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    arr_76 [9U] [i_18] [i_18] [i_18] [15] [i_16] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)54762)) : (((/* implicit */int) var_8)))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
                    arr_77 [i_16] [i_16] [i_19] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_6)) : (2958860274U)))) ? ((~(((/* implicit */int) (signed char)17)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_55 [i_16]))))))) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) max(((signed char)63), (((/* implicit */signed char) (_Bool)1)))))));
                }
                arr_78 [i_16] [i_18] [i_16] [i_18] = ((((((/* implicit */_Bool) (~(arr_59 [i_19])))) ? ((~(arr_70 [i_16] [i_18] [(short)3] [i_18]))) : (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) (unsigned short)54591))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_18 - 1])) ? (var_3) : ((~(((/* implicit */int) arr_66 [i_19] [i_16] [i_16]))))))));
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    for (short i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) var_3);
                            var_29 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_9))) != ((+(((/* implicit */int) (unsigned short)28174))))))), (1114830122)));
                        }
                    } 
                } 
            }
            arr_83 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_18 + 1] [i_18 + 2])) ? (4294967265U) : (arr_56 [i_18 + 3] [i_18 + 3])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_56 [i_18 + 1] [i_18 + 2]) : (((/* implicit */unsigned int) -238)))) : ((~(arr_56 [i_18 + 3] [i_18 + 1])))));
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26408)) ? (((/* implicit */int) arr_67 [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) arr_67 [i_18 + 2] [i_18 + 1]))))) ? (1455470479U) : (max((((/* implicit */unsigned int) -8)), (4281689900U)))));
        }
        arr_84 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (3809214606U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_6)) ? (526243259U) : (((/* implicit */unsigned int) var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (845775238U)))))) ? (((((/* implicit */_Bool) 2662992396U)) ? (235436545U) : (235436543U))) : (((/* implicit */unsigned int) var_3))));
        arr_85 [i_16] = ((/* implicit */int) max((15U), (((/* implicit */unsigned int) var_0))));
        arr_86 [i_16] [i_16] = (-(((((/* implicit */_Bool) 217716475)) ? (((/* implicit */unsigned int) var_3)) : (arr_69 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
    }
    var_31 = (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_3)) : (4293918720U))) * (((/* implicit */unsigned int) ((var_5) ? (1358865207) : (((/* implicit */int) (signed char)39))))))));
}
