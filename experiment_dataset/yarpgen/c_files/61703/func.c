/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61703
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
    var_14 = ((/* implicit */short) var_0);
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -222590888)))) : (var_0))))));
    var_16 = var_11;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6870456684765051373ULL)))) & (((unsigned int) (signed char)11))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) ((11576287388944500242ULL) | (((/* implicit */unsigned long long int) arr_0 [i_1]))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_18 *= ((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2]);
                arr_13 [i_3] = ((int) ((11304161104790470144ULL) << (((7142582968919081472ULL) - (7142582968919081437ULL)))));
                var_19 = ((/* implicit */int) ((unsigned int) ((unsigned int) 1195997079U)));
                var_20 ^= ((/* implicit */unsigned char) 4294967295U);
            }
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((+(arr_4 [1] [i_2]))) > (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))))))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_19 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) 11576287388944500242ULL);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((((_Bool)1) ? (6870456684765051376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))))));
                        var_23 ^= ((((/* implicit */_Bool) 561670192)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])) : (arr_4 [i_2] [i_4]));
                    }
                } 
            } 
        }
        var_24 = ((int) ((var_0) >= (((/* implicit */long long int) arr_12 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_30 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_2);
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_33 [i_6] [i_6] = ((/* implicit */long long int) 2561973525U);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8])) << (((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]) + (1811376793)))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_0))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_7] [i_7] [i_7 + 4] [i_7 + 3]))) + (1U)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -726027410)) ? (arr_4 [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_0] [i_7 - 1]))) : (arr_11 [i_8 - 1] [6U] [i_7 - 1] [i_8])));
                            var_29 ^= ((/* implicit */signed char) 149410189U);
                            var_30 ^= ((/* implicit */short) (!(arr_21 [10ULL])));
                            var_31 ^= ((/* implicit */_Bool) ((arr_34 [i_8 - 1] [i_8 - 1] [(short)12] [(short)12] [i_8 - 1] [i_8 - 1] [i_8 - 1]) - (((/* implicit */long long int) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned int) var_7)) : (arr_0 [(short)10]))))));
                        }
                        arr_36 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_21 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21578))) : (arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (arr_11 [i_8] [i_8] [i_8] [i_8]))))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned int) 11576287388944500240ULL);
    }
    /* vectorizable */
    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))) ? (((/* implicit */int) (short)-5335)) : (((/* implicit */int) (_Bool)1))));
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21579))) & (6870456684765051376ULL)));
        arr_40 [i_11] [i_11 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) ? ((((_Bool)1) ? (arr_38 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))) : (((arr_38 [10]) << (((/* implicit */int) var_8))))));
        arr_41 [i_11 - 1] [i_11] = ((/* implicit */_Bool) ((short) ((unsigned int) 7142582968919081471ULL)));
    }
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)177)))))))));
        var_35 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_38 [i_12])), (min((var_0), (((/* implicit */long long int) 65052917U)))))), (((max((arr_43 [i_12] [8]), (((/* implicit */long long int) var_3)))) << (((arr_43 [i_12] [i_12]) - (5062796957734568957LL)))))));
        var_36 = ((/* implicit */unsigned short) arr_44 [i_12]);
    }
    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        arr_49 [i_13] = ((/* implicit */unsigned long long int) ((3134892670U) / (1160074626U)));
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            arr_52 [i_14] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_13] [i_13])) ? (((/* implicit */int) (unsigned short)56305)) : (((/* implicit */int) (short)32767)))))))));
            arr_53 [i_13] &= ((/* implicit */unsigned short) ((((unsigned long long int) arr_47 [i_13])) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) arr_47 [i_13])) : (((/* implicit */int) arr_47 [i_13])))))));
            var_37 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)17717)) ? (3134892671U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))) ? (max((65052917U), (((/* implicit */unsigned int) (short)13248)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)28245))))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7191311878530300941LL)) ? (arr_45 [i_15] [i_13]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)125))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16452)))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                {
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_17] [17LL] [i_17 - 1] [1ULL])) ? (max((arr_62 [i_16] [i_16] [i_17 - 1] [i_17]), (((/* implicit */unsigned int) var_7)))) : (arr_62 [i_17] [i_17] [i_17 - 1] [i_17])));
                        var_40 = ((((/* implicit */_Bool) (unsigned short)39457)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_13]))) : ((~(arr_51 [i_16] [i_17 + 1]))));
                    }
                } 
            } 
            arr_64 [i_13] [i_13] [i_13] = ((/* implicit */signed char) var_6);
        }
        arr_65 [i_13] [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_57 [i_13] [i_13])), (min((((/* implicit */unsigned int) var_4)), (arr_62 [i_13] [3U] [12] [4U]))))), (((((/* implicit */_Bool) ((unsigned int) arr_59 [i_13]))) ? ((+(arr_62 [i_13] [i_13] [6U] [i_13]))) : (arr_50 [i_13] [i_13] [i_13]))))))));
    }
}
