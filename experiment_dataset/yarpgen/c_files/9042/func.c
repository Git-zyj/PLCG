/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9042
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((long long int) ((_Bool) var_2))), (((/* implicit */long long int) 1422681964)))))));
                        var_14 -= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) -1413092935))) + (((/* implicit */int) ((32505856U) != (max((32505856U), (((/* implicit */unsigned int) (unsigned char)193))))))))))));
                        var_16 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((3243465299U) ^ (((/* implicit */unsigned int) var_9))))) ? (-4531672869519956773LL) : (((/* implicit */long long int) (+(3676258883U))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (-1794583612) : (-1825937332)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_8)))));
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)1008)) ? (2205044342U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32657)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            var_20 &= ((/* implicit */int) ((((/* implicit */long long int) var_10)) & (-4985059936945485314LL)));
                            var_21 += (~(2113868857U));
                            var_22 = ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (arr_0 [i_6 - 1]) : (var_10));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_6 + 1]))));
                            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)3)) ? (870832547U) : (32505856U)));
                            var_24 = ((/* implicit */_Bool) (-(arr_6 [i_6 - 2] [i_6] [i_5])));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_1 [i_4]))));
                            arr_27 [i_6] [i_6] [(short)0] [i_7] [i_7] [i_9] = ((/* implicit */short) arr_25 [i_6 - 2] [i_5 + 3]);
                        }
                    }
                } 
            } 
        } 
        arr_28 [i_4] = ((/* implicit */int) ((short) arr_14 [6] [i_4] [i_4]));
        var_26 = var_5;
        /* LoopSeq 2 */
        for (int i_10 = 2; i_10 < 19; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_11 = 4; i_11 < 16; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (unsigned char i_13 = 3; i_13 < 18; i_13 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1944471575)) ? (0U) : (1712213268U)));
                            var_28 = ((/* implicit */unsigned short) arr_22 [i_11 + 3] [i_11] [i_11 - 1]);
                            var_29 = ((/* implicit */int) ((unsigned short) arr_24 [i_4] [i_10] [i_4]));
                        }
                    } 
                } 
            } 
            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (17255226018779224448ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((short) 12471913678693527343ULL))) : (((/* implicit */int) arr_36 [i_4] [i_10] [i_4] [i_4] [i_10 - 1]))));
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 17; i_14 += 4) 
            {
                for (unsigned int i_15 = 2; i_15 < 19; i_15 += 3) 
                {
                    {
                        var_31 = var_12;
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((2217898079U) >> (((((/* implicit */int) (signed char)-22)) + (42))))) < (((3828812472U) * (var_8))))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((long long int) arr_37 [i_15 - 1])))));
                        var_34 = ((/* implicit */short) -1601486494);
                    }
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            var_35 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-18140)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27114))) : (355140950U))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))))));
            var_36 -= var_1;
            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_37 [i_4]))));
            arr_46 [i_4] [i_16] [i_16] = ((/* implicit */unsigned char) ((long long int) arr_6 [i_4] [i_4] [i_4]));
        }
    }
    var_38 = ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((((/* implicit */long long int) var_0)) * (((((/* implicit */long long int) ((/* implicit */int) (short)-12218))) / (2929169707019055160LL))))));
    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_9))));
}
