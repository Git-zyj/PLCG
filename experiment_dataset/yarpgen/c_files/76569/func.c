/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76569
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
    var_14 = ((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+((-2147483647 - 1))))))) < ((~(((var_7) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(0)))) & (((unsigned int) 0))));
        arr_3 [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) var_2))))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((arr_5 [i_1 + 1] [i_1]) + (9223372036854775807LL))) >> (0)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_13)))) - (max((((/* implicit */unsigned long long int) (short)25046)), (var_8))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))))) || (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_10))) >= ((~(var_10)))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_4 [i_1])))))) ^ (((((((((/* implicit */int) (signed char)-28)) | (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((max((5), (((/* implicit */int) (short)23951)))) - (23931)))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_5))) << (((((/* implicit */int) ((signed char) arr_8 [i_2] [i_1]))) + (27)))))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) (_Bool)1))), (((((/* implicit */_Bool) (short)-21937)) ? (3LL) : (((/* implicit */long long int) (-2147483647 - 1)))))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))), ((+(((var_8) >> (((((/* implicit */int) var_9)) + (24980)))))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                arr_19 [i_4] [i_6] [i_6] &= ((/* implicit */int) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_5]))))), ((+(arr_13 [i_5])))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_0 [i_4])) - (16033)))))));
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8])))))));
                        arr_27 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_5] [i_8] [i_6])) % (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & ((-(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) -2004325143)), (9223372036854775807LL)))) ? (((/* implicit */int) ((short) 11790619740640977344ULL))) : (((((/* implicit */int) (signed char)115)) << (((((-9223372036854775807LL) - (-9223372036854775806LL))) + (3LL)))))))));
                }
                for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(arr_16 [i_5])))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) arr_21 [i_4] [i_5] [i_4] [i_9]))))))) : ((+((-(arr_17 [i_6])))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_34 [i_5] [i_5 + 3] [i_5] [i_5 - 1] [i_5 + 3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_18 [i_4]) ? ((-2147483647 - 1)) : (((/* implicit */int) var_4)))))))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_26 [i_6] [i_5 - 2] [i_6] [i_5] [i_10] [i_6]))))) == (((((/* implicit */int) arr_32 [i_4] [i_5] [i_6] [i_9] [i_6])) % (2147483632))))))));
                        var_25 += ((/* implicit */unsigned char) (~((~((-(1685394052U)))))));
                    }
                    for (short i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((-9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) : ((-(((((/* implicit */_Bool) 7U)) ? (arr_17 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        arr_38 [i_4] [i_5] [i_5] [i_6] [i_6] [i_9] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((((~(arr_30 [i_11] [i_5] [i_6] [i_5] [i_5] [i_4]))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)116)) < (((/* implicit */int) (signed char)27)))))))), (((((/* implicit */_Bool) (-(var_0)))) ? ((+(-7516523916098550750LL))) : (((/* implicit */long long int) (+(2147483632))))))));
                        var_28 = ((/* implicit */signed char) (-(((((/* implicit */long long int) (~(1892925378)))) + (((long long int) 2147483632))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 2605509728U)) ? (8357699577151849795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                        var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) (signed char)36))))))));
                        arr_41 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */short) ((long long int) ((_Bool) var_2)));
                        var_31 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_25 [i_9] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_5)))))));
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                    {
                        var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)24887)) || (((/* implicit */_Bool) var_5)))))));
                        var_34 = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_22 [i_4] [i_9] [i_13])))) + (2147483647))) >> ((((+(((/* implicit */int) var_4)))) + (17674)))));
                        var_35 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1)))));
                        var_36 = ((/* implicit */unsigned char) (+((-(364938145U)))));
                    }
                    var_37 += ((/* implicit */signed char) (+((-(((arr_30 [i_5] [i_5] [i_6] [i_9] [i_6] [i_9]) * (((/* implicit */int) (_Bool)1))))))));
                }
            }
            var_38 += (!(((/* implicit */_Bool) min((((10089044496557701820ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15] [i_15] [i_15] [i_14] [i_14] [i_5] [i_4]))) / (var_7))) / (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_24 [i_4] [i_4] [i_4] [11ULL] [i_4] [i_4]))))))))));
                        var_40 = ((/* implicit */unsigned int) (((~(((unsigned long long int) 9223372036854775799LL)))) <= (((/* implicit */unsigned long long int) ((max((var_13), (arr_17 [i_4]))) ^ (((/* implicit */long long int) ((((-880963958) + (2147483647))) >> (((((/* implicit */int) arr_23 [6ULL] [6ULL] [i_14] [i_15])) - (92)))))))))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3930029123U) << (((9223372036854775806LL) - (9223372036854775792LL)))))) ? ((~(min((-9223372036854775807LL), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) max((25172829U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))))))))));
                    }
                } 
            } 
            arr_52 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32))))) * ((+(0LL))))));
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    for (short i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        {
                            var_42 ^= ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) 2323010311U)))) ? (((((/* implicit */_Bool) -172971695)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_54 [i_18])))) : ((-(1018489930)))))));
                            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(3930029141U)))))) - (2323010331U)));
                        }
                    } 
                } 
            } 
        }
        for (short i_19 = 3; i_19 < 15; i_19 += 2) 
        {
            arr_64 [i_19] [i_19 - 2] [i_4] = ((/* implicit */short) (((((~(((/* implicit */int) ((short) (_Bool)1))))) + (2147483647))) >> (((min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)74)))), (((4269794466U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (60U)))));
            var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_18 [i_4])))))))));
        }
        var_45 = ((/* implicit */int) ((signed char) (((((~(var_7))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_15 [(signed char)8] [i_4] [i_4])))) - (25595))))));
    }
    for (int i_20 = 1; i_20 < 12; i_20 += 2) 
    {
        var_46 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                for (short i_23 = 1; i_23 < 12; i_23 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) & ((+(((/* implicit */int) (signed char)125))))));
                        arr_76 [i_20] [i_21] [i_20] [i_23] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        arr_77 [i_20] [i_21] [i_22] [i_23] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_20] [i_20] [(short)13] [(signed char)4] [(signed char)4] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_24 = 1; i_24 < 12; i_24 += 1) 
            {
                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((unsigned short) ((short) arr_78 [i_20] [i_21] [i_24] [i_24]))))));
                var_49 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-8029449553881197624LL)))) ? ((+(var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_58 [i_21] [i_21] [4ULL] [10ULL] [4ULL] [8ULL] [i_20])))))));
                var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) ((4402320645716657921LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))))))));
                var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-28)))))));
            }
            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)163))))) & (-4402320645716657919LL)));
            arr_80 [i_20] = (((-(((/* implicit */int) (_Bool)1)))) & (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_62 [i_20 + 1] [i_21] [i_20 + 1])) - (3429))))));
        }
        for (signed char i_25 = 0; i_25 < 13; i_25 += 1) 
        {
            var_53 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_20] [i_25] [i_25]))))) - ((-(8357699577151849786ULL)))))))));
            var_55 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (10089044496557701832ULL)));
            /* LoopNest 3 */
            for (unsigned char i_26 = 4; i_26 < 9; i_26 += 3) 
            {
                for (short i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        {
                            arr_93 [i_20] [i_25] [i_20] [i_27] [i_28] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (_Bool)1)) ^ (arr_51 [i_20] [i_20] [i_25] [i_20]))) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((((-4402320645716657903LL) + (4402320645716657909LL))) - (6LL)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || (((_Bool) 8357699577151849795ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_87 [i_20] [i_20] [i_20] [i_20] [i_20] [i_25]))))))))));
                            var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((((/* implicit */_Bool) ((4402320645716657921LL) / (((/* implicit */long long int) 779581351))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_56 [i_27])))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_20] [i_20] [i_20] [i_20]))))) ? ((-(3159838951U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))))));
                            var_57 = (i_25 % 2 == 0) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_87 [i_20] [i_20] [i_20] [i_20] [i_20] [i_25])) - (10043)))))) ? (((var_12) / (((/* implicit */int) arr_0 [i_28])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) arr_45 [i_28] [i_26] [i_25] [i_20]))))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) arr_87 [i_20] [i_20] [i_20] [i_20] [i_20] [i_25])) - (10043))) - (12309)))))) ? (((var_12) / (((/* implicit */int) arr_0 [i_28])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) arr_45 [i_28] [i_26] [i_25] [i_20])))))))))));
                            var_58 = ((/* implicit */unsigned int) (+((((+(4402320645716657872LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_28] [i_27])) ? (var_12) : (((/* implicit */int) var_2)))))))));
                            var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)57428)) ? (4402320645716657902LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((((arr_51 [i_20] [i_25] [i_25] [i_25]) * (((/* implicit */int) (_Bool)1)))) / ((+(((/* implicit */int) (signed char)-126)))))) : (((((/* implicit */_Bool) (-(var_12)))) ? ((-(((/* implicit */int) arr_15 [i_20] [i_20] [i_25])))) : (((/* implicit */int) ((unsigned char) arr_14 [i_27] [i_27])))))));
                        }
                    } 
                } 
            } 
        }
        var_60 = ((/* implicit */int) max((var_60), ((((_Bool)1) ? (((/* implicit */int) ((unsigned short) (unsigned short)12288))) : (((/* implicit */int) (_Bool)1))))));
    }
}
