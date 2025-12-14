/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56793
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [8ULL] [8ULL] [i_0] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) 3293312819U)) ? (2944784088161767141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57125)) ? (((/* implicit */int) (unsigned short)27595)) : (((/* implicit */int) (unsigned short)37940))));
                    arr_9 [(unsigned short)5] [i_1] [i_2] = ((/* implicit */_Bool) ((-6350887322203885799LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37940)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))) >> (((/* implicit */int) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0])) % (((/* implicit */int) arr_0 [i_0]))))) : (((((-131193169023160621LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-26801)) + (26828))) - (27)))))))));
                                var_19 = ((/* implicit */long long int) min((max((10935554074096790055ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) ((short) arr_2 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */short) arr_16 [i_5]);
        arr_18 [i_5] = ((/* implicit */unsigned int) arr_15 [i_5]);
    }
    var_20 = ((/* implicit */long long int) ((unsigned short) (unsigned short)27597));
}
