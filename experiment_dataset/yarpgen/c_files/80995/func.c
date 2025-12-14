/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80995
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_4)))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_6)));
                arr_10 [i_2] [7] [i_0] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) min((var_1), (((/* implicit */short) var_3))))))), (((/* implicit */int) var_2))));
            }
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((+(var_9))), (((/* implicit */unsigned int) -734044685))))), (min((min((((/* implicit */unsigned long long int) var_6)), (var_0))), (((/* implicit */unsigned long long int) var_2))))));
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((var_8), (((/* implicit */unsigned int) min(((unsigned short)13), (((/* implicit */unsigned short) (unsigned char)131))))))) : ((((_Bool)1) ? (var_8) : (50331648U)))));
            }
        }
        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) var_1))))));
                        var_13 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1108936821)) : (var_0));
                        arr_30 [i_0] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_9);
                        arr_31 [i_7] [i_6] [i_5] [i_4] [i_0] = ((/* implicit */unsigned char) var_1);
                    }
                    var_14 = ((/* implicit */int) (unsigned char)200);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-4900))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_3))));
                }
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11377353504801194549ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_0] [i_4] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)));
                        var_18 = ((/* implicit */unsigned char) (+(var_6)));
                        var_19 = ((/* implicit */short) var_8);
                    }
                    arr_38 [i_0] [i_4 - 2] [i_5] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_5)) : (1205667827)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)125)) ? (var_0) : (var_0)));
                    var_21 = ((/* implicit */signed char) var_9);
                    var_22 = ((/* implicit */int) var_2);
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) var_4);
                        var_24 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2))));
                        arr_44 [i_4] [i_10] = ((/* implicit */unsigned short) (-(var_0)));
                        arr_45 [(_Bool)1] [i_10] [i_5] [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                    }
                    for (short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_6));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)));
                        var_27 = ((/* implicit */unsigned char) var_0);
                        arr_48 [i_0] [11ULL] [i_5] [18] [i_10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_13 = 3; i_13 < 18; i_13 += 3) 
                {
                    arr_51 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 17)) : (4432479959346333185ULL)))));
                    var_28 = ((/* implicit */unsigned long long int) var_1);
                }
            }
            /* vectorizable */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)56)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    arr_60 [i_15] [i_15] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7432))));
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) 1758617602U);
                        var_31 = ((/* implicit */int) (-(8230765396742010416ULL)));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)));
                    }
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                    {
                        var_33 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (914419864));
                        arr_65 [i_0] [i_4] [i_14 - 1] [i_15] [i_15] [i_4] = var_6;
                        arr_66 [i_15] [i_4] = ((/* implicit */unsigned long long int) (signed char)10);
                        arr_67 [i_15] [i_4] [18ULL] [i_4] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    for (int i_18 = 3; i_18 < 18; i_18 += 1) 
                    {
                        var_34 = ((((/* implicit */_Bool) var_9)) ? (1931668047U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))));
                        arr_71 [i_15] [i_4] [i_14] [i_14 - 1] [i_15] [i_18] = ((/* implicit */unsigned long long int) var_4);
                    }
                    var_35 = ((/* implicit */int) (unsigned short)27915);
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_20 = 4; i_20 < 16; i_20 += 1) 
                    {
                        arr_78 [i_19] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                        arr_79 [i_0] [i_0] [i_19] [0U] [(unsigned char)2] = ((/* implicit */unsigned short) var_0);
                    }
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        arr_83 [i_0 - 1] [i_4] [i_19] = ((/* implicit */unsigned long long int) (unsigned short)17329);
                        arr_84 [i_19] [i_19] [i_19] [(_Bool)1] [i_4] [i_19] = ((/* implicit */unsigned int) var_6);
                        arr_85 [(_Bool)1] [(_Bool)1] [i_19] [1U] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)112)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48207)))));
                    }
                    arr_86 [i_0] [i_19] [i_14 - 1] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-118))));
                }
                var_36 = ((/* implicit */unsigned short) (~(var_8)));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                var_37 = max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_3)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))));
                var_38 = (unsigned short)55759;
                arr_90 [i_0] [i_0] [i_22] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)6053)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                var_39 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (unsigned short)47277)), (var_0)))));
            }
            var_40 = ((/* implicit */unsigned short) var_5);
        }
        for (unsigned short i_23 = 2; i_23 < 16; i_23 += 1) /* same iter space */
        {
            var_41 = min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)24)) : (var_6))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)100))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_24 = 0; i_24 < 19; i_24 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_25 = 0; i_25 < 19; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                        var_43 = ((/* implicit */unsigned char) 4693257928360744499LL);
                        arr_102 [i_0] [i_25] [i_25] [i_25] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)27915)) : (((/* implicit */int) var_2))));
                        var_44 = ((/* implicit */unsigned int) var_0);
                        var_45 = ((/* implicit */unsigned char) (-(1970005607277551899ULL)));
                    }
                    for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                        var_47 = ((/* implicit */signed char) var_4);
                        arr_105 [i_0] [(signed char)6] [i_25] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)2))));
                    }
                    var_48 = ((/* implicit */unsigned int) 13313644513593643932ULL);
                    /* LoopSeq 1 */
                    for (unsigned short i_28 = 4; i_28 < 18; i_28 += 2) 
                    {
                        arr_108 [i_25] [i_23] [i_24] = ((/* implicit */unsigned char) (signed char)-110);
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (15ULL) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_8))))));
                        arr_109 [i_25] [i_25] [i_25] [i_24] [i_25] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1))))) : (var_8)));
                        var_51 = (-(((/* implicit */int) (_Bool)0)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 0; i_29 < 19; i_29 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                        arr_112 [i_0] [i_23] [i_24] [i_25] [i_23] = ((/* implicit */unsigned short) 9705298U);
                    }
                }
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    arr_115 [i_0] [i_23] [i_24] [i_23] = ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 3 */
                    for (signed char i_31 = 0; i_31 < 19; i_31 += 1) /* same iter space */
                    {
                        arr_119 [i_0] [i_23] [4LL] [i_23] [i_30] [i_31] = ((/* implicit */short) var_8);
                        arr_120 [i_0 + 1] [i_31] [i_24] [i_30 + 1] [i_31] [(_Bool)1] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1460536744U)));
                    }
                    for (signed char i_32 = 0; i_32 < 19; i_32 += 1) /* same iter space */
                    {
                        arr_124 [i_0] [i_0] [i_23] [i_23] [i_24] [i_0] [i_23] = ((/* implicit */signed char) var_1);
                        arr_125 [i_32] [i_30 + 1] [(signed char)6] [(signed char)6] [i_0 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        var_53 = ((/* implicit */unsigned short) (+(var_4)));
                        arr_126 [i_24] [i_30 + 1] = ((/* implicit */int) var_9);
                        arr_127 [i_0] [i_23] [i_23 + 2] [i_24] [i_24] [i_30] [i_32] = ((/* implicit */long long int) (~(var_0)));
                    }
                    for (signed char i_33 = 0; i_33 < 19; i_33 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)));
                    }
                }
                var_56 = ((/* implicit */unsigned short) (-(var_9)));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_57 = ((/* implicit */int) (_Bool)1);
                var_58 = ((/* implicit */unsigned char) (_Bool)1);
                arr_133 [0ULL] [i_34] [i_34] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)40596))))));
                /* LoopSeq 2 */
                for (signed char i_35 = 0; i_35 < 19; i_35 += 4) 
                {
                    arr_137 [i_0 - 1] [i_23 + 2] [i_0 - 1] [i_35] [i_34] = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 2 */
                    for (unsigned char i_36 = 0; i_36 < 19; i_36 += 4) 
                    {
                        var_59 = ((/* implicit */signed char) 2446723970982886588LL);
                        var_60 = ((/* implicit */unsigned short) (short)-8192);
                    }
                    for (unsigned char i_37 = 0; i_37 < 19; i_37 += 4) 
                    {
                        arr_142 [i_34] [i_23] [i_34] [i_35] [i_37] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (7069390568908357066ULL)))) ? (312628947) : (var_6)))));
                        arr_143 [i_37] [i_34] [i_23] = (unsigned short)2;
                    }
                }
                for (unsigned int i_38 = 4; i_38 < 18; i_38 += 2) 
                {
                    var_61 = min((((/* implicit */unsigned int) var_5)), (var_8));
                    arr_146 [(unsigned char)7] [i_23] [i_34] [i_38] [i_38] = ((/* implicit */long long int) (-(536870912)));
                    var_62 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)38519)), (var_4)))) ? (min((-4693257928360744500LL), (((/* implicit */long long int) (unsigned short)26863)))) : (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_6)))))));
                }
            }
        }
        arr_147 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)28214))))), (min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) var_1))))), ((-(var_0)))))));
        /* LoopSeq 1 */
        for (_Bool i_39 = 1; i_39 < 1; i_39 += 1) 
        {
            arr_152 [i_39] [i_39 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (signed char)11)))) : (((/* implicit */int) min(((signed char)63), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) var_5)), (10751696116576766497ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9))))))));
            arr_153 [i_0 - 1] [i_0 - 2] [i_39] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 1 */
        for (signed char i_40 = 0; i_40 < 19; i_40 += 1) 
        {
            var_63 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)14143)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_5))))));
            var_64 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) (unsigned short)50792)), (var_4)))));
        }
    }
}
