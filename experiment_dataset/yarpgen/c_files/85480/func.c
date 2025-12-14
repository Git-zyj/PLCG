/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85480
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
    var_20 = ((((/* implicit */_Bool) var_8)) ? (913924150) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (unsigned short)42360);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            arr_12 [i_0] = ((/* implicit */signed char) var_7);
                            var_22 = ((/* implicit */signed char) var_5);
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [(short)21] [(unsigned short)11] [i_3] [i_3 - 1] [i_3] [(unsigned short)11])) ? (((/* implicit */int) arr_11 [(unsigned short)2] [(short)1] [i_3] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3] [(signed char)0] [i_3 - 1] [i_3 + 1] [i_3] [i_3]))));
                            var_24 -= ((/* implicit */short) arr_7 [i_1]);
                            arr_16 [(_Bool)1] [i_3] [(_Bool)1] [i_0 + 1] = ((/* implicit */short) (unsigned short)42363);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 4] [i_1] [i_3 + 1])) * (((((/* implicit */_Bool) (unsigned short)23146)) ? (((/* implicit */int) arr_8 [i_5] [i_1])) : (((/* implicit */int) (short)6320))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0 + 3] [i_1] [8LL] [(unsigned char)21] [i_3] [i_0 + 3] = ((/* implicit */int) var_18);
                            var_26 = ((/* implicit */short) ((signed char) (short)6320));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */int) (unsigned short)0);
                            var_28 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_8 [i_0 + 4] [i_3])))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)23179))))));
                            var_29 -= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)-6320))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((((-913924139) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_3 + 1] [i_7])) + (142))))) : (((/* implicit */int) var_14))));
                        }
                        for (int i_8 = 4; i_8 < 21; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */signed char) (short)17215);
                            var_32 = ((/* implicit */unsigned short) arr_23 [i_1] [i_3] [i_8 + 2]);
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned short) (short)32760);
        arr_26 [(unsigned char)17] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)-17214)) : (((/* implicit */int) arr_14 [i_0 + 4] [i_0] [(signed char)5] [i_0] [i_0] [9ULL])))));
    }
    for (short i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_6))));
        var_34 = ((/* implicit */short) ((unsigned char) (unsigned char)156));
        var_35 = ((/* implicit */short) var_15);
    }
}
