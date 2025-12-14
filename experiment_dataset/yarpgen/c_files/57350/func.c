/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57350
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)19] [i_2] [(signed char)19] = ((((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_1] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_1] [(signed char)5])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned short)17] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 5153447199519897623ULL))));
                                arr_16 [i_0] [i_0] [i_2] [3ULL] [0] = ((/* implicit */short) (_Bool)1);
                                arr_17 [i_2] = ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15458)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [(short)10] = ((/* implicit */short) (+(268431360)));
        arr_19 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [(short)3] [(short)16] [i_0 + 2] [i_0] [i_0 + 2]))));
        var_13 = arr_14 [(short)16] [(short)16] [(short)0] [i_0] [i_0];
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (-415673743)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)113)))) : (var_6)))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) 415673742))))))))));
}
