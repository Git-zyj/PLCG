/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91858
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_2 [11] [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_3] [(short)10] [(short)6] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_7 [i_0] [(unsigned short)3] [(short)13] [15ULL] [(short)9] [i_3])))))) & (max((arr_2 [8U] [(unsigned char)11]), (((/* implicit */unsigned long long int) arr_0 [11ULL]))))));
                            var_19 = ((/* implicit */short) (_Bool)1);
                            arr_10 [i_3] [i_3] [i_3] [(short)15] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_3 [i_1 - 2] [i_1 - 2] [i_3 + 1]), (((/* implicit */long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_8 [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */short) var_3);
                                arr_24 [i_6] [i_5] [13U] [(signed char)13] [(unsigned short)4] [13U] [i_8] = ((/* implicit */unsigned long long int) ((int) arr_12 [(short)4]));
                                arr_25 [(unsigned char)15] [i_5] [i_6] [i_5] [(unsigned char)15] = ((/* implicit */_Bool) arr_14 [13] [i_5] [i_6]);
                                arr_26 [i_4] [i_4] [i_6] [i_6] [(short)17] [i_4] = ((long long int) (-(((/* implicit */int) var_6))));
                                arr_27 [12LL] [1U] [(unsigned short)13] [i_7 + 1] [i_6] [11ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((1674875488) + (arr_21 [11U] [(signed char)8] [i_6] [i_6] [i_6] [10ULL])))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_11)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            arr_34 [i_9] [12ULL] = ((/* implicit */long long int) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [5LL] [i_5] [(signed char)13] [i_10] [18U] [i_5])))));
                            arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_4] [(unsigned char)10] [(short)2] [(_Bool)1] [(unsigned char)10]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_41 [i_4 - 1] [(_Bool)1] [i_4 - 1] [(_Bool)1] [(_Bool)1] [12ULL] = ((/* implicit */long long int) ((unsigned short) var_15));
                            arr_42 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [(_Bool)1] [(_Bool)1]))));
                            arr_43 [i_11] [i_5] [10] [i_11] = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1] [(short)11] [11ULL]))) | (var_11))) >> (((max((((/* implicit */unsigned long long int) arr_12 [i_4 - 1])), (var_3))) - (7851756600949912415ULL))))) << (((((/* implicit */_Bool) ((arr_22 [(_Bool)1] [(short)9] [(short)9] [7U] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(0U))) : (((((/* implicit */_Bool) arr_40 [i_4] [i_5] [(unsigned short)16] [i_5] [6] [6U])) ? (var_13) : (var_16)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            {
                                arr_51 [(unsigned short)8] [(unsigned short)8] [i_13] = ((/* implicit */short) ((unsigned long long int) 133169152));
                                arr_52 [i_13] [i_13] [i_13] [i_14] [i_15] [19] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [12U] [i_5] [12U] [0LL] [i_15] [0LL])) && (((/* implicit */_Bool) arr_44 [i_4] [i_13] [9] [1]))))), (arr_45 [i_13] [i_13] [i_13] [i_13])))), (var_11)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
