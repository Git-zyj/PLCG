/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73814
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
    var_12 = ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-542)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) == (((/* implicit */int) (unsigned char)0))))) : (((/* implicit */int) (signed char)125))))) : (min((((/* implicit */long long int) (short)28331)), (-7219976650581074983LL)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] = max(((+((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) max((((/* implicit */short) (signed char)115)), ((short)28331)))), (((long long int) arr_3 [i_1])))));
            var_15 -= ((/* implicit */int) max(((short)28335), (max((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_0] [i_1])))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)13);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)65522)));
                arr_9 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)988))))));
                arr_10 [3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((-1476083281) == (-1476083306)));
                arr_11 [i_0] = ((/* implicit */short) 1476083317);
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    var_16 = ((/* implicit */signed char) arr_15 [i_4] [i_4 - 1] [i_4] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_1] [i_3] [i_0] [i_4] [i_5] = ((((/* implicit */_Bool) arr_18 [i_1] [i_4] [i_3] [i_3] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_18 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])));
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-112))));
                        arr_20 [i_4] [i_3] [(_Bool)1] = ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2649947586394252239ULL)))))) : (-8156440461125309620LL));
                        arr_21 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-27096)) ^ (((/* implicit */int) (unsigned char)253))));
                        arr_22 [i_0] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((arr_15 [i_3] [i_3] [i_4] [i_4 + 1] [i_4 - 1]) < (((/* implicit */unsigned int) var_11))));
                    }
                    arr_23 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4 + 1] [i_0])) ? (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))));
                }
                for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    var_18 = arr_18 [i_0] [i_0] [i_3] [i_3] [i_6 + 1] [i_3];
                    arr_26 [i_6 + 3] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_6 + 4]);
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)78)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)3)))));
                    var_20 = ((/* implicit */unsigned long long int) arr_29 [i_1]);
                }
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_34 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1476083268)) ? (7776653479406410653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62056))))))));
                    arr_35 [i_8] [i_3] [i_3] [i_0] [i_0] [i_0] = (!((!(((/* implicit */_Bool) (unsigned char)244)))));
                }
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    arr_38 [i_3] = ((/* implicit */int) var_6);
                    arr_39 [i_0] [i_0] [i_3] [i_9] [i_1] [i_0] = ((/* implicit */long long int) var_5);
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_21 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) + (2147483647))) >> (((((/* implicit */int) var_7)) + (93)))));
                    arr_42 [i_0] [i_10] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)65518))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2767013828195290321ULL)) ? (((/* implicit */int) (signed char)-95)) : (1346643843))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] = ((/* implicit */int) ((-899880881) != (((/* implicit */int) (short)(-32767 - 1)))));
                        arr_48 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-2147483630)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                        arr_51 [i_0] [i_0] [i_3] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) var_10);
                        arr_52 [i_0] [i_1] [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) ((2649947586394252219ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54548)))));
                    }
                }
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        {
                            arr_60 [i_13] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20159)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (8156440461125309619LL)));
                            arr_61 [i_0] [i_0] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 99026712)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28314))))) ? (((/* implicit */unsigned int) (+(-1176334715)))) : (arr_15 [i_14] [i_15] [i_13] [i_15] [i_15 + 2])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) (-(-1476083274)));
            }
            arr_62 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)560), (((/* implicit */unsigned short) (_Bool)1)))))));
        }
        for (unsigned char i_16 = 3; i_16 < 19; i_16 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) (-(((/* implicit */int) max(((short)32760), (max(((short)32746), ((short)20066))))))));
            var_26 |= ((/* implicit */short) max((((min((((/* implicit */int) (short)-28332)), (-1476083274))) | (min((((/* implicit */int) (unsigned short)3045)), (arr_16 [i_0] [i_16] [i_16]))))), ((((!(((/* implicit */_Bool) (unsigned short)10151)))) ? (((/* implicit */int) min(((short)-11208), (((/* implicit */short) var_0))))) : (((/* implicit */int) arr_31 [i_0] [i_16]))))));
            arr_66 [i_0] = ((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [5]);
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned char)96)), (6632111857323612259ULL))), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_16] [i_17]))));
                        arr_71 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11225)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)245))));
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_43 [i_16 - 1] [i_16 - 1] [i_16])) == (((/* implicit */int) (unsigned short)46790)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)207))))) : ((((((~(((/* implicit */int) (signed char)40)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_69 [i_18] [i_17] [i_17] [i_17] [i_16] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_14 [i_0] [i_16 - 1] [i_0]))) + (89LL)))))));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-32760))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_19 = 3; i_19 < 19; i_19 += 3) /* same iter space */
        {
            arr_74 [i_0] [i_0] = (unsigned short)54527;
            arr_75 [i_0] [i_19] [i_19] = ((/* implicit */signed char) (-(4288044068370314944ULL)));
            arr_76 [i_19 - 3] [i_0] = ((/* implicit */long long int) (_Bool)1);
            arr_77 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_19 - 3] [i_0]);
        }
        for (unsigned char i_20 = 3; i_20 < 19; i_20 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_31 [i_20] [i_0])), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            arr_80 [i_20 - 1] [i_20] [i_20] = ((/* implicit */unsigned short) (short)28331);
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    {
                        var_31 += ((/* implicit */signed char) (~(((/* implicit */int) (short)14401))));
                        arr_85 [i_0] [i_0] [i_20] [(short)14] [(unsigned short)7] [i_22] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)93))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32764)) && (((/* implicit */_Bool) -9223372036854775798LL))));
                        arr_86 [i_22 + 1] [i_22] [i_20] [i_22] [i_22 + 1] [i_22] = ((/* implicit */short) (+(91958442)));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) (+(151281458239504826LL)));
        }
        arr_87 [5] [5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((16725137916598747545ULL), (((/* implicit */unsigned long long int) (short)32766))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && ((_Bool)1)))) : (((/* implicit */int) (short)-15331))))));
        arr_88 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)32759)), (12224963307232909967ULL)));
    }
    for (long long int i_23 = 0; i_23 < 18; i_23 += 2) 
    {
        arr_92 [i_23] [i_23] = ((/* implicit */unsigned long long int) max(((unsigned short)24504), (((/* implicit */unsigned short) (_Bool)1))));
        arr_93 [i_23] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)157)), (1320054103230440220LL)));
        /* LoopSeq 1 */
        for (signed char i_24 = 0; i_24 < 18; i_24 += 3) 
        {
            arr_97 [i_24] [i_23] = ((/* implicit */int) var_6);
            arr_98 [i_23] [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) % (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-101))))) ? (((/* implicit */int) arr_0 [i_23])) : (((((/* implicit */int) (_Bool)1)) * (var_10)))))));
            var_34 = ((/* implicit */unsigned char) (-((-(arr_3 [i_24])))));
            arr_99 [(unsigned short)15] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [i_24] [i_24] [i_23] [i_23] [i_23])), (var_8))))))) == (arr_33 [i_23])));
        }
    }
    var_35 ^= ((/* implicit */signed char) var_1);
}
