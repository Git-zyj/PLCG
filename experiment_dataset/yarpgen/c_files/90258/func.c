/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90258
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)255)) ? (((((/* implicit */unsigned long long int) 2045021228U)) ^ (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) -5084157466450413267LL);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-55);
            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1 + 2]))));
            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [i_0 + 3])) < (7870647260910736704ULL))))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_6))));
                        arr_17 [i_0 + 2] = ((/* implicit */unsigned short) max((((/* implicit */int) max(((unsigned char)20), (arr_3 [i_0] [i_0] [i_0 - 1])))), ((+(((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2]))))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_2)))));
                            var_21 = ((((/* implicit */_Bool) min((arr_32 [i_0 + 2] [i_6] [i_6] [i_6 + 2] [i_7]), (arr_21 [i_0 + 3] [i_5])))) ? (max((((/* implicit */long long int) 1971171262U)), (-3178505898505592560LL))) : (max((576460752303423487LL), (((/* implicit */long long int) arr_32 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_6 + 1] [i_8])))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) var_0)) - (((7870647260910736692ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30930))))))));
            arr_33 [i_0] = ((/* implicit */unsigned char) ((10576096812798814923ULL) << (((((((unsigned long long int) (unsigned short)54469)) << (((7870647260910736677ULL) - (7870647260910736663ULL))))) - (892420085ULL)))));
            arr_34 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) var_15));
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                for (long long int i_10 = 3; i_10 < 15; i_10 += 4) 
                {
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((unsigned short) (-(((((/* implicit */_Bool) (unsigned short)41835)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57123))))))));
                        arr_43 [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */signed char) arr_1 [i_5] [i_0]);
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned long long int) 2047905377U);
    }
    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), ((+(((/* implicit */int) var_3))))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) < ((~(max((7870647260910736704ULL), (((/* implicit */unsigned long long int) var_9))))))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 14; i_13 += 4) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    {
                        arr_53 [i_11] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */long long int) var_9);
                        var_26 = ((/* implicit */long long int) var_8);
                        arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) -7490637891847749091LL);
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)252))));
                        arr_55 [i_11] [i_12] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_11 + 3])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
        {
            arr_60 [i_11] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) 1412750920U)) : (12573497638157330836ULL)));
            var_28 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)45765))))));
            var_29 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_13))))));
            var_30 &= ((/* implicit */signed char) (!(((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        }
    }
    var_31 = ((/* implicit */unsigned short) var_2);
}
