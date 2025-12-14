/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61685
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
    var_20 = ((/* implicit */signed char) max((var_4), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2018798056)) ? (arr_1 [i_0]) : (((/* implicit */long long int) -1022575278))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -3984596728498476315LL)) ? (arr_3 [(short)5] [(short)5]) : (((/* implicit */int) arr_6 [9] [i_1] [i_1]))))))))));
                    var_22 += ((/* implicit */short) ((((long long int) arr_1 [i_0])) >= (((/* implicit */long long int) arr_3 [i_2] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */unsigned long long int) 1681525169);
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(max((((unsigned long long int) arr_0 [i_3] [(unsigned char)17])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) (_Bool)1))))))))))));
                                var_24 = min((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (2695072265U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_3] [(unsigned short)2]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)11] [i_0] [i_3] [(signed char)7])))))), (((((/* implicit */int) arr_4 [i_0] [i_3] [i_4])) ^ (((((/* implicit */int) (_Bool)0)) << (((6387099326311693592LL) - (6387099326311693574LL))))))));
                                var_25 = (short)13581;
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) 32256);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            var_26 |= ((/* implicit */unsigned long long int) ((max((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_3 [(unsigned short)0] [i_6])))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_6 - 1])) | (((/* implicit */int) arr_2 [i_6] [i_6 + 2])))))));
            arr_18 [i_5] = ((/* implicit */unsigned short) arr_1 [i_6]);
            var_27 = ((/* implicit */int) (short)13581);
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_5] [i_5] [i_6 + 1] [i_6 + 1])) ^ (((/* implicit */int) arr_4 [i_5] [(short)4] [i_6 + 2])))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)32767))))) + (0LL)));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9 - 1] [11U] [i_9] [(unsigned short)8]))) * (-7564523266010646912LL))))));
                            var_31 = (~(((/* implicit */int) arr_20 [i_9 + 2] [i_5] [i_6 - 1])));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_6 + 2] [i_6 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_6 + 2] [i_6 + 2])) + (25663))) - (11)))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15360)) ? (-20LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3600)))));
                var_34 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_19 [i_10] [i_6] [(_Bool)0]))) >= (((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]))));
            }
        }
        for (unsigned int i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) arr_0 [(unsigned char)13] [i_12 + 1]);
                arr_36 [i_5] [i_11] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 32256)) ^ ((~(arr_0 [i_5] [i_12])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)5] [i_11 + 1] [i_5])) ? (((/* implicit */unsigned int) arr_3 [i_11] [i_11])) : (arr_14 [i_5])))) | (((arr_7 [i_12] [i_12] [i_12] [i_11 - 1] [i_5]) ? (((/* implicit */unsigned long long int) 0LL)) : (18446744073709551615ULL)))))));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((-6387099326311693593LL), (((/* implicit */long long int) arr_23 [i_5] [i_5])))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 6387099326311693593LL))))), (((((/* implicit */_Bool) arr_35 [i_12] [i_5] [i_5] [i_5])) ? (-6387099326311693590LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11 + 2] [i_11] [i_11] [i_11]))))))) : (((/* implicit */long long int) arr_21 [i_5] [i_12 - 1] [(_Bool)1] [i_5]))));
                var_37 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1999277755)), (arr_14 [i_5])))) ? (((unsigned long long int) arr_28 [i_5] [i_11] [i_11])) : (((/* implicit */unsigned long long int) arr_21 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_11 + 2] [13LL] [i_12 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_5] [i_5])) || (((/* implicit */_Bool) (short)0)))))) : (arr_1 [15LL]))))));
            }
            arr_37 [i_11] [i_11] [i_5] = ((/* implicit */unsigned long long int) (+(1743437700)));
            /* LoopSeq 4 */
            for (unsigned long long int i_13 = 3; i_13 < 15; i_13 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5]);
                    arr_43 [i_5] [17LL] [10U] = (-(arr_1 [i_13 + 3]));
                    var_39 = ((/* implicit */short) (unsigned short)30219);
                }
                var_40 ^= ((/* implicit */short) -7760617824836587761LL);
            }
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                arr_46 [9U] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(unsigned char)4] [i_11 + 2] [(unsigned char)4] [i_11 + 2])) && (((/* implicit */_Bool) arr_22 [(signed char)5] [16U] [i_11] [i_11 - 2])))))));
                arr_47 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_2 [i_5] [i_5])) - (((/* implicit */int) (unsigned char)48)))));
            }
            for (int i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                var_41 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-4)) >= (((/* implicit */int) (unsigned short)1984)))))) < (arr_29 [i_5] [i_5] [i_5] [i_11]))) && (((_Bool) (_Bool)1))));
                arr_52 [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_11 - 2] [i_11] [i_11] [i_11 - 2])) <= (((/* implicit */int) ((((/* implicit */long long int) (+(arr_35 [i_5] [i_11] [i_5] [i_11 - 2])))) >= (((((/* implicit */_Bool) 32256)) ? (5623239662919907762LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20943))))))))));
                var_42 ^= ((/* implicit */int) arr_28 [i_11 - 2] [(unsigned short)13] [(unsigned short)13]);
                var_43 *= ((/* implicit */short) arr_34 [i_5] [i_5] [i_5] [i_5]);
            }
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11 - 1]))) >= (arr_10 [i_11] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11])));
                arr_56 [i_5] [i_5] [i_5] [i_5] = ((short) arr_26 [i_5] [i_11] [i_11] [i_11 - 2] [i_11]);
            }
            var_45 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)1998)), (-1983417676)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [(short)3] [i_11]) : (((/* implicit */long long int) arr_29 [i_5] [i_5] [i_5] [i_5])))))) >= (((/* implicit */long long int) (~(((/* implicit */int) max((arr_44 [i_5] [i_11]), (arr_55 [i_5] [i_11])))))))));
        }
        var_46 = arr_15 [i_5];
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 18446744073709551615ULL))) ? (max((arr_28 [i_5] [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_5]))) : (arr_28 [i_5] [i_5] [i_5])));
        var_48 = ((/* implicit */long long int) ((((long long int) (_Bool)1)) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        var_49 = ((long long int) arr_1 [i_18]);
        var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_18] [(unsigned short)14])) ? (4U) : (arr_54 [i_18] [i_18]))))));
        /* LoopNest 3 */
        for (unsigned char i_19 = 3; i_19 < 14; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    {
                        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) 264241152)) && (((/* implicit */_Bool) 3046427084213331386LL))));
                        var_52 = ((/* implicit */unsigned long long int) ((0) + (((/* implicit */int) (unsigned short)44581))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 2) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    arr_80 [i_22] [i_23] [i_22] [i_24] = ((/* implicit */signed char) arr_78 [i_22]);
                    var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_79 [i_22] [i_23] [i_24] [i_23]) << (((((((/* implicit */int) (unsigned char)32)) << (((/* implicit */int) arr_78 [i_24])))) - (24)))))) ? (min((arr_76 [i_24] [(signed char)17] [i_22]), (arr_76 [i_22] [i_22] [i_22]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_73 [i_23]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_22])))))))));
                }
            } 
        } 
        var_54 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) arr_70 [i_22])) & (arr_73 [i_22]))));
        var_55 = ((/* implicit */unsigned long long int) min((((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)85))))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)60)))))))));
    }
    /* vectorizable */
    for (unsigned short i_25 = 1; i_25 < 14; i_25 += 1) 
    {
        /* LoopNest 2 */
        for (short i_26 = 0; i_26 < 18; i_26 += 3) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    var_56 |= ((/* implicit */short) ((unsigned char) (unsigned short)7680));
                    arr_88 [i_25] [i_25] [i_27] [i_26] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)134)) && (((/* implicit */_Bool) arr_87 [11U] [(signed char)14] [(signed char)14] [i_27])))) && ((_Bool)1)));
                    var_57 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_25 + 4] [i_25 + 4] [i_25 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_25 - 1] [i_25 + 2] [i_25 + 2])) + (26531))) - (3)))));
                    var_58 = (~(((1LL) << (((((/* implicit */int) arr_51 [i_27] [i_26] [i_25])) + (5211))))));
                    var_59 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)207))));
                }
            } 
        } 
        arr_89 [i_25] [i_25] = ((1332219624038373688LL) << (((/* implicit */int) ((arr_34 [i_25] [i_25 + 1] [i_25 + 3] [i_25 + 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_25] [i_25 + 2] [i_25] [(signed char)5] [i_25 + 2] [i_25])))))));
        var_60 *= ((/* implicit */_Bool) (~(arr_76 [(short)2] [i_25 + 4] [i_25])));
        arr_90 [i_25] |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)134))));
    }
}
