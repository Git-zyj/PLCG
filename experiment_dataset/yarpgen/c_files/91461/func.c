/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91461
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-4821480481393379662LL) : (((/* implicit */long long int) 3190246220U))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) (unsigned char)255))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(var_8)))) ? (((562949953419264ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) : (((/* implicit */unsigned long long int) arr_1 [i_3] [i_0])))), (max((min((67108863ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [5U] [i_0])))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2]))))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)192))))) ? ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (-990500300) : (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_3 - 1] [i_3]), (min((arr_6 [i_3 - 3] [i_3] [i_3] [(_Bool)1]), (((/* implicit */unsigned short) (_Bool)0))))))))))));
                            var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)48840))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [11U] [11U] [i_3 - 2])) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) 0U)) : (13388144750022621999ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */long long int) 2987497647U)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                            var_17 = ((/* implicit */_Bool) ((unsigned char) (!(var_9))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
                /* LoopSeq 3 */
                for (long long int i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(unsigned short)0] [i_4]))));
                    arr_14 [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) arr_9 [(_Bool)0] [i_1 + 3] [i_1 + 3] [(_Bool)1]);
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((unsigned short) arr_8 [i_0] [(unsigned short)2] [15] [i_4])))))));
                }
                /* vectorizable */
                for (long long int i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((arr_4 [(unsigned short)4]) & (((/* implicit */int) (unsigned short)14336)))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1 + 4] [i_1 + 3] [i_5 + 3])) + (((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_5 - 1])))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_16 [i_0] [i_1] [i_5 - 1])) - (56))))))));
                }
                for (long long int i_6 = 3; i_6 < 15; i_6 += 4) /* same iter space */
                {
                    var_23 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)512)) >> (((/* implicit */int) (unsigned short)0)))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_18 [(unsigned char)1] [i_1] [i_0]);
                    var_26 = ((/* implicit */unsigned short) 2557832385U);
                }
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) -133731243)) : (4014898394694089064LL))), (((/* implicit */long long int) var_12))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (+(max((2419266198U), (((/* implicit */unsigned int) (unsigned short)34955))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_20 [i_1] [3U] [i_8]))))) : (1875701097U)))))));
                            var_29 ^= ((/* implicit */unsigned char) (_Bool)1);
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                            {
                                arr_30 [i_0] [i_1 + 4] [i_9] [14U] [14U] [(unsigned char)14] [6LL] = ((/* implicit */int) arr_20 [i_7] [i_8 - 2] [i_9]);
                                arr_31 [i_0] [i_1] [0U] |= ((/* implicit */unsigned int) ((long long int) (unsigned short)34354));
                                var_30 = ((/* implicit */_Bool) arr_16 [(unsigned short)2] [8U] [(_Bool)1]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)172)))) : ((~((-(((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_32 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)12] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_10] [8LL]))) : (arr_0 [i_10])))) : (arr_7 [i_10] [i_10] [i_10] [i_10]))));
        var_33 ^= ((/* implicit */unsigned short) arr_29 [(unsigned short)2] [3LL]);
        /* LoopNest 3 */
        for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) (+(1864097110U)));
                        arr_44 [(_Bool)1] [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) ((long long int) (+(((unsigned int) arr_40 [(_Bool)0])))));
                    }
                } 
            } 
        } 
        arr_45 [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) min((arr_19 [(unsigned short)5] [(unsigned short)0]), (((/* implicit */unsigned char) (_Bool)1))))) | (((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 2) 
    {
        arr_49 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [9] [i_14 + 1] [i_14 - 2]))))) ? (((((/* implicit */_Bool) arr_24 [(unsigned char)17] [i_14] [i_14] [i_14])) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_14 - 1] [i_14 - 1])))) : ((+(((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (unsigned short)60421))))))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                {
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_14] [i_15] [i_14] [i_16])) ? (arr_9 [i_16 + 1] [i_15] [i_15] [i_14]) : (((/* implicit */int) ((1501639359U) < (4294967295U))))));
                    var_36 = ((/* implicit */unsigned short) ((var_3) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        for (long long int i_18 = 1; i_18 < 16; i_18 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */_Bool) max((var_37), (((((((((/* implicit */_Bool) arr_21 [1] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)4] [i_15] [i_16] [i_15]))) : (var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)199)), ((unsigned short)18380))))))) > (((/* implicit */unsigned int) arr_48 [(_Bool)1]))))));
                                var_38 += ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((-9223372036854775807LL - 1LL)));
                                arr_61 [i_14] [i_15] = ((/* implicit */_Bool) 48551367U);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_14 - 2] [i_14 - 3] [i_14])) ? (((arr_52 [i_14] [i_14]) - (arr_52 [i_14] [i_14 + 3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 1; i_19 < 19; i_19 += 2) 
    {
        var_40 &= arr_63 [i_19 + 1];
        var_41 -= ((/* implicit */unsigned short) var_11);
        /* LoopNest 2 */
        for (long long int i_20 = 3; i_20 < 19; i_20 += 4) 
        {
            for (unsigned short i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((15755670563645246628ULL) == (((/* implicit */unsigned long long int) 1501639359U)))))));
                    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_68 [i_19] [i_19])) / (var_11)))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_66 [i_19]))));
                    arr_69 [i_19] [i_21] [0LL] [i_19 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34396)) ? (((long long int) arr_63 [i_19])) : (((/* implicit */long long int) ((unsigned int) (unsigned char)128)))));
                    arr_70 [i_19] [i_20 + 1] [i_19] = ((/* implicit */int) arr_62 [i_20 - 1] [i_19 + 1]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_22 = 1; i_22 < 18; i_22 += 2) 
        {
            for (int i_23 = 2; i_23 < 17; i_23 += 2) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_44 *= ((/* implicit */unsigned short) ((arr_72 [i_24]) + (((/* implicit */long long int) 4181833994U))));
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_19])) ? (((((/* implicit */_Bool) arr_64 [i_24] [13U])) ? (((/* implicit */int) arr_63 [i_22 - 1])) : (((/* implicit */int) arr_73 [i_19] [i_19] [i_23] [i_24])))) : (((/* implicit */int) arr_77 [i_23 - 2] [i_23 + 3] [i_23] [i_23])))))));
                        var_46 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_22 - 1] [i_23 + 1])) ? (((long long int) arr_75 [i_23] [(unsigned char)14])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))));
                        var_47 = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
    }
}
