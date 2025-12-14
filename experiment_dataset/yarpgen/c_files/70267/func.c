/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70267
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) ((signed char) (signed char)54)))));
                                arr_16 [11] [i_3] [i_2] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((_Bool) -8576972148111866363LL)) ? (((/* implicit */int) min(((unsigned short)1575), (((/* implicit */unsigned short) (unsigned char)32))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(signed char)9] [i_1] [i_1])) % (((/* implicit */int) arr_8 [i_4] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_2)))))));
                                var_19 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_15 [i_0] [i_1] [0U] [i_3] [i_0] [i_1] [i_1]) : (arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_4])))), (arr_6 [i_0] [i_0 - 1] [i_4]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (arr_3 [4LL] [4LL]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned char i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [(unsigned char)11])) ? (((/* implicit */int) var_15)) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -248705574)) && (((/* implicit */_Bool) 2620929098475498872ULL))))) : (((/* implicit */int) (unsigned char)26))));
                                var_21 = ((/* implicit */unsigned char) arr_15 [i_0] [i_6 - 1] [i_5] [i_5] [(unsigned char)3] [i_0] [i_0]);
                                arr_25 [i_0] [i_1] [i_5] [(_Bool)0] [i_6] [i_7] = ((int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 2]))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((6119018552742979120LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) arr_18 [i_7] [i_6 + 4]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_10 [i_0] [i_9] [(unsigned char)9] [i_0] [i_0 - 1]);
                            arr_32 [i_9] [i_0] [i_1] [i_0] = ((/* implicit */int) max((max((arr_14 [i_1 + 3] [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) 5337105486791624816LL)))), (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1])), (11382343457061560859ULL)))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) & (143833713099145216ULL))));
                            var_25 *= ((unsigned long long int) var_4);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (15825814975234052737ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13094)))))))) ? (((((/* implicit */_Bool) var_15)) ? (791699523U) : (((/* implicit */unsigned int) arr_37 [i_11] [i_1 - 4] [i_0 - 1] [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_22 [i_11] [i_10] [i_1]))))) > (((/* implicit */int) ((((/* implicit */int) (signed char)95)) == (((/* implicit */int) arr_1 [i_0]))))))))))))));
                            var_27 ^= max((2147483647), (((/* implicit */int) (signed char)-48)));
                            arr_38 [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((signed char)40), ((signed char)-70));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 1; i_12 < 18; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        for (int i_16 = 3; i_16 < 17; i_16 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) % (3503267773U)))), (((((/* implicit */_Bool) arr_47 [i_12] [i_16 + 1] [i_14] [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (var_6)))));
                                arr_51 [i_12] [6ULL] [i_12 + 1] [i_12 - 1] [14U] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_48 [i_12 - 1] [i_14 + 1] [i_14] [i_15] [i_16 - 1] [i_14])))) ? ((+(((/* implicit */int) arr_48 [i_12 - 1] [i_12 - 1] [(short)9] [i_12 - 1] [i_16 + 1] [i_12])))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 2; i_18 < 17; i_18 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (arr_41 [i_13]) : (((/* implicit */unsigned long long int) ((unsigned int) 188334699U)))));
                                var_30 ^= ((/* implicit */short) max((((/* implicit */int) ((signed char) ((int) var_15)))), (((((/* implicit */_Bool) ((4194303ULL) >> (((var_6) - (5116516064068053204LL)))))) ? (((int) 1240027114U)) : (((((/* implicit */_Bool) 1812194484417292726ULL)) ? (((/* implicit */int) arr_44 [i_12 + 1] [i_12] [i_12 + 1])) : (((/* implicit */int) (signed char)-8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_19 = 2; i_19 < 16; i_19 += 2) 
    {
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_21 = 3; i_21 < 16; i_21 += 1) 
                {
                    for (unsigned int i_22 = 1; i_22 < 17; i_22 += 2) 
                    {
                        for (signed char i_23 = 0; i_23 < 18; i_23 += 3) 
                        {
                            {
                                var_31 += ((/* implicit */signed char) 11382343457061560857ULL);
                                var_32 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) min((arr_46 [i_23] [i_22] [i_21] [i_21] [i_20] [i_19]), (((/* implicit */short) arr_43 [i_19])))))) ^ (var_12))), (((/* implicit */long long int) ((signed char) ((unsigned short) 2147483647))))));
                                arr_73 [i_23] [(unsigned short)10] [i_21] [i_20] [i_19] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1500278192546139548LL)) & (arr_61 [i_19] [i_19 + 2] [(short)9]))), (min(((~(18446744073705357299ULL))), (max((arr_56 [i_19] [i_19] [i_19]), (((/* implicit */unsigned long long int) (signed char)-111))))))));
                                var_33 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    for (unsigned short i_25 = 2; i_25 < 15; i_25 += 2) 
                    {
                        for (unsigned int i_26 = 3; i_26 < 16; i_26 += 1) 
                        {
                            {
                                arr_82 [i_24] [12U] [i_20 + 1] [i_20] [i_20] [i_20 + 1] = ((/* implicit */short) max((((/* implicit */long long int) ((short) arr_41 [i_19 + 2]))), (-1926658448330945185LL)));
                                arr_83 [i_19 - 1] [i_24] [i_20] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) arr_58 [i_25 - 1])), (((((/* implicit */_Bool) var_10)) ? (arr_77 [i_19] [(short)16]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                                var_34 = ((/* implicit */unsigned char) 7885816327939378680ULL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 17; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_27 - 1] [i_27] [i_27] [i_27] [i_27 - 1] [i_27 + 1]))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_59 [i_27])) : (5ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9526898048709585019ULL)) ? (((/* implicit */int) ((((/* implicit */int) arr_44 [11U] [10U] [i_27])) <= (((/* implicit */int) (unsigned short)36482))))) : (((/* implicit */int) var_0)))))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max((10560927745770172935ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)39)), (var_3))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_29 = 0; i_29 < 13; i_29 += 4) 
    {
        for (unsigned int i_30 = 0; i_30 < 13; i_30 += 2) 
        {
            for (unsigned int i_31 = 3; i_31 < 9; i_31 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_32 = 2; i_32 < 11; i_32 += 2) 
                    {
                        for (unsigned long long int i_33 = 0; i_33 < 13; i_33 += 2) 
                        {
                            {
                                arr_105 [i_29] [i_30] [i_31 - 1] [i_32 - 2] [0LL] = ((/* implicit */signed char) var_16);
                                var_37 = ((/* implicit */short) var_15);
                                var_38 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                                var_39 *= ((/* implicit */unsigned int) arr_102 [(unsigned short)9]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_34 = 0; i_34 < 13; i_34 += 4) 
                    {
                        for (int i_35 = 3; i_35 < 11; i_35 += 2) 
                        {
                            {
                                arr_111 [i_29] [i_29] [i_29] [i_29] [2ULL] [i_29] = ((/* implicit */long long int) max((((10088851823538630684ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)13094)))));
                                var_40 = max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) == (3011123113U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073705357315ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((unsigned long long int) (unsigned short)59099)))));
                                arr_112 [7] [i_30] [i_31] [9] [i_30] [i_29] [i_30] = ((/* implicit */int) arr_95 [i_34] [i_29]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
