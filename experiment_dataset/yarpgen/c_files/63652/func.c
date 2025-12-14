/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63652
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] [(short)10] &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (max((1884234538U), (2410732755U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [(unsigned short)16] = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned long long int) var_17))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((long long int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) (~(var_16)));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_1 - 1] [8] [i_2 + 1] = ((/* implicit */unsigned char) arr_13 [i_1 + 2] [i_2]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_4] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_5])) ? (var_18) : (((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_3] [i_1]))))));
                            arr_24 [i_1] [i_4] [i_3] [i_3] [i_3] [(unsigned char)14] [i_5 - 2] = 3394836072U;
                        }
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_2] [i_3 - 1] [i_4] [i_6 - 2] = ((/* implicit */long long int) arr_6 [i_2] [i_6]);
                            arr_28 [i_1] [i_2] [i_1 + 3] [i_4] [i_2] = ((/* implicit */unsigned int) arr_12 [i_3 - 2] [18ULL] [i_6]);
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_6] [i_4] = ((/* implicit */unsigned long long int) (+(((arr_2 [i_6 - 1]) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_3 - 2]))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            arr_32 [i_1] [4LL] [i_7 - 1] [i_4] [i_2] = ((/* implicit */unsigned long long int) var_2);
                            arr_33 [i_2] = ((/* implicit */unsigned int) min((arr_6 [i_7 + 1] [i_3 - 1]), (((var_7) - (arr_6 [i_7 - 2] [i_3 + 1])))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_37 [i_8 + 1] [i_2] [i_2] [i_1 + 3] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_35 [i_1] [i_1 - 1] [i_1] [i_1] [i_8 + 1] [5]))), (var_9)));
                            arr_38 [i_2] [i_2] [i_3] [i_1] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_1 + 2])) : (var_9)))) | (((((/* implicit */_Bool) arr_10 [i_1 + 2])) ? (arr_21 [i_3] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_21 [i_4] [i_8 + 1] [(_Bool)1] [i_8] [(unsigned short)4] [i_8 + 1] [i_8 + 1])))));
                        }
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_43 [i_1] [i_2] [i_3] [(unsigned short)19] [i_9] [i_2] [i_2] = 1217640517U;
                            arr_44 [i_1 - 1] [i_3] [i_3 + 2] [i_4] [i_9] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((unsigned int) var_7))))) ? ((+(((((/* implicit */unsigned long long int) var_16)) + (var_18))))) : (((/* implicit */unsigned long long int) var_12))));
                        }
                        arr_45 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = (+(var_15));
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */int) ((long long int) ((unsigned long long int) ((((/* implicit */long long int) var_4)) > (var_3)))));
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)32751)), (var_6)));
}
