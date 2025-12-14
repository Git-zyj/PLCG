/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58194
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_13 = (+(((/* implicit */int) var_2)));
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_0 + 1] [i_0] [i_4 - 1]) | (arr_11 [i_0 + 2] [i_0] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_6)))))) : (((((/* implicit */_Bool) 15832029542496927560ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_15 = ((/* implicit */unsigned char) ((long long int) arr_7 [i_0]));
                            arr_12 [i_3] [i_1] [i_0] [i_3] [i_4] [i_4] [12] = ((/* implicit */unsigned long long int) ((18371801194362152273ULL) != (var_9)));
                            var_16 = ((/* implicit */int) var_1);
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (var_4))))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((((/* implicit */unsigned long long int) (-(var_7)))) >= (max((((/* implicit */unsigned long long int) (unsigned char)0)), (18371801194362152287ULL))))) ? (var_5) : ((+(var_5)))))));
                        var_19 = ((/* implicit */unsigned char) max(((-(((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [i_1] [i_2] [i_0] [i_1] [i_3 - 1]))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_3)), (arr_0 [i_2]))))))));
                    }
                    for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_20 |= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)6803))))), (var_5)))));
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((18371801194362152270ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [12] [i_1] [i_2] [i_5 + 1])))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_5]))))) : ((+(arr_2 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 18371801194362152290ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (14120175985192256137ULL))) >= ((+(var_5)))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_22 [i_7] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(unsigned char)5] [i_6])) ? (((/* implicit */int) var_0)) : (25165824)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [8] [i_1] [i_6] [(unsigned char)2])) ? (((/* implicit */int) arr_13 [13ULL] [i_1] [13ULL] [i_7])) : (((/* implicit */int) var_1))))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_6] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */_Bool) 96)) ? (((/* implicit */int) (unsigned char)0)) : (-588878811))))))));
                            arr_23 [i_6] [i_0] [i_2 - 2] [i_0] [i_2 - 2] [i_0 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                            var_22 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0])))) - (((((/* implicit */int) arr_19 [i_0] [i_0] [i_2 + 1] [i_6])) - (((var_10) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_6] [i_7])) : (arr_5 [i_0] [i_0 + 2] [i_0 + 2] [i_0])))))));
                        }
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 18371801194362152278ULL)) ? (((unsigned long long int) var_11)) : (((((/* implicit */_Bool) arr_3 [6] [i_0])) ? (max((18371801194362152273ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1])))))))));
                        var_24 = (+(max((arr_6 [i_2 - 1] [i_2 + 1] [i_0 - 1] [i_2 - 2] [i_0 - 1] [i_0]), (arr_6 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_0 + 2] [i_0]))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_2 - 2] [i_2 - 2] [i_2] [i_1] [i_0] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45322))) : (arr_4 [i_2 + 1])))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1201079978264934780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_2 + 1] [i_8 + 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_1))))) : ((+(arr_7 [i_0])))))));
                                var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [i_0 + 1] [i_0]) : (((/* implicit */int) var_0))))));
                                var_28 = (-(max((1201079978264934799ULL), (((/* implicit */unsigned long long int) -1390942060)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            var_29 = ((var_7) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_10 + 1] [i_11])) ? (arr_29 [i_0] [i_0] [i_10 + 1] [i_11]) : (arr_29 [i_0] [i_1] [i_10 + 1] [i_11 + 2])))));
                            var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) 1125899906842623ULL))), (3947889793U)));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            var_31 += ((/* implicit */signed char) 18130017504927819344ULL);
                            var_32 = ((/* implicit */unsigned char) arr_19 [i_0] [i_10 + 1] [i_0] [i_13]);
                            var_33 ^= var_7;
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)208)) << (((347077502U) - (347077501U)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)2044))))) : (((arr_1 [i_13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38501))))))))));
                            arr_37 [i_0] [i_10] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) * (1023ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [(_Bool)1] [i_11])) : (((/* implicit */int) (short)-22955)))) : (((/* implicit */int) var_0))));
                        }
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                            var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_11] [15ULL] [15ULL])))))));
                        }
                        for (long long int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)114)), ((short)16980)))) ? (arr_43 [i_0] [i_0] [i_10] [i_11] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10918))) : (84000089908690961LL))))));
                            arr_45 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1201079978264934795ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9)), ((unsigned short)45325)))) : (((/* implicit */int) (short)17967))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45348)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */long long int) arr_39 [i_15] [i_15] [i_15] [i_0] [i_0] [i_1] [i_0])) : (((arr_40 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [11ULL]) >> (((((/* implicit */int) var_2)) + (24))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 316726568781732271ULL))))))));
                        }
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                        {
                            var_38 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_11 - 1])) : (arr_30 [i_16] [i_11] [i_10 - 2] [i_1] [i_0]))) ^ (((((/* implicit */_Bool) var_0)) ? (4927535480944960361ULL) : (var_11)))));
                            arr_48 [i_0] [i_1] [i_0] [i_11] [(short)0] |= ((/* implicit */unsigned short) (-(arr_41 [i_0] [i_0 - 1] [i_0] [(unsigned char)10] [i_0 + 2] [i_0])));
                        }
                        var_39 = ((/* implicit */unsigned long long int) max((313430130), (((/* implicit */int) max((arr_13 [i_11 - 2] [i_10] [i_1] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) 25165840)) || (((/* implicit */_Bool) -4063285624449490272LL))))))))));
                        arr_49 [i_0] [i_0] [i_10 - 1] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? ((+(((/* implicit */int) (unsigned char)186)))) : (((/* implicit */int) (unsigned char)232)))) < (394551988)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 1; i_17 < 20; i_17 += 4) 
                    {
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_5))));
                        var_41 = ((/* implicit */long long int) 18130017504927819344ULL);
                    }
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [13ULL] [i_0] [i_1] [i_10 - 2] [9])))) : ((+(max((var_9), (var_11))))))))));
                        var_43 = (+(1704123298));
                        /* LoopSeq 1 */
                        for (int i_19 = 1; i_19 < 20; i_19 += 3) 
                        {
                            var_44 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)69))))), (max((var_7), (((/* implicit */long long int) var_1)))))))));
                            arr_57 [i_0] [i_10] = ((/* implicit */signed char) ((int) (unsigned char)50));
                            var_45 += ((/* implicit */short) (unsigned short)0);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_18] [i_10 - 1] [i_18] [i_18])))), (((arr_26 [i_0 + 2] [i_0] [i_10 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                            arr_61 [i_0] [i_0] [i_1] [i_10] [i_10] [i_18] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_20] [i_20] [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -418976848))))));
                        }
                    }
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((var_4) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-6494))))))) : (((/* implicit */unsigned int) 1616330322))));
                }
                var_48 = ((/* implicit */short) max((15283296988859994566ULL), (((/* implicit */unsigned long long int) -7589690828272936124LL))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned char) var_9);
}
