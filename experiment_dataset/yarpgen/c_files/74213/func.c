/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74213
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_9 [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)48495)), (-1811837770)));
                        var_14 = ((/* implicit */_Bool) (short)21802);
                        arr_10 [i_0] [2ULL] [12] [2ULL] [i_2] = ((/* implicit */int) 16910005226478133772ULL);
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_13 [4ULL] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) 1085663369);
                        arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) -1949407011)), (2715739700369894038ULL))), (((/* implicit */unsigned long long int) -734968661))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_18 [i_0] [(unsigned char)11] [(unsigned char)12] [i_5] [i_1] [(_Bool)0] [i_2] = ((/* implicit */unsigned short) 4294967295U);
                            arr_19 [i_5] [i_2] [i_4] [i_2] [i_2] [i_0] = -1811837781;
                            var_15 = ((/* implicit */long long int) (unsigned short)54827);
                            var_16 = ((/* implicit */_Bool) max((var_16), ((_Bool)1)));
                            arr_20 [i_2] = ((/* implicit */unsigned short) 4161536U);
                        }
                        arr_21 [i_2] [i_1] [(_Bool)0] [i_4] = ((/* implicit */_Bool) 1811837769);
                    }
                    var_17 = (short)-10776;
                    var_18 = ((/* implicit */short) max(((unsigned short)25), (((/* implicit */unsigned short) (short)-3047))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */short) (signed char)-35);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
        {
            arr_30 [10] [i_6] = ((/* implicit */long long int) 63ULL);
            var_19 = ((/* implicit */unsigned long long int) 1811837755);
            var_20 ^= ((/* implicit */unsigned short) 2147483647);
            var_21 += ((/* implicit */int) (unsigned char)144);
            arr_31 [i_6] [i_6] = ((/* implicit */int) (unsigned char)161);
        }
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            arr_35 [i_6] [i_8] [(unsigned short)11] = ((/* implicit */short) (_Bool)1);
            arr_36 [i_6] [i_6] = ((/* implicit */unsigned short) (short)19523);
            var_22 = ((/* implicit */unsigned short) (signed char)-39);
        }
        for (short i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            var_23 = ((/* implicit */short) (unsigned short)1);
            arr_39 [i_9] [i_6] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)49567);
            arr_40 [i_9] = max((703943638), (((/* implicit */int) (short)13492)));
        }
        for (signed char i_10 = 3; i_10 < 17; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)10068)));
            var_25 = ((/* implicit */unsigned long long int) min((786432), (((/* implicit */int) (short)26295))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    arr_49 [i_12] = ((/* implicit */unsigned long long int) -1134924362);
                    arr_50 [(_Bool)1] [i_11] [i_10] [i_10] [i_6] = ((/* implicit */unsigned short) min((min((((/* implicit */int) (signed char)-1)), (1441116741))), (((/* implicit */int) (short)-1))));
                    arr_51 [i_6] [0] [i_11] [i_12] [i_12] = ((/* implicit */long long int) (unsigned short)48221);
                }
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) (signed char)-16);
                    var_27 &= ((/* implicit */unsigned char) (short)-32760);
                    arr_54 [i_11] [i_6] = ((/* implicit */unsigned char) -6890306176655595085LL);
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                {
                    var_28 *= ((/* implicit */_Bool) min((1152739021585942818LL), (((/* implicit */long long int) (unsigned char)252))));
                    var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-105)), (-1)));
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (short)13492))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        arr_63 [i_6] [i_16] = ((/* implicit */unsigned long long int) (unsigned short)45343);
                        arr_64 [i_6] [i_6] [16LL] [i_11] [i_11] [i_11] [8ULL] = ((/* implicit */unsigned short) 5463684126567872480LL);
                    }
                    for (short i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        arr_68 [i_11] [i_15] = ((/* implicit */unsigned char) -5463684126567872477LL);
                        arr_69 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned short)13701);
                    }
                    var_31 = ((/* implicit */unsigned short) (unsigned char)246);
                }
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (unsigned short)8482))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) 3259870200U))));
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) max(((unsigned short)46316), (((/* implicit */unsigned short) (short)-1)))))));
            }
            for (int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) min((3131991917U), (((/* implicit */unsigned int) 899673667)))))));
                arr_72 [i_18] [i_10] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1811837781)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (4355469862146385613ULL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 2) /* same iter space */
                {
                    var_36 = (short)31115;
                    arr_76 [i_6] [5U] [(short)14] [i_10] [(unsigned short)15] [(unsigned short)9] = (unsigned short)12057;
                }
                for (unsigned long long int i_20 = 1; i_20 < 16; i_20 += 2) /* same iter space */
                {
                    arr_80 [i_6] [i_10 - 1] [16] |= ((/* implicit */signed char) (unsigned short)1329);
                    var_37 = ((/* implicit */int) 6139297808065086709ULL);
                }
            }
            arr_81 [i_10] [7] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((3259870200U), (((/* implicit */unsigned int) (unsigned short)41258))))), (13300820953243527834ULL)));
            arr_82 [15U] [i_10 + 1] [i_6] = ((/* implicit */unsigned int) (short)-32748);
        }
        var_38 = (unsigned short)65535;
    }
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) 
    {
        arr_85 [i_21] = ((/* implicit */short) (unsigned char)91);
        var_39 &= ((/* implicit */int) (unsigned short)0);
        arr_86 [i_21] [i_21] = ((/* implicit */unsigned short) -892367984);
        var_40 = ((/* implicit */long long int) 6139297808065086709ULL);
    }
    var_41 = ((/* implicit */unsigned char) max((min((max((88816746), (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (unsigned short)53478)))), (((/* implicit */int) max(((unsigned char)242), ((unsigned char)12))))));
}
