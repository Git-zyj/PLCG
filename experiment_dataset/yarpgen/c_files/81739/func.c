/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81739
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) arr_4 [i_2 - 1] [i_0] [i_0] [i_0]));
                        arr_10 [i_0] [i_0] [(unsigned short)10] |= ((/* implicit */unsigned char) ((short) 6917529027641081856ULL));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned int) ((arr_7 [i_0]) ? (((/* implicit */int) (unsigned char)0)) : ((~(((/* implicit */int) (signed char)-26))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        var_14 = (+(((/* implicit */int) var_6)));
        var_15 = ((/* implicit */unsigned short) arr_4 [i_4 + 1] [6LL] [i_4 + 1] [i_4 + 1]);
        var_16 = ((/* implicit */unsigned int) arr_5 [(short)13]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        arr_15 [i_5] = ((/* implicit */unsigned char) ((unsigned int) var_11));
        arr_16 [i_5] = ((/* implicit */_Bool) ((arr_7 [i_5 + 1]) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_7 [i_5 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        var_17 = ((/* implicit */short) (unsigned short)53380);
        arr_19 [i_6 + 1] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (17730800950865577291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0U] [0U])))));
    }
    var_18 &= var_1;
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) ((((long long int) 14523856257893824650ULL)) > (((/* implicit */long long int) ((arr_0 [i_8 + 1] [i_8 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                /* LoopNest 3 */
                for (short i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_9] [(short)10] [i_11])))) < (((unsigned int) arr_0 [i_9 + 2] [i_8 - 1])));
                                var_21 ^= var_5;
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)48440)) ? (4525557062727974720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8 + 1] [i_8 - 1]))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) arr_3 [i_7] [i_8 + 1] [i_8 - 1]))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_7] [i_8] [(short)6]))) && (((/* implicit */_Bool) ((short) (short)-11207)))));
                arr_32 [i_7] [i_8] [(unsigned char)1] = ((/* implicit */unsigned short) 15761212342068907218ULL);
                arr_33 [i_7] [i_8] [(_Bool)1] = ((/* implicit */signed char) max((max((arr_29 [(unsigned short)7] [i_8 + 1] [(unsigned short)7] [i_7] [i_8 - 1]), (((/* implicit */int) (unsigned short)12160)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)53380)))))));
            }
        } 
    } 
    var_24 = (~(((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12143))))));
    var_25 = ((/* implicit */short) var_9);
}
