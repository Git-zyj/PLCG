/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80196
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)202)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)155)), (((((/* implicit */int) ((_Bool) (unsigned char)3))) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)32504)) : (((/* implicit */int) (unsigned char)202))))))));
                var_17 = ((((/* implicit */_Bool) (short)-11188)) || (((/* implicit */_Bool) 0U)));
                arr_8 [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned char)212)), (9352984879970990022ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                arr_9 [i_0] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) > (9352984879970990022ULL)))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)45044))));
                    var_19 = ((/* implicit */unsigned long long int) arr_6 [i_1 + 3] [i_1 + 3] [i_0]);
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1 + 2] [i_1] [i_1 + 1])) * (((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_1 + 2]))))) ? (((((/* implicit */_Bool) (unsigned short)20462)) ? (((/* implicit */int) var_12)) : (2146959360))) : (((((/* implicit */_Bool) (unsigned short)20462)) ? (((/* implicit */int) (unsigned char)253)) : (-995690235)))));
                    var_20 = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) arr_0 [i_2 - 2]))), (var_11)));
                }
            }
        } 
    } 
}
