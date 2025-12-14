/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85857
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (-7743043732631801310LL)));
                                arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]);
                                arr_17 [i_1] [i_1] = ((/* implicit */long long int) var_6);
                                var_12 -= ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_2] [i_2] [i_0]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8396858199825248020LL)))))));
                            arr_22 [5ULL] [(unsigned short)4] [i_1] = ((/* implicit */unsigned long long int) 1099511627775LL);
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((var_5) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_6]))))) ? (max((8396858199825248036LL), (((/* implicit */long long int) arr_18 [i_0])))) : (arr_1 [(unsigned short)1]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) > (arr_6 [i_0 + 2] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (long long int i_8 = 4; i_8 < 21; i_8 += 1) 
        {
            {
                arr_27 [14LL] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!((((-(arr_26 [i_7]))) > (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_23 [i_7] [i_8])))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    var_15 = ((/* implicit */long long int) var_9);
                    arr_31 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) ((-2264330349402568403LL) > (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8])))))) > (((/* implicit */int) ((11385500090856034146ULL) > (((/* implicit */unsigned long long int) var_2))))))))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_16 |= ((/* implicit */long long int) ((unsigned long long int) ((67108863ULL) > (((/* implicit */unsigned long long int) arr_28 [i_7] [i_8] [i_8] [i_7])))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            {
                                var_17 ^= (unsigned short)65506;
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_30 [i_7]))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */long long int) arr_32 [i_7] [i_7] [i_10]);
                }
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 3; i_15 < 20; i_15 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((long long int) -7743043732631801310LL));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7743043732631801311LL)))))))) : (4541859882731161453ULL))))));
                            }
                        } 
                    } 
                    arr_51 [i_8] [11LL] = arr_42 [i_7] [i_8];
                }
                for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        for (long long int i_18 = 1; i_18 < 19; i_18 += 1) 
                        {
                            {
                                arr_61 [i_7] [i_8] [i_16] [i_8] [i_18] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_48 [i_7] [21LL] [19LL] [i_8] [i_18])))), (((unsigned long long int) 460307127104877173LL))))) ? (max((((((/* implicit */_Bool) arr_59 [i_17] [i_8] [i_16] [i_17] [i_17])) ? (9886045633089353018ULL) : (((/* implicit */unsigned long long int) 549755813886LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(var_5)))))));
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((+(-9116542820011302295LL))) > (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))))) > (8396858199825248019LL)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((long long int) (unsigned short)39562)) * ((+(6LL)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_16]))))) ? (((/* implicit */unsigned long long int) 4755640746413949353LL)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 9223354444668731392LL)) : (10965117900060981716ULL)))))));
                    arr_62 [i_7] [i_8] [i_8] = min((10936995471412951031ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((11834315088207228654ULL) > (8560698440620198598ULL)))) > (((/* implicit */int) ((unsigned short) 9223372036854775807ULL)))))));
                }
                arr_63 [i_7] [i_7] |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 69818988363776LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47259))) : (arr_23 [i_7] [i_7]))) > (((/* implicit */long long int) ((/* implicit */int) ((12663599694512915710ULL) > (((/* implicit */unsigned long long int) -1917588466912420817LL)))))))) ? (arr_49 [i_7] [i_7] [i_8] [i_8] [i_8]) : (min((7ULL), (7ULL)))));
                var_24 |= ((/* implicit */long long int) 4541859882731161454ULL);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) max((var_3), (var_10)))) * (max((((/* implicit */unsigned long long int) var_1)), (18446744073709551603ULL)))))));
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
    {
        for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
        {
            {
                var_26 ^= var_8;
                arr_68 [i_19] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_2)))));
            }
        } 
    } 
}
