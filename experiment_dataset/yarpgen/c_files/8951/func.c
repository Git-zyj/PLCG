/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8951
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */_Bool) var_1);
                arr_5 [i_0] [(unsigned short)18] [i_1] = max((((/* implicit */unsigned int) (unsigned char)204)), (max((((/* implicit */unsigned int) var_16)), (max((2088457115U), (((/* implicit */unsigned int) var_15)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_19 |= (unsigned char)223;
                        var_20 = ((/* implicit */unsigned char) var_8);
                    }
                }
                var_21 = ((/* implicit */short) (unsigned short)31635);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 4; i_4 < 16; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)223)) != (((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)50)))))));
        var_22 = ((/* implicit */long long int) ((((2791352332051393324LL) != (var_11))) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_22 [i_5] = ((/* implicit */unsigned short) var_4);
                    arr_23 [i_4 - 1] [i_4 - 1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2081640744U))))), (var_7)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 4; i_7 < 16; i_7 += 2) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) 2791352332051393339LL);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_35 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_8] = ((/* implicit */unsigned long long int) (+(var_4)));
                            arr_36 [i_7 - 4] [i_8] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                            var_23 = ((/* implicit */_Bool) 2081640744U);
                            var_24 = ((/* implicit */unsigned char) arr_31 [i_11]);
                        }
                    } 
                } 
            } 
            var_25 = ((-21LL) != (((/* implicit */long long int) ((/* implicit */int) var_13))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_0))));
                        /* LoopSeq 1 */
                        for (short i_14 = 1; i_14 < 13; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) (~(arr_15 [i_7] [0ULL] [15ULL])));
                            arr_43 [7ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_6 [i_13] [i_13] [i_13])) != (arr_1 [i_12] [i_12])));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) != (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_6)))))));
                            var_29 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_13]))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) != (var_1)))) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_14] [i_8])) != (((/* implicit */int) var_2))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 4; i_15 < 16; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */int) var_16);
                            var_32 = (+((~(21LL))));
                            var_33 = (short)31977;
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            var_34 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_16] [i_7 - 4])))))));
                            var_35 = ((/* implicit */unsigned long long int) (unsigned char)205);
                            var_36 = ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        }
                        arr_49 [i_8] [i_8] [i_12] [i_13] = ((/* implicit */unsigned short) (unsigned char)52);
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned short) (-(576460752303423487ULL)));
    }
    var_38 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)42))));
}
