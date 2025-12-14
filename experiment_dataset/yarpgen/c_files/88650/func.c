/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88650
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
    var_17 = ((/* implicit */unsigned long long int) ((1046528) / (var_14)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) var_15);
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])) : (arr_4 [i_1 - 2])));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (-1046523) : (arr_0 [i_1 + 2])));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((((/* implicit */_Bool) 1046528)) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2]));
                            var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1] [i_1 - 1]))) < (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 1]));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)229)) : (1046517)));
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((int) arr_6 [i_0] [i_0]));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_3]))));
                            var_23 = ((1046517) ^ (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_3] [i_5])) < (var_11)))));
                            arr_19 [i_1] [3] [i_1] [i_5] = ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 2]))) : (((var_7) * (((/* implicit */unsigned long long int) -1046531)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3] [i_6])) ? (((/* implicit */unsigned int) -1046554)) : (1846018987U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_1]))))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20052)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-2689)) : (-1046531)))) : (var_0)));
                            arr_23 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */unsigned int) -1046518)) : (arr_14 [i_1] [i_1] [i_1 - 2])));
                            var_25 = ((/* implicit */_Bool) var_5);
                            arr_24 [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */unsigned int) var_9);
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) (~(10286807629677476143ULL)));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_1 - 2])) : (-1046520)));
            arr_25 [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_0])) ? (arr_8 [i_0] [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_28 = ((/* implicit */int) arr_5 [i_0]);
            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) var_14)) <= (var_2)))) != ((+(((/* implicit */int) arr_7 [i_7] [i_0] [i_7] [i_0] [i_0] [i_0]))))));
            var_30 = ((/* implicit */short) 8LL);
        }
        arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned char)7] [i_0] [(unsigned char)7])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (1572406994U)))) ? (var_0) : (((/* implicit */long long int) max((var_14), (((/* implicit */int) (signed char)41))))))) : (((/* implicit */long long int) min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_4)))), (((var_11) ^ (((/* implicit */int) var_9)))))))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_32 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11926996765690686932ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (signed char)-42))))) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (-2031629111271756080LL))))));
        var_31 = min((((arr_29 [i_8]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))), (((((/* implicit */_Bool) arr_29 [i_8])) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) 1046530)))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((_Bool) ((int) var_11)));
                        /* LoopSeq 1 */
                        for (int i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            arr_44 [i_8] [i_9] [i_9] [i_11] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_12] [i_10] [i_8]))) : (arr_42 [i_12] [14] [i_10] [i_10] [i_9] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8] [i_8] [i_10] [(unsigned char)3] [i_10]))) : (((((/* implicit */_Bool) var_6)) ? (arr_38 [i_8] [i_9] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_29 [i_12 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_12 + 1] [4ULL] [i_9])) ? (((arr_36 [i_8] [i_8] [i_8]) % (arr_36 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_8] [i_9] [i_11]))))));
                            arr_45 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */int) var_7);
                            var_34 = ((/* implicit */signed char) max((((/* implicit */short) ((arr_42 [i_8] [i_9] [(signed char)3] [i_11] [i_12] [i_11] [i_10]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))))))), (((short) arr_43 [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 + 1]))));
                        }
                        var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8624101219131268765LL)) ? (((/* implicit */long long int) 1046553)) : (var_0)))))) ? (var_2) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)896)))) ? (((((/* implicit */unsigned int) var_14)) & (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)15562), (((/* implicit */unsigned short) (short)-2689))))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_8] [(unsigned char)7] [i_9] [i_8] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */int) arr_40 [i_8] [i_8])) : (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_42 [i_10] [i_11] [(unsigned short)11] [i_11] [i_10] [i_9] [i_8]))), (min((((/* implicit */unsigned short) (signed char)-116)), (arr_40 [i_8] [i_8]))))))));
                            var_36 = ((/* implicit */unsigned long long int) (-((-(((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(var_6)))) + (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49973))) : (arr_35 [i_8] [i_9] [i_10]))) % (((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 16LL)) : (arr_34 [i_9])))))));
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))), (8624101219131268750LL))))));
                        }
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) (+(min((1046528), (2137438940)))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_38 [i_8] [i_9] [i_10] [i_8] [i_8]) % (((/* implicit */long long int) 1948458423))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) 3885737315U)), (arr_35 [i_8] [i_8] [i_8])))))) ? (((((/* implicit */_Bool) arr_29 [i_14])) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (min((arr_37 [i_8] [i_9] [i_14]), (arr_37 [i_8] [i_9] [i_10])))));
                            arr_53 [i_8] [i_9] [i_10] [i_10] [i_9] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -9LL)) ? (max((((/* implicit */unsigned long long int) -8624101219131268765LL)), (4425207687725270978ULL))) : ((((_Bool)1) ? (14021536385984280638ULL) : (((/* implicit */unsigned long long int) -1LL)))))) >= (((/* implicit */unsigned long long int) 3885737304U))));
                        }
                        var_41 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((var_6), (1046528)))) % (((((/* implicit */_Bool) (unsigned char)248)) ? (8624101219131268765LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_8] [i_9] [i_8])) ? (((/* implicit */int) (unsigned short)49963)) : (((/* implicit */int) arr_31 [i_11]))))), (arr_29 [i_8])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_15 = 2; i_15 < 15; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        {
                            arr_63 [i_8] [i_8] = ((/* implicit */unsigned char) ((11497727928103428504ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))));
                            arr_64 [i_8] [i_15] [i_16] [5LL] [i_8] = ((/* implicit */unsigned short) 2064384U);
                            arr_65 [i_8] [i_15] [i_16] [6LL] [i_18] = ((/* implicit */signed char) ((_Bool) arr_29 [i_8]));
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_30 [i_8])) & (((/* implicit */int) arr_56 [i_8]))))));
            var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_39 [(unsigned char)4] [i_15 + 1] [i_8] [(unsigned char)4]))));
            var_44 = ((/* implicit */long long int) ((var_10) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1168765706)) ? (((/* implicit */int) arr_57 [i_15] [i_15] [i_8] [i_8])) : (((/* implicit */int) arr_52 [i_15] [i_15] [i_8] [i_8])))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                arr_69 [i_8] [i_8] [i_19] [i_19] = ((/* implicit */unsigned long long int) var_3);
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_40 [i_15 - 1] [i_15 - 1])) : (((/* implicit */int) arr_40 [i_15 - 2] [i_15 - 1]))));
                arr_70 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1046519))) ? (((/* implicit */long long int) 2064384U)) : (var_8)));
            }
            for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                arr_73 [i_8] [i_15 + 1] [i_15] [i_20] = ((/* implicit */unsigned char) (-(arr_29 [i_15 + 1])));
                var_46 = ((/* implicit */long long int) (unsigned short)15261);
                arr_74 [i_8] [i_15] [6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4515593711135228956ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3331967605U)))) ? (((/* implicit */int) (signed char)-16)) : (1168765705));
                /* LoopSeq 1 */
                for (signed char i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    arr_79 [i_21] [i_21] [i_21] [5] [i_8] = ((/* implicit */_Bool) ((var_8) * (((/* implicit */long long int) ((((/* implicit */_Bool) -1046512)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9)))))));
                    arr_80 [i_8] [i_21] [i_8] [i_15] [i_8] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_8] [i_8] [i_15] [i_20] [i_8])) ? (((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_30 [i_21]))));
                    arr_81 [i_8] [i_21] [i_21] [i_8] = ((/* implicit */unsigned int) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1])))));
                    var_47 = ((/* implicit */unsigned char) ((short) arr_31 [i_8]));
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) * (((long long int) arr_30 [i_8]))));
                }
            }
            for (short i_22 = 1; i_22 < 15; i_22 += 4) 
            {
                arr_86 [7ULL] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) (-(var_11)));
                var_49 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) -2056102833)) ? (var_8) : (((/* implicit */long long int) var_10)))));
            }
        }
    }
    var_50 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((11497727928103428504ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), ((unsigned char)106)))) % ((-(((/* implicit */int) var_9))))));
}
