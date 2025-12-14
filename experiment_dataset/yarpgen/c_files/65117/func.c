/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65117
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), ((short)32147)))) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((int) arr_1 [i_0]))));
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */int) (short)-27938))))) | (var_0)));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1 - 2] = ((unsigned long long int) min((((int) arr_0 [i_1 - 1])), (((/* implicit */int) arr_4 [i_1 + 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((int) arr_3 [i_1 + 1] [i_2 - 1]));
            arr_8 [i_1 - 1] [i_1 + 1] [i_2 - 1] = ((/* implicit */unsigned char) var_11);
            var_15 -= ((/* implicit */signed char) arr_4 [i_1 - 2]);
            arr_9 [i_2 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */short) (-(var_2)));
                        arr_21 [i_3] [i_3] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) var_4);
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1382071679U))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */short) (~(-1396866350)));
                        arr_30 [i_9] [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (1649267441664ULL) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        arr_31 [i_9] = ((/* implicit */_Bool) var_0);
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_8] [i_7] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (0U) : (((/* implicit */unsigned int) -689731782)))))));
                    }
                    var_20 ^= ((arr_25 [i_3] [i_4 + 3] [i_8] [i_4 + 3]) > (((/* implicit */unsigned int) 689731766)));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_36 [i_10] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3] = ((/* implicit */unsigned int) var_7);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) 1419446964)))));
                    }
                    for (int i_11 = 2; i_11 < 20; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((signed char) arr_28 [i_4 + 2] [i_4 + 2] [i_4 - 1]));
                        arr_40 [i_11 - 1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_11 + 1] [i_4 + 2] [i_7])) ? (arr_33 [i_3] [i_4 + 2] [i_8] [i_8] [i_3]) : (var_9)));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_34 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 1])));
                        var_24 ^= ((/* implicit */_Bool) var_0);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_4 + 2] [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2])))))));
                    }
                }
                for (short i_13 = 1; i_13 < 20; i_13 += 4) 
                {
                    var_26 = 805306368;
                    var_27 = ((/* implicit */unsigned int) 1396866350);
                }
                for (unsigned short i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    arr_49 [i_14 - 1] [i_4 + 1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_16 [i_14 - 2] [i_7])))));
                    arr_50 [i_14 - 3] [i_7] [i_4 - 1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1024))));
                    arr_51 [i_3] [i_3] [i_3] [i_3] = var_8;
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) var_6);
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_9)));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_17 = 4; i_17 < 17; i_17 += 1) 
        {
            arr_63 [i_17 + 1] [i_3] [i_3] = -2069083270;
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                arr_67 [i_3] = ((/* implicit */unsigned char) ((short) arr_54 [i_17 - 4] [i_17 + 4]));
                var_30 = ((/* implicit */_Bool) (~(1396866350)));
                arr_68 [i_18] [i_17 - 2] [i_17 + 4] [i_3] = ((/* implicit */long long int) var_7);
            }
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 1; i_20 < 18; i_20 += 1) 
                {
                    var_31 ^= ((/* implicit */unsigned int) max(((+(arr_55 [i_17 - 4] [i_19] [i_20 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_32 ^= ((/* implicit */short) ((unsigned int) (~(arr_22 [i_20 + 1] [i_20 + 2] [i_20 + 3] [i_20 + 2]))));
                }
                var_33 ^= var_10;
                arr_75 [i_19] [i_17 + 4] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_64 [i_17 + 2] [i_17 + 4] [i_17 + 2]), (arr_64 [i_17 - 1] [i_17 - 2] [i_17 + 3])))), (((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_19])) ? (((/* implicit */int) var_6)) : (arr_60 [i_17 - 2] [i_19]))))));
            }
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_3]), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) > (((/* implicit */int) (signed char)56)))))))) : (((unsigned long long int) min((var_8), (((/* implicit */unsigned char) var_4)))))));
        }
        /* vectorizable */
        for (short i_21 = 3; i_21 < 18; i_21 += 3) 
        {
            var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (0U)));
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) -1396866339);
                var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)229)) << (((/* implicit */int) var_4))))));
            }
        }
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)20)) + (((/* implicit */int) var_1)))))) ? (arr_82 [i_3]) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-689731801))))));
    }
    /* vectorizable */
    for (short i_23 = 0; i_23 < 21; i_23 += 2) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) (!(var_4)));
        var_40 ^= ((/* implicit */signed char) arr_53 [i_23] [i_23]);
        var_41 = ((/* implicit */unsigned int) 4294967295ULL);
    }
}
