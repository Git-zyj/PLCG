/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67977
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = (+(-7646990687874831254LL));
        arr_4 [(unsigned short)3] = ((/* implicit */unsigned short) ((int) var_8));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1 + 2] = ((/* implicit */unsigned short) 2476850694712811683ULL);
        arr_8 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45068))) | (arr_6 [i_1])))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) 2476850694712811696ULL);
        arr_12 [i_2 - 2] [i_2 - 1] = ((/* implicit */int) arr_9 [i_2 + 2]);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_23 [i_4] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) - (arr_19 [i_3] [i_3] [i_6 + 2])));
                        arr_24 [i_6] [i_6] [i_6] = ((/* implicit */int) ((unsigned int) ((_Bool) var_6)));
                        arr_25 [i_3] [i_3] = ((/* implicit */long long int) (-(((2476850694712811686ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_26 [i_3] [i_3] [i_4 - 1] [i_5] [i_6 - 1] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_21 [i_5] [i_4] [i_3])) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 2]))));
                    }
                    arr_27 [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_3] [i_4] [i_5 - 2]))));
                }
            } 
        } 
        arr_28 [i_3] = ((/* implicit */short) (-(arr_13 [(signed char)16])));
    }
    var_14 = min((((/* implicit */long long int) ((unsigned int) ((unsigned short) var_9)))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((((/* implicit */_Bool) var_9)) ? (-7646990687874831254LL) : (((/* implicit */long long int) var_3)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min(((short)-1), (((/* implicit */short) var_9)))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
