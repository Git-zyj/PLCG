/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80026
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_1), (((/* implicit */signed char) ((_Bool) 1577926222U))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_7)), (0ULL))), (var_9)))) || (((/* implicit */_Bool) (unsigned char)64))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) 1289956456U)) ? (480699208U) : (2717041074U)))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_4)))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 7; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1577926222U)) ? (1577926221U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 49152)))))) : ((+(2717041073U)))));
                            var_13 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_5)))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_2])))));
                arr_16 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_2])) * (((/* implicit */int) var_5)))) % (((/* implicit */int) ((_Bool) var_8)))));
            }
            for (short i_5 = 3; i_5 < 6; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_6 = 3; i_6 < 8; i_6 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_6] [i_6 + 2] [i_5]))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) < (arr_1 [i_6 - 2] [i_7]));
                        arr_26 [i_0] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_4);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_23 [i_7] [i_0] [i_5] [i_1] [i_5] [i_0] [i_0]))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_6] [i_5])) ? (var_0) : (var_0)))) ? (((arr_10 [i_7] [i_6] [i_0] [i_0] [i_0]) | (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_2 [i_0] [i_1]))))));
                    }
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_6] [i_6 + 2] [i_5] [i_5])) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_5 - 1] [i_6 - 2] [i_5 - 1] [i_6]))));
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) 480699195U)))))));
                    arr_30 [i_5] [i_5] [i_5] [i_5] [i_0] = (+(arr_20 [i_5] [i_5] [i_5 + 1] [i_5 + 4] [i_5]));
                    var_19 = ((/* implicit */long long int) ((3814268094U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_27 [i_0] [i_0] [i_5 + 2])) ^ (((/* implicit */int) (signed char)30))))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_34 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_5 - 2] [i_5])) ^ (((/* implicit */int) ((_Bool) 0LL)))));
                    arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */int) (signed char)-60)) / (((/* implicit */int) arr_18 [i_0] [i_0] [i_5]))))));
                    var_22 = ((/* implicit */signed char) ((int) arr_11 [i_5 + 3] [i_1] [i_5] [i_9] [i_5] [i_1]));
                }
                for (unsigned int i_10 = 2; i_10 < 6; i_10 += 2) 
                {
                    arr_38 [i_0] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_9))))));
                    var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_19 [i_0] [i_0])))))))));
                    var_24 = var_5;
                    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_1]))))) ? ((~(arr_1 [i_5] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                }
                arr_39 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22343)))))));
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    arr_42 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((12601170101296592678ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                    arr_43 [i_5] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11453618371282493625ULL)));
                    arr_44 [i_0] [i_0] [i_0] [i_5] [i_11] |= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_11] [i_11 - 1]))) : (var_9)));
                }
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    arr_48 [i_0] [i_0] [i_5] [i_5] [i_12] = ((/* implicit */int) (unsigned char)247);
                    arr_49 [i_5] = ((/* implicit */signed char) -1);
                    var_26 = ((/* implicit */unsigned char) arr_31 [i_0] [i_1] [i_1] [i_5] [i_12]);
                }
                var_27 = ((/* implicit */unsigned char) 1577926204U);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)253))));
                            var_29 = ((/* implicit */short) ((((unsigned int) 4839633231952161361ULL)) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */_Bool) var_6)) ? (arr_54 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_15] [i_0] [i_15] [i_15]))))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-1681149548) >= (-1792857883)))) >> (((((((/* implicit */int) var_8)) << (((/* implicit */int) var_2)))) - (141)))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_33 [i_0] [i_15] [i_16] [i_17])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_37 [i_0] [i_15] [i_15] [i_17])))) ? (((unsigned int) 7252568294175274331ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) ((unsigned long long int) 19ULL));
            }
        }
        for (unsigned long long int i_19 = 4; i_19 < 7; i_19 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
            var_36 += ((/* implicit */unsigned char) arr_71 [i_19 + 1] [i_19 - 2]);
        }
        arr_73 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 19ULL));
        var_37 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_0]))) : (16769024U)));
        arr_74 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_0] [i_0])) <= (((/* implicit */int) arr_64 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_20 = 1; i_20 < 10; i_20 += 2) 
    {
        arr_78 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((var_2) ? (var_6) : (((/* implicit */int) arr_75 [i_20])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) arr_75 [i_20]))))));
        var_38 = ((/* implicit */unsigned short) arr_77 [i_20 - 1]);
    }
}
