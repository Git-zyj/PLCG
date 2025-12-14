/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75749
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
    var_15 = var_1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_16 = var_9;
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 2] [i_0]))))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_4] [i_2] [i_0] [i_4] [i_1] [i_0] = (~(((((/* implicit */_Bool) 9ULL)) ? (13498834795690464163ULL) : (13018594964302819539ULL))));
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_3 - 2] [i_0 - 1]));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [6ULL] = ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_1 [i_1 - 1] [i_1 - 1]) : ((+(1884632056051740846ULL))));
            arr_15 [(_Bool)1] [i_1 - 1] = ((/* implicit */signed char) -3287858448463912749LL);
            var_19 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_1 + 1] [i_0] [i_0 + 1]))) : (15682921112937268475ULL));
            var_20 = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_0 - 3] [i_0 - 2] [i_1 - 1]));
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_5] [i_0] [(_Bool)1] [i_0] [i_5]);
            arr_20 [i_0] [7ULL] [i_5] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_16 [i_0 + 1] [i_0 - 2]));
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_0] [9LL] [i_0]);
        }
        for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            arr_24 [i_0] [i_0] [2U] = ((((/* implicit */_Bool) 18221166425076415932ULL)) ? (((unsigned long long int) (unsigned char)5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6 - 4] [i_0 - 3]))));
            var_22 = var_10;
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [4U] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0 - 2] [i_0 - 3]))) : (9ULL)));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_19 [i_0] [6ULL] [i_0]))));
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_8]);
                var_26 = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_0 - 2] [i_0] [14U] [7ULL] [i_0] [i_8]));
            }
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_27 = arr_32 [i_9];
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_35 [i_11] [i_10] = ((/* implicit */signed char) (~(7700939171345401898ULL)));
                        arr_36 [i_0] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)35)))) ? (var_8) : (var_0)));
                        var_28 = ((/* implicit */unsigned long long int) var_11);
                    }
                    arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_10] [i_0 - 3])) ? ((+(10745804902364149723ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15682921112937268475ULL)) || (((/* implicit */_Bool) arr_2 [i_9]))))))));
                }
                for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    arr_42 [i_0] [i_7] [i_9] = ((unsigned long long int) ((signed char) 9119482873675329906ULL));
                    arr_43 [i_12] [i_9] [i_7] [14ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3397212512U)) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4294967294U))))));
                    arr_44 [i_0] [i_7] [i_9] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0 - 3] [i_0 - 3])))) || (((((/* implicit */_Bool) var_1)) || (arr_31 [i_0] [i_0] [i_0] [i_9] [i_12]))));
                    arr_45 [i_12] [i_9] [i_0 - 1] = (short)32747;
                }
                for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    arr_48 [9ULL] [i_7] [i_7] [i_13 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_34 [i_0 + 2] [i_7] [i_9] [i_13 + 1] [i_0 + 1] [i_7] [19LL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_9] [3LL] [3LL])))))));
                    var_29 = (~(var_8));
                    var_30 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) 3934324783U)) : (9ULL))));
                    arr_49 [i_0] [i_0] [i_7] [i_13] [i_7] [i_7] = (+(var_6));
                }
                var_31 = var_6;
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_52 [i_14] [i_7] [4U] [i_14] = ((signed char) ((((/* implicit */_Bool) 18285477107003616066ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_3 [i_0] [i_7] [i_14])));
                arr_53 [i_14] [i_14] [i_14] = ((arr_7 [i_0] [i_0 + 1] [i_0 + 1] [(short)12]) || (arr_7 [i_7] [i_7] [i_14] [i_0 + 1]));
            }
            var_32 = ((/* implicit */_Bool) 2310679458U);
            arr_54 [i_7] = ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (+(arr_34 [i_7] [i_7] [i_7] [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    var_33 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) (short)15337)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14)))))));
}
