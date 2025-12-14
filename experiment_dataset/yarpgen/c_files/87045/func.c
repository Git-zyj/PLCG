/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87045
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
    var_12 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */long long int) ((/* implicit */int) (short)12041))) & (var_1))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) >> (((((1172220575) >> (((((/* implicit */int) var_6)) - (132))))) - (17859))))))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned char)14), (((/* implicit */unsigned char) arr_2 [i_1] [i_1 + 2] [i_1 - 1]))))), ((~(((/* implicit */int) var_11)))))))));
                arr_6 [(unsigned char)6] [i_0] [i_1] = ((/* implicit */_Bool) 5158611514744164851ULL);
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_4);
                    arr_11 [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)822)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-12074), (((/* implicit */short) (unsigned char)18)))))) & (var_1))))));
                    arr_12 [11ULL] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)130);
                }
            }
        } 
    } 
}
