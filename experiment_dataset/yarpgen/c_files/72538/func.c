/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72538
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_10 [7] [(short)4] [i_2] [i_2] [i_1] [(short)17] = ((/* implicit */unsigned long long int) arr_7 [(unsigned char)14] [i_1] [i_2] [i_3]);
                        arr_11 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((-(arr_1 [i_0] [i_2 - 1]))) != (arr_1 [i_0] [i_1])));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_1] [(_Bool)1] [(signed char)19] [11LL] = ((/* implicit */signed char) var_7);
                            arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_3);
                        }
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_1] [(_Bool)0] [i_0] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [14U] [0] [0])) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_13 [18] [i_1] [i_2] [(short)10] [i_5]) : (((/* implicit */int) (unsigned short)61112)))) - (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])))))));
                        arr_22 [i_5] [13ULL] [13ULL] = ((/* implicit */unsigned char) ((signed char) arr_20 [i_2 + 1]));
                        arr_23 [i_0] [i_1] [i_1] [i_5] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1]), (((/* implicit */int) arr_18 [(signed char)7] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])))))));
                        arr_24 [i_5] [i_5] [(unsigned short)15] [7] [7] [i_0] &= max((arr_19 [i_5] [i_2 - 1] [i_2] [i_1]), (arr_19 [i_2 - 1] [i_2 - 1] [i_2] [i_1]));
                    }
                    arr_25 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) (unsigned short)61112);
                    arr_26 [19U] [i_1] [i_0] = ((/* implicit */short) (~((+(var_9)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_33 [i_1] = ((/* implicit */unsigned char) (+(arr_7 [i_0] [i_2 + 1] [i_0] [i_6 - 2])));
                                arr_34 [20ULL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_18 [19ULL] [i_2 - 1] [i_2 - 1] [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_7] [i_6 - 1])) : (((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_0] [i_6] [i_2 - 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                }
                arr_35 [(short)4] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [i_1] [i_1])) % (((/* implicit */int) arr_2 [i_1] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((var_11) > (((/* implicit */unsigned long long int) var_16)))) && (((/* implicit */_Bool) (short)-20175))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) var_5)) : (var_13)))) || (((/* implicit */_Bool) var_16))));
    var_22 = var_10;
}
