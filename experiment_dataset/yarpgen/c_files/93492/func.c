/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93492
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (short)10762)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_7)))))))) : (var_9)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_11 = ((/* implicit */short) ((arr_0 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3]);
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (arr_0 [i_4 + 1] [i_4 - 2]) : (arr_0 [i_4 + 3] [i_4 - 1])))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_9 [i_3 + 2] [i_3] [i_3 + 2] [i_4 + 2] [i_4] [i_4])))) : ((~(((/* implicit */int) (short)10762))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) var_1);
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 2])))) : ((-(((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_0]))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                var_16 = ((/* implicit */unsigned int) var_7);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_15 [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_5] [i_0])))) % (((/* implicit */int) (signed char)4))));
                var_18 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0]);
            }
            var_19 *= ((/* implicit */signed char) max((1268654394U), (((/* implicit */unsigned int) (unsigned char)46))));
        }
        for (signed char i_7 = 2; i_7 < 22; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9 - 1] [i_9 - 1]))))) ? (arr_8 [i_8] [i_7]) : (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_4)))))));
                        var_21 = ((/* implicit */unsigned int) arr_4 [i_7 + 1]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-4)) | (var_5)))) ? (min((((/* implicit */long long int) var_7)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_7] [i_7 - 1] [i_7]), (arr_13 [i_7] [i_7 - 2] [i_8])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (signed char)-19))));
                        var_24 |= ((/* implicit */signed char) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_1 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    var_25 = ((/* implicit */int) var_0);
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (969669952U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_7] [i_7])) / (((/* implicit */int) var_6)))))));
                    var_27 = (+(((/* implicit */int) arr_27 [i_7] [i_7 + 1])));
                }
                for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_5))));
                    var_29 = ((/* implicit */unsigned int) var_1);
                    var_30 ^= ((/* implicit */_Bool) ((arr_0 [i_7 - 1] [i_7 - 2]) | (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_7 + 1] [i_7 - 1])))));
                    var_31 -= ((/* implicit */int) var_6);
                    var_32 = ((/* implicit */signed char) (~((~(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
                for (unsigned char i_15 = 3; i_15 < 21; i_15 += 1) 
                {
                    var_33 ^= ((/* implicit */signed char) (unsigned char)25);
                    var_34 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), ((~(((((/* implicit */_Bool) -1)) ? (var_9) : (((/* implicit */long long int) var_5)))))));
                    var_35 = ((/* implicit */unsigned int) arr_27 [i_15] [i_12]);
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1011039544U)) ? (((/* implicit */int) (short)-10764)) : (((/* implicit */int) (unsigned char)121))));
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_12 - 1])) > (((/* implicit */int) var_0)))) ? ((-(((/* implicit */int) (short)13112)))) : (((/* implicit */int) (short)-13112))));
                        var_38 = ((/* implicit */int) var_6);
                        var_39 = ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned long long int) var_1);
                        var_41 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((short)11485), (((/* implicit */short) (unsigned char)0))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_15])) + (((/* implicit */int) arr_4 [i_17]))))) ? ((+(((/* implicit */int) arr_4 [i_0])))) : (-1)))));
                        var_42 = ((/* implicit */long long int) arr_18 [i_12] [i_12 - 1] [i_12 - 1]);
                    }
                    for (unsigned int i_18 = 3; i_18 < 22; i_18 += 4) 
                    {
                        var_43 = ((/* implicit */signed char) arr_50 [i_18] [i_0] [i_12] [i_15] [i_15]);
                        var_44 = min((((/* implicit */long long int) arr_33 [i_18])), (var_3));
                    }
                }
                var_45 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_27 [i_7 - 2] [i_12])) / (((/* implicit */int) arr_2 [i_12] [i_0])))), (((/* implicit */int) var_1))));
            }
            for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) (~((+(arr_53 [i_20] [i_20] [i_7 - 1] [i_7])))));
                            var_47 = ((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_20])))))));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_8))));
                            var_49 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7 - 2]);
                        }
                    } 
                } 
                var_50 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_0] [i_0] [i_0] [i_7] [i_19] [i_19])) - (((/* implicit */int) arr_48 [i_0]))))) ? (arr_37 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_2))))))) >= (((((/* implicit */int) (unsigned char)219)) ^ (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((short)10748))))))));
                var_51 = ((/* implicit */short) max((max((((/* implicit */unsigned char) arr_2 [i_0] [i_7 + 1])), (var_8))), (((/* implicit */unsigned char) arr_2 [i_0] [i_7 + 1]))));
            }
            /* vectorizable */
            for (unsigned char i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                var_52 = ((/* implicit */unsigned char) arr_52 [i_0] [i_7] [i_7 - 2]);
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(-18)))) >= (arr_52 [i_0] [i_7] [i_22])));
                var_54 ^= ((/* implicit */long long int) (unsigned char)38);
            }
            var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) var_7))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned char)241), (arr_67 [i_0])))))))));
            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17457150856701075942ULL)) ? (17457150856701075942ULL) : (((/* implicit */unsigned long long int) 7U))));
            var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min((arr_14 [i_0] [i_23]), (arr_14 [i_0] [i_0])))))))));
        }
        var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) ? (-8473785869650558508LL) : (((/* implicit */long long int) 9164879))));
        var_60 = ((/* implicit */unsigned int) arr_33 [i_0]);
        var_61 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_41 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0])) : (arr_33 [i_0])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-10764)) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_24 = 1; i_24 < 9; i_24 += 1) 
    {
        var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_24] [i_24] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)))) ? (var_3) : (((((/* implicit */_Bool) 1011039545U)) ? (arr_62 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) : (arr_31 [i_24] [i_24] [i_24])))))) ? (((var_4) ? (((/* implicit */unsigned long long int) 3026312899U)) : (10336293534675019495ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_24 - 1] [i_24 + 1]))))));
        var_63 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_55 [i_24 - 1] [i_24]))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_51 [i_24 - 1] [i_24 - 1] [i_24 + 1])))));
    }
}
