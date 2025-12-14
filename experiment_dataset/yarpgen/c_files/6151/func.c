/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6151
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_9);
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8864548477813495653ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_13)))) : (var_3)));
                        arr_14 [i_1] = ((/* implicit */short) (signed char)103);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_10))));
                        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? (8864548477813495653ULL) : (var_8)));
                        arr_15 [i_1] [i_2] [i_2] [i_2] = (+(((/* implicit */int) (_Bool)0)));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = -9223372036854775795LL;
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)0)))) : (var_14)));
        var_20 ^= (~(9223372036854775801LL));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))));
    }
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_22 [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned char)254)) ? (12329582821562086500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22655))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_30 [i_7] [i_7] [i_8 - 3] = ((/* implicit */signed char) (unsigned short)14492);
                    arr_31 [i_6] [i_6] [i_7] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1)) : (((((/* implicit */_Bool) (unsigned short)61817)) ? (-8950532065886171918LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))))));
                    arr_32 [i_6] [i_6] [i_7] [i_7] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_7)) ? (13234471146095919795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_22 = 0ULL;
    }
    var_23 = var_12;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
    {
        arr_36 [i_9 + 2] [i_9] = ((/* implicit */unsigned short) var_9);
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7440)) ? (((/* implicit */int) (unsigned short)52290)) : (((/* implicit */int) (unsigned short)0))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned int i_11 = 2; i_11 < 21; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~(2130501031U)));
                            var_26 = ((/* implicit */unsigned short) var_11);
                        }
                        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                            var_28 = ((/* implicit */unsigned char) (_Bool)0);
                            arr_51 [i_14] [i_12] [i_10] = ((/* implicit */int) ((var_2) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        }
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */short) (+(((((/* implicit */_Bool) 69818988363776LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13265))) : (0ULL)))));
        var_30 = ((/* implicit */unsigned int) var_7);
    }
    for (long long int i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (short)7440)) ? (((/* implicit */unsigned long long int) var_14)) : (6117161252147465116ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 3) 
        {
            arr_60 [i_16] = ((((/* implicit */_Bool) (-(-1031277905)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(2130501031U))));
            arr_61 [i_16] [8LL] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (0ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1031277904)) : (14366097823325392004ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : ((-(35183835217920LL)))))));
        }
        var_32 = var_0;
    }
}
