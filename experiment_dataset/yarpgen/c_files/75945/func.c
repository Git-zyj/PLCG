/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75945
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
    var_20 = (!(((/* implicit */_Bool) (+(var_16)))));
    var_21 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) + ((-(var_14)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (-((~(arr_5 [i_0])))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(min((var_16), (((/* implicit */long long int) (signed char)101))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55239)) ? (var_0) : (5471851782504401342LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8LL)))))) : (max((var_14), (((/* implicit */unsigned long long int) (unsigned short)10299))))))));
                    arr_8 [(short)18] [i_1] [(short)18] = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)55265)) : (arr_3 [i_0] [i_0] [i_2]))) < (((/* implicit */int) ((unsigned char) (signed char)-127))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1857889574)) ? (((/* implicit */long long int) arr_15 [i_4])) : (arr_0 [i_3])))) ? (arr_7 [i_3] [i_3] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (min((((((/* implicit */_Bool) arr_5 [(unsigned char)12])) ? (21LL) : (((/* implicit */long long int) arr_14 [i_3])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 8LL)))))))));
                arr_17 [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-21)))) ? ((((~(arr_0 [i_3]))) % (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)7185))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)10293))))))), (max((arr_4 [i_3] [i_3] [i_4]), (arr_4 [i_3] [i_4] [i_4])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 4; i_5 < 14; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_4 [i_5 - 4] [i_5 + 2] [i_5 + 1])))) ? (min((arr_4 [i_5] [i_5] [i_5 + 2]), (((/* implicit */long long int) var_19)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -7076683470540956959LL))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) var_4);
                            var_25 = ((/* implicit */unsigned short) ((signed char) arr_22 [i_5] [8U]));
                            arr_35 [i_5] [i_7] = ((/* implicit */unsigned int) (~((+(-841895654)))));
                            arr_36 [i_7 - 3] [i_6 - 1] [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (arr_28 [i_7 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38624)))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_29 [i_9] [i_8] [i_7 - 3] [i_6] [i_5]) ? (arr_0 [i_6 - 2]) : (((/* implicit */long long int) var_10))))) ? (arr_0 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_7] [i_7]))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 4070449693U)) ? (var_17) : (((/* implicit */unsigned long long int) 4070449694U))))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) (~(-7LL)));
                var_29 -= ((/* implicit */signed char) (+(((arr_2 [i_5 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_37 [i_10] [i_6] [i_5 - 4])))));
                var_30 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2696543593378154913LL))));
            }
            for (unsigned short i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 15; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        {
                            arr_47 [i_5] [i_5] [i_5] [i_12] [i_5] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_46 [i_11 + 2] [i_12 - 2] [i_6 - 1])))), ((!(((/* implicit */_Bool) arr_5 [i_5 - 1]))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                var_32 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(5U)))), (min((((/* implicit */unsigned long long int) arr_9 [i_5 - 2])), ((-(8523958809586407072ULL)))))));
                arr_48 [i_11] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(9127935742893671533LL)))) ? (max((-2696543593378154913LL), (((/* implicit */long long int) 2542963170U)))) : (max((arr_4 [i_5] [i_5] [(unsigned short)3]), (((/* implicit */long long int) arr_23 [i_11 + 1]))))))) ^ (1ULL)));
                var_33 = ((((/* implicit */_Bool) (~(max((16U), (((/* implicit */unsigned int) var_4))))))) ? (max((9223372036854775807LL), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1557038645)) ? (arr_27 [(_Bool)1] [i_5 - 4] [i_6 - 2] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6])))))))))));
            }
            for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                arr_52 [5U] [5U] [5U] [i_14] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_42 [i_6 - 2] [i_6] [i_6 - 2] [i_6])) ? (((/* implicit */unsigned long long int) arr_30 [i_6 - 1] [i_14] [i_14] [i_5])) : (arr_37 [i_6 - 1] [i_14] [i_14])))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((signed char)-112), (((/* implicit */signed char) arr_2 [i_15]))))), (min((arr_37 [i_5 + 2] [i_5 + 2] [i_5 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-106)))))))));
                            arr_58 [i_5] [i_5] [i_5] [i_5] [i_5] [(short)4] = ((/* implicit */signed char) var_12);
                            var_35 &= ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
            }
            arr_59 [i_5 - 1] [i_6 - 2] [i_5 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) 18446744073709551593ULL)) ? (43U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (min((max((((/* implicit */long long int) arr_55 [i_5] [i_6] [i_6] [i_6 - 1])), (arr_12 [i_5 - 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)13)))))))));
        }
        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_15 [i_5])), (min((((var_18) ^ (var_5))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_19)))))))));
            var_37 = (((!(((/* implicit */_Bool) ((int) (signed char)-106))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (_Bool)1))));
        }
        var_38 = ((/* implicit */unsigned int) arr_29 [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 1]);
        arr_63 [i_5] = ((/* implicit */_Bool) (+(1060591072U)));
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            for (unsigned int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                {
                    arr_70 [i_5] [i_18] [i_5] [i_19] |= ((/* implicit */short) max((8610700027918022071LL), (((((/* implicit */_Bool) arr_14 [i_5 - 2])) ? (8610700027918022071LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 - 2])))))));
                    arr_71 [i_5 - 4] |= ((/* implicit */unsigned short) (+(min((((/* implicit */int) (signed char)-101)), ((-(((/* implicit */int) (signed char)126))))))));
                    arr_72 [i_5] [i_5] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)13)) << (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    }
}
