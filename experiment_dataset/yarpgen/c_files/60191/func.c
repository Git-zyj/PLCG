/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60191
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
    var_14 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) (short)31220)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((signed char) (unsigned char)7))))));
    var_15 = ((/* implicit */short) var_12);
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) var_6);
        var_18 = (unsigned short)27066;
        arr_3 [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) 286930342)), (arr_1 [(short)10] [i_0]))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551615ULL))) - (18446744073709551586ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_14 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -875465182)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)91))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 4; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_1] [i_1] [(unsigned char)4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -1630716449)) || (((/* implicit */_Bool) arr_11 [i_4 + 1])))));
                        arr_18 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4149475160U)) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -1756184182)) ? (((/* implicit */int) (short)-25304)) : (((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)-32761))))) - (1)))))) : ((+(max((((/* implicit */unsigned int) (short)12380)), (arr_16 [i_1] [(short)15] [i_3] [i_4])))))));
                    }
                    for (unsigned int i_5 = 4; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 4217556402U))));
                        var_20 ^= ((/* implicit */long long int) ((1008077134U) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_3] [i_2])), (arr_13 [i_5 - 3] [i_3] [i_3] [i_2])))))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            var_21 -= ((/* implicit */short) (signed char)18);
                            arr_25 [i_6] [i_6] [i_3] [i_2] [i_6] = ((/* implicit */unsigned char) (unsigned short)13465);
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_29 [i_2] &= ((/* implicit */signed char) ((unsigned short) (unsigned short)13756));
                            arr_30 [i_8] [i_2] [i_6] [i_6 - 2] [i_8] = ((/* implicit */signed char) var_12);
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_33 [i_6] [i_2] [i_6] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((0ULL) <= (((/* implicit */unsigned long long int) 144115188075331584LL))));
                            var_23 = ((/* implicit */unsigned long long int) ((signed char) min((0ULL), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_6])))));
                        }
                        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_36 [i_1] [i_3] [i_6] [i_10] = ((/* implicit */_Bool) (signed char)78);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((/* implicit */int) arr_34 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 3] [i_6] [i_6 - 2])))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 92678376))));
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) / (((/* implicit */int) arr_22 [i_1] [i_6 - 2])))))));
                        }
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((77410893U) * (((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [i_6] [i_6 + 1] [i_6]), ((short)32738)))))))));
                        arr_38 [0ULL] [i_1] [i_1] [i_2] [i_1] [i_6] |= ((/* implicit */unsigned char) var_12);
                        var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5ULL) | (14741842779158316575ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : ((-(arr_15 [(short)21] [21ULL] [i_2] [i_3] [i_3] [i_6])))))) ? (min((((-223518753) / (((/* implicit */int) arr_21 [i_2] [i_2] [i_2])))), (((/* implicit */int) var_4)))) : ((((-(arr_35 [i_1] [i_1] [i_1]))) / (((/* implicit */int) ((signed char) arr_34 [i_1] [i_2] [i_3] [i_1] [i_2] [i_3])))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), ((((-(((/* implicit */int) (short)31246)))) < (((/* implicit */int) arr_34 [i_6 - 3] [i_6] [i_6 - 3] [i_6] [i_6] [i_6]))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) ((unsigned int) var_3))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 921323993)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))))));
                        arr_48 [i_11] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) 4408537432559047350ULL)) || (((/* implicit */_Bool) arr_21 [i_11] [2] [i_11])))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            arr_53 [i_1] [i_11] [i_1] = ((/* implicit */unsigned int) min((arr_28 [i_1] [i_1] [i_12] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((996742607136168347LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-7120))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_5))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_57 [i_11] [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_32 [i_1] [i_11] [i_12])) - (((/* implicit */int) (signed char)62)))), (((/* implicit */int) ((short) -1205810738)))));
                            arr_58 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((unsigned short) (signed char)73)))) + (((((/* implicit */_Bool) -1043849074)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (signed char)123))))));
                            arr_59 [i_1] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_35 [i_12] [i_11] [i_1]))) ^ (((int) arr_35 [i_1] [i_1] [i_12]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-77)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 981991369U)) && (((/* implicit */_Bool) arr_24 [i_16] [i_16])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_16] [i_16] [i_16] [i_16]))))) : (((/* implicit */int) var_3)))))));
        arr_63 [(unsigned char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((long long int) 2747075041U)) : (min((7808605496980980721LL), (7808605496980980721LL)))))) ? ((-(((/* implicit */int) (short)-18203)))) : (((/* implicit */int) ((short) max((-7808605496980980709LL), (((/* implicit */long long int) (signed char)55))))))));
        arr_64 [(unsigned char)4] = arr_4 [i_16];
        arr_65 [i_16] = ((/* implicit */int) (_Bool)1);
    }
    var_31 = ((/* implicit */signed char) var_8);
}
