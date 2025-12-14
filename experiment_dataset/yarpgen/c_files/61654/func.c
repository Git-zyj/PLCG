/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61654
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((max((1723043933), (8191))), (8191))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_4)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) 3054156075U)) ? (-8191) : (((/* implicit */int) (unsigned short)7547)))) | (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
        arr_2 [i_0] = ((unsigned long long int) arr_0 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_14 [i_2] [i_5] [i_5] [i_5] [i_5 - 3] [i_5])))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_5 - 2] [i_5 - 1])), (var_6)))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) var_12)))))))))));
                            var_20 = ((/* implicit */_Bool) min(((~(((unsigned long long int) (signed char)-89)))), (((/* implicit */unsigned long long int) (_Bool)0))));
                        }
                        arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((+((+(((/* implicit */int) (unsigned short)23890))))))));
                        arr_19 [15ULL] [(signed char)12] [(unsigned char)4] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) -8191)))));
                        arr_20 [i_1] [i_1] [(signed char)7] [i_3] [i_4] = ((/* implicit */unsigned int) (-(min((1186193385), (((/* implicit */int) (unsigned char)252))))));
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */signed char) (unsigned short)65535);
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3))))));
    var_22 = ((/* implicit */unsigned char) var_10);
}
