/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78534
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (min((arr_0 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) arr_1 [i_0 - 3]))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) (~(-4051358253008035490LL)));
            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) 4051358253008035490LL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */long long int) arr_3 [i_1] [i_0] [i_1]))))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            var_18 = (+(((/* implicit */int) arr_5 [i_2 + 1] [i_2] [(unsigned char)16])));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((_Bool) (~(arr_4 [i_0] [i_0] [i_0]))));
                        arr_13 [i_0] [i_2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (arr_11 [i_0] [i_2] [i_3])))));
                        arr_14 [i_2] [i_3] [8LL] [i_2] [i_2] = ((/* implicit */unsigned short) (!(arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (4051358253008035490LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 2])))));
                            var_21 &= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)215)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_2] [i_2] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_2 + 3] [i_3 - 1] [(unsigned short)13] [i_5 + 2])) ? (-4051358253008035490LL) : (var_2)));
                        }
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((unsigned int) (short)1)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2] [i_4])))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) (+(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_25 = ((/* implicit */unsigned short) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_26 ^= ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_6 - 1] [i_6] [i_6])), (((unsigned short) var_9))))), ((+(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((max((max((4051358253008035490LL), (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_9] [i_6]))))))) & ((-(var_2)))));
                            var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) arr_22 [i_0 + 2] [i_6 - 1] [i_8 - 1]))))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)199))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-8338258)))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_10 [i_0] [i_0] [(short)4] [(short)4] [(short)4] [(short)4]))) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_6] [i_0])))))))));
                            var_30 = max((((/* implicit */long long int) ((arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? (((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) (unsigned char)166))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) (unsigned short)49173)))));
                            arr_31 [i_0] [i_6] [i_7] [(unsigned char)18] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_10)), (-4051358253008035465LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_0] [i_0] [i_0 - 3]))))) : (var_0)));
                        }
                    } 
                } 
            }
        }
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((_Bool) var_6)), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0 - 1])))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
    {
        var_32 = ((/* implicit */_Bool) arr_17 [i_10] [i_10]);
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)16348)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_10]))) : (arr_15 [(_Bool)1] [9ULL] [(_Bool)1] [9ULL] [i_10]))), (((((/* implicit */_Bool) (unsigned short)36086)) ? (4051358253008035490LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10 + 1]))))))))));
        arr_34 [(_Bool)1] &= ((/* implicit */unsigned char) (((~(arr_10 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1]))) < (((/* implicit */unsigned long long int) ((int) arr_33 [i_10 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_11] [i_11] [5ULL]))))));
        var_35 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11]))))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            var_36 = ((/* implicit */long long int) (+(arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [10LL] [i_12] [i_12])));
            arr_39 [i_11] [9U] [i_11] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) <= (((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_11] [11ULL] [i_11]))));
        }
    }
    var_37 *= ((/* implicit */short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_7)) - (166)))));
}
