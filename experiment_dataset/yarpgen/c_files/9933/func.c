/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9933
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
    var_13 *= ((var_1) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)213)) ? (-1922262123) : (((/* implicit */int) (unsigned char)217))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) 50331648U);
            arr_4 [i_0] [(short)2] [i_1] = ((/* implicit */long long int) 50331648U);
        }
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)19460))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_2] [i_0] [i_4] [(short)4] [i_4] = ((((-1922262123) + (2147483647))) >> (((1987760920) - (1987760890))));
                        arr_16 [i_4] [i_3] [i_2] [i_0] [i_0] [(unsigned char)5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (1036131696) : (1922262143))))));
                        arr_17 [i_2] [i_4] = ((int) (~(17946082899493209929ULL)));
                    }
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        arr_20 [(unsigned char)4] [(unsigned char)4] [i_3] [i_5] = ((/* implicit */_Bool) var_7);
                        arr_21 [i_2] [i_2] [5LL] [i_2] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) var_9)))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (var_10)))) ? (((arr_12 [i_0] [(unsigned char)7] [i_0]) ? (-992800744405136104LL) : (((/* implicit */long long int) arr_9 [i_0] [3LL] [4LL])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_2])) * (((/* implicit */int) (unsigned short)20920)))))));
                        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_26 [i_0 + 1] [i_2] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((short) (short)4315));
                        var_17 |= ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [(short)1]);
                    }
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)27288));
                        var_19 |= ((/* implicit */signed char) (-(1922262138)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_8]))))));
                                var_21 -= ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_4))))));
                                arr_33 [i_0 - 1] [i_0 - 1] [i_3] [i_8 - 1] [i_9] [i_8] = ((/* implicit */int) arr_11 [i_2] [i_0 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_36 [i_0] [i_2] [i_3] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 - 1] [i_0 + 1]))));
                        arr_37 [i_10] [(short)9] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_41 [i_0] [(_Bool)0] = (unsigned short)5698;
                        var_22 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_42 [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)5712);
                        arr_43 [i_0] [i_2] [i_3] [(unsigned short)3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) var_9)));
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) ((-1922262119) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_11])))))));
                    }
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(arr_40 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2] [(_Bool)1] [i_0 + 1]))))));
                }
            } 
        } 
        arr_44 [(short)5] [i_0 - 1] = ((((arr_38 [2U]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [6] [i_0]))))));
    }
}
