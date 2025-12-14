/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75899
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) var_13);
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2066484934U)))), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_3 [i_1] [i_1])) / (arr_8 [i_0] [i_1] [i_2]))) : (arr_8 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) 8ULL)) ? (18446744073709551610ULL) : (18446744073709551599ULL)))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((~(8ULL))) == (18446744073709551608ULL)))), (18446744073709551599ULL))))));
                            var_16 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3]);
                            arr_15 [i_3] = ((/* implicit */int) ((((17ULL) % (((/* implicit */unsigned long long int) arr_2 [i_2 + 4] [i_2] [i_3])))) >= (((18446744073709551608ULL) >> (((arr_2 [i_2 + 1] [i_3] [i_3]) - (4273907344722118474LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */_Bool) 18446744073709551600ULL);
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (16ULL) : (17ULL)))) ? (max((var_10), (((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18ULL)))))))));
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_6 [i_1])))), (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (17ULL) : ((-(18446744073709551596ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_28 [i_9] [i_6] [i_6] [i_6] = ((((/* implicit */int) var_4)) << (((max((20ULL), (0ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((((8ULL) << (((18446744073709551615ULL) - (18446744073709551579ULL))))) & ((~(18446744073709551607ULL))))), (((/* implicit */unsigned long long int) (~(var_12))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (((+(min((arr_11 [i_6] [i_7] [i_10]), (18446744073709551608ULL))))) | (18446744073709551599ULL)));
                            var_21 |= ((/* implicit */short) 16ULL);
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_4 [i_10] [i_10])))), ((!(((/* implicit */_Bool) 7ULL)))))))) > (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) arr_8 [i_10] [i_10] [i_10 - 2])) : (arr_24 [i_10] [i_10] [i_10 - 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 14; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_12);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                            var_25 *= ((/* implicit */_Bool) (+((-(((arr_37 [i_6] [i_6] [i_13] [i_6]) % (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_47 [i_14] [i_14] [i_14] [i_16] [i_17] = ((/* implicit */_Bool) (~(((long long int) 1ULL))));
                            var_26 = ((((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_16])) ? ((-(((((/* implicit */_Bool) arr_16 [i_14] [i_16] [i_14])) ? (((/* implicit */unsigned long long int) arr_37 [i_14] [i_14] [i_14] [i_17])) : (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_14])) || (arr_20 [i_15] [i_16]))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8ULL)) ? (8ULL) : (18446744073709551607ULL)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_18 = 1; i_18 < 10; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        for (long long int i_20 = 2; i_20 < 10; i_20 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((3ULL) << (9ULL))) < (9ULL)))) >= (((/* implicit */int) var_1))));
                                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_14)) > (18446744073709551615ULL)));
                                var_30 = ((/* implicit */unsigned short) ((arr_51 [i_18 + 3] [i_18 + 2] [i_20 - 1] [i_20 + 2]) ? (max((0ULL), (arr_26 [i_14] [i_18 - 1] [i_20 + 2] [i_20 - 2]))) : (min((arr_26 [i_14] [i_18 + 3] [i_20 + 1] [i_20 - 1]), (arr_26 [i_14] [i_18 + 1] [i_20 - 2] [i_20 + 1])))));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 18446744073709551602ULL))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1ULL)))) ? (min((((/* implicit */unsigned long long int) ((18446744073709551615ULL) >= (0ULL)))), (18446744073709551589ULL))) : (13ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) 18446744073709551615ULL);
                            arr_63 [i_14] [i_15] [i_14] [i_21] [i_22] = ((/* implicit */signed char) ((unsigned short) (~(((3ULL) & (18446744073709551613ULL))))));
                            var_34 = ((/* implicit */unsigned char) ((signed char) var_5));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 25; i_23 += 1) 
    {
        for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        {
                            arr_75 [(_Bool)1] [i_24] [i_25] [i_26] |= ((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) arr_66 [i_26])), (18446744073709551615ULL))) & (((((/* implicit */_Bool) arr_67 [(unsigned short)22] [i_24] [i_25])) ? (12ULL) : (13ULL))))) | (((((/* implicit */_Bool) ((signed char) arr_65 [i_26]))) ? (((((/* implicit */_Bool) arr_65 [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551611ULL))) : (18446744073709551596ULL)))));
                            arr_76 [i_24] = ((/* implicit */short) (-(18446744073709551599ULL)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    for (short i_28 = 2; i_28 < 22; i_28 += 4) 
                    {
                        for (short i_29 = 0; i_29 < 25; i_29 += 3) 
                        {
                            {
                                arr_84 [i_24] [i_28 + 1] [i_27] [i_24] [i_24] = ((/* implicit */short) arr_79 [i_23] [i_24]);
                                var_35 = (i_24 % 2 == 0) ? (((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551600ULL))) >> (((arr_73 [i_23] [i_24] [i_27] [i_28] [i_29]) + (7441432168882331069LL))))), (((/* implicit */unsigned long long int) ((13ULL) > (((/* implicit */unsigned long long int) var_12)))))))) : (((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551600ULL))) >> (((((arr_73 [i_23] [i_24] [i_27] [i_28] [i_29]) + (7441432168882331069LL))) - (5518089220496928974LL))))), (((/* implicit */unsigned long long int) ((13ULL) > (((/* implicit */unsigned long long int) var_12))))))));
                                arr_85 [i_23] [i_24] [i_24] [i_27] [i_24] [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_10), ((~(var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(8ULL)))))) : (max((var_0), (max((((/* implicit */unsigned long long int) arr_68 [i_24] [i_24])), (arr_79 [i_23] [i_24])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_30 = 0; i_30 < 25; i_30 += 3) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_91 [i_23] [i_24] [i_30] [i_24] = ((/* implicit */_Bool) arr_80 [i_23] [i_23] [i_23] [i_30] [i_31]);
                            var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(arr_77 [i_23])))), (max((((/* implicit */unsigned long long int) arr_77 [i_24])), (3ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
