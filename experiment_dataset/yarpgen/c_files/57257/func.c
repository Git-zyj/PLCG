/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57257
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
    var_14 &= var_2;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0 + 1] = ((/* implicit */_Bool) (unsigned short)16380);
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16394))));
        var_15 -= ((/* implicit */long long int) ((667216002) >= (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_12 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)16398))));
            arr_13 [i_2] = ((/* implicit */unsigned long long int) (-(-382147538)));
            arr_14 [i_2] [i_2] [i_1 + 3] = ((/* implicit */long long int) (unsigned short)26156);
        }
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
            {
                arr_21 [(_Bool)1] [i_4] [(signed char)4] [i_1] = ((/* implicit */unsigned short) 558551906910208LL);
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((int) (+(arr_18 [(unsigned short)20] [i_1 - 3] [0] [(unsigned char)10])))))));
            }
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((_Bool)1) ? (arr_18 [i_1] [i_1 - 3] [i_1] [8U]) : (4611686018427387903ULL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    arr_26 [(unsigned char)10] [i_6] [i_6] [i_6] [i_6 + 1] [(unsigned short)20] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_5] [(unsigned short)12] [i_5 + 4])) < (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)32640)))))));
                    arr_27 [i_1] [i_5 + 3] [16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_22 [i_1 - 1] [i_6 + 1] [i_5] [i_5]) < (((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 1] [i_6])))))));
                }
                arr_28 [(short)19] [10ULL] [i_1] = ((((/* implicit */int) (short)32661)) != (((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32661)))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((arr_17 [i_8] [i_1] [i_1 - 2] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)16384)))));
                            arr_33 [i_5 + 2] [4LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1 + 2] [i_5 + 3] [i_3 - 2]))));
                            arr_34 [i_8] [(unsigned short)6] [20LL] [i_3] [i_1] = ((/* implicit */unsigned int) arr_23 [i_3 - 1] [i_3] [i_3 - 1] [i_5 + 4]);
                            var_19 ^= ((/* implicit */long long int) (-(arr_19 [i_3 + 1] [i_5])));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
            {
                arr_37 [(unsigned char)2] [i_3] [i_9 + 1] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(_Bool)1] [(_Bool)1] [(signed char)11] [i_3 - 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned int) (+(arr_20 [(_Bool)1])))) : (arr_17 [(unsigned char)16] [i_1 - 2] [i_1] [i_1 + 2])));
                var_20 = ((/* implicit */_Bool) arr_36 [(unsigned short)2] [i_3 - 2] [i_9 + 4]);
                var_21 = ((/* implicit */_Bool) max((var_21), (((arr_23 [i_1 + 3] [i_9] [i_9 - 1] [i_9]) < (((/* implicit */int) ((arr_32 [i_1] [i_3 - 1] [i_3] [3U] [i_9]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_22 = ((/* implicit */unsigned int) 128849018880LL);
            }
            var_23 |= ((/* implicit */unsigned short) arr_4 [i_3 - 1] [i_1 + 3]);
        }
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_41 [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (!(((/* implicit */_Bool) 3751942895321015291LL)))))));
            /* LoopSeq 2 */
            for (short i_11 = 3; i_11 < 22; i_11 += 4) 
            {
                arr_45 [i_11] = ((/* implicit */unsigned long long int) ((4227858432U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 192LL)) < (arr_25 [i_1] [(short)12] [i_10] [i_11])))))));
                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -667216008)) ? (((/* implicit */unsigned long long int) 3987908976U)) : (5220917397936900217ULL))) >= (((/* implicit */unsigned long long int) (+(193LL))))));
                arr_46 [18U] [i_11] [i_11] = ((/* implicit */unsigned char) arr_44 [i_10] [i_10] [i_10] [i_1 + 1]);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)28))));
                var_26 -= ((2233785415175766016ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))));
                var_27 ^= ((/* implicit */unsigned int) (signed char)-8);
                arr_49 [i_1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) < (262143U)));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((long long int) arr_4 [i_1 + 3] [i_13]));
            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)6))) != (-7250466638733407279LL)))) >= (((/* implicit */int) arr_11 [i_1] [(unsigned short)2]))));
        }
    }
    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        arr_55 [8ULL] |= ((/* implicit */unsigned short) 3794029691590266881LL);
        var_30 = ((/* implicit */_Bool) (+(((long long int) arr_39 [2ULL] [i_14 + 2] [(_Bool)1]))));
    }
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_12))));
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 16368U)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-32)), (var_7)))))))))));
}
