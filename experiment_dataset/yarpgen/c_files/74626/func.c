/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74626
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((long long int) ((int) (unsigned short)32253)));
                            arr_13 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-28546))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((unsigned int) (!(((/* implicit */_Bool) 1048575))));
            }
            /* LoopNest 3 */
            for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                for (short i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 3) 
                    {
                        {
                            arr_22 [i_6] [i_1] [i_6] [i_6 - 2] [i_6] [i_6] = ((/* implicit */long long int) ((_Bool) (short)-1));
                            var_18 = ((/* implicit */long long int) (signed char)127);
                            arr_23 [i_5] [i_5] [i_6] [i_6] [2] [(short)4] [i_1] = ((/* implicit */long long int) ((short) (unsigned char)0));
                            arr_24 [i_5] [i_6] [i_0] [i_5] [i_6] [i_0] &= ((/* implicit */unsigned char) ((unsigned short) (short)0));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (unsigned short i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_30 [i_1] [i_1] [i_8] [5U] [(unsigned short)2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)11800)) ? (((/* implicit */int) ((72386086924810003ULL) != (((/* implicit */unsigned long long int) 1255112886))))) : (((/* implicit */int) (unsigned short)2399))));
                        arr_31 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -1289073877)) : (2426271380028838761ULL)));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                for (short i_12 = 2; i_12 < 14; i_12 += 3) 
                {
                    {
                        arr_38 [i_12] = ((/* implicit */short) ((long long int) 2815529336750621021LL));
                        arr_39 [i_0] [10] [(short)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        } 
        arr_40 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        arr_44 [i_13 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) 3916778247U))) > (2949670211068022958ULL)));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)48)) << (((((/* implicit */int) (unsigned short)51154)) - (51145)))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)79)), ((unsigned short)65535)))), (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_4))));
}
