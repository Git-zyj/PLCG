/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72882
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
    var_15 &= ((unsigned int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (min((var_2), (-712938057)))));
                var_17 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)33472)), (min((((/* implicit */unsigned int) var_2)), (var_11)))));
                var_18 = ((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((712938058) | (712938044)))) * (min((((unsigned long long int) 11917854961241513478ULL)), (((/* implicit */unsigned long long int) var_9))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_20 -= ((/* implicit */unsigned short) ((268157845044818493ULL) * (((unsigned long long int) (short)32466))));
                        arr_19 [1U] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32466)) ? (((/* implicit */unsigned long long int) 495929781)) : (arr_0 [i_2] [i_3 - 1])));
                    }
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        arr_23 [i_3] [1LL] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) arr_20 [i_2] [i_2] [i_4] [i_6 - 1] [i_6])), (var_11)))));
                        var_21 += ((/* implicit */unsigned int) var_0);
                    }
                    var_22 = ((/* implicit */unsigned int) arr_21 [i_2] [i_4] [i_4] [i_4] [i_4] [i_2]);
                }
            } 
        } 
    } 
}
