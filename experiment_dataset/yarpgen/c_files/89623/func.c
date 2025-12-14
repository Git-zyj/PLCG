/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89623
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_3] [i_0] [(signed char)13] [(signed char)13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
                            arr_14 [i_0] = (-(((/* implicit */int) arr_3 [i_0])));
                            arr_15 [5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_16 [i_0] [(short)6] [i_0] [i_3] [(short)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1866959720)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)25382))));
                        }
                        for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_1] = ((/* implicit */short) -1866959720);
                            arr_21 [i_0] [9] = ((/* implicit */unsigned long long int) ((short) arr_6 [(unsigned short)9] [(short)0] [i_0] [(unsigned short)9]));
                            arr_22 [i_0] [(unsigned short)13] [(_Bool)0] [(short)5] [i_0] [(short)5] [i_5] = ((/* implicit */short) (~((~(((/* implicit */int) var_2))))));
                            arr_23 [(short)2] [9LL] [i_2] [i_0] [i_1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3] [i_5 - 1]))))));
                        }
                        arr_24 [i_1] [i_1] |= ((/* implicit */short) (unsigned short)65535);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_6] [(short)12] [i_0] [i_6] [3ULL])) : (((((/* implicit */_Bool) var_7)) ? (-1866959720) : (((/* implicit */int) (unsigned char)144))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_3]))))) > (((/* implicit */int) arr_4 [i_0]))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        arr_32 [i_0] = ((/* implicit */int) var_9);
                        arr_33 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) ((short) var_2))))))));
                        arr_34 [i_0] = ((/* implicit */unsigned short) (unsigned char)215);
                    }
                    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((arr_25 [i_0] [(short)10] [i_0] [i_1] [i_2] [i_2] [i_0]) & (((/* implicit */unsigned int) arr_5 [i_0] [6LL] [i_1] [i_2]))))))) ? ((~(((/* implicit */int) (unsigned short)8)))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_15))))))));
                    arr_35 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)25365)) : (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_0] [(short)1]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : (var_7)))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */long long int) max(((unsigned short)22914), ((unsigned short)40171)));
    var_19 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10))))))));
}
