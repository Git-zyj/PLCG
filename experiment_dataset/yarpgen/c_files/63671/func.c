/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63671
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_8), (var_8))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16482))))))))) % (((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) (-(var_0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (short)25109)))))) <= (max(((+(((/* implicit */int) (signed char)103)))), (var_0)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) (+((~((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-31))))))));
            arr_8 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)130))))))))));
        }
        var_12 = ((/* implicit */signed char) min((((int) var_9)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_2] [i_2]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) var_8);
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_21 [(unsigned char)19] [i_3] [i_3] [i_5] [i_5] = (signed char)88;
                            var_15 = ((/* implicit */short) ((unsigned short) arr_19 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2]));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_7] [i_2]) ? (((/* implicit */int) arr_9 [i_7] [i_2])) : (((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) (unsigned char)237)))) : ((~(((/* implicit */int) arr_22 [i_2]))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)8191))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_2] [i_7] [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_7] [i_2] [i_2] [i_2] [i_2]))))))) ? (((long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [(signed char)12] [(unsigned short)8] [i_2] [(unsigned short)8] [i_2]))) : (var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
        }
    }
}
