/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55352
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_11 = ((/* implicit */unsigned short) -6012467151018382352LL);
                                var_12 *= ((/* implicit */long long int) min((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (0U))))), (((short) arr_2 [i_4] [i_1] [i_1]))));
                                var_13 = ((/* implicit */long long int) max((3ULL), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)-4)), (-1163032359))) + (((/* implicit */int) arr_0 [i_3])))))));
                                arr_11 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (arr_8 [i_3] [i_1] [i_2] [4LL] [i_4] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) var_5))));
                            }
                            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) (unsigned short)18963);
                                var_15 = (short)-12689;
                                var_16 &= ((/* implicit */unsigned int) var_4);
                            }
                            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_8))))) >> (((((2097136U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))) - (8806U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17))))) : (((/* implicit */int) (signed char)-56))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [18ULL] [i_1] [i_1] [i_0] [i_0])) + (((/* implicit */int) (short)21))))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)23707))))) && ((!(((/* implicit */_Bool) (signed char)23))))))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_0 [(signed char)14]);
                arr_19 [i_7] [i_7 - 1] = max((((/* implicit */long long int) ((unsigned int) arr_9 [i_7] [i_7] [i_7 + 2] [i_7 + 3] [i_7] [i_7 + 2] [i_7]))), (min((arr_9 [16ULL] [i_7] [(unsigned char)10] [i_7 + 3] [i_7 + 3] [i_7] [i_7]), (arr_9 [i_6] [i_7] [i_7] [i_7 + 3] [i_6] [i_7] [(short)17]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(max((max((((/* implicit */long long int) (short)0)), (var_9))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (48515098U))))))));
}
