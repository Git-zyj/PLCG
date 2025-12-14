/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92199
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
    var_20 = var_18;
    var_21 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((long long int) 853540580));
        arr_4 [i_0] [0U] = (-(arr_0 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */int) (-(2205348633059323319LL)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
        arr_9 [i_1] [i_1] = ((((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_6 [i_1])))) ? (((/* implicit */int) ((-8179490812883668155LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_6 [i_1])));
        arr_10 [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_13 [14LL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 4611686018427387903LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (4993511838674255515LL)));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_22 [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_17))))) == (var_13)));
                            arr_23 [4LL] [(unsigned char)1] [i_3] [(unsigned char)1] [i_4] [i_3] [i_3] = ((long long int) (unsigned short)2612);
                            arr_24 [i_1] [(unsigned short)14] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 853540575)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7403057699232126996LL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_29 [i_1] [i_2] [i_6] [i_7] [i_7] = ((/* implicit */short) var_18);
                    arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)7] = ((/* implicit */short) (unsigned short)28029);
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    arr_32 [i_6] [i_1] [i_1] &= ((/* implicit */_Bool) (unsigned short)18237);
                }
                arr_33 [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -133512939)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-3866172225125517326LL)));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_36 [i_1] [i_2] [i_8] [19LL] = var_10;
                arr_37 [i_1] [(_Bool)1] [(short)6] [i_2] = ((/* implicit */short) -133512940);
                arr_38 [i_1] [i_2] [i_8] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3598105281373508963LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)));
                arr_39 [i_2] [i_2] [i_1] = ((/* implicit */_Bool) var_13);
                arr_40 [(unsigned short)16] [5LL] = ((/* implicit */unsigned int) (+(5638548399766024553LL)));
            }
            arr_41 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6268489917187016538LL)) ? (((((/* implicit */_Bool) arr_26 [i_1] [i_1] [6LL])) ? (((/* implicit */int) var_19)) : (853540575))) : (((/* implicit */int) (unsigned short)65535))));
        }
    }
    var_22 = var_16;
}
