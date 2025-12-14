/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/749
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
    var_11 ^= ((/* implicit */unsigned char) ((signed char) (signed char)46));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(max((137438953471ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) || (((/* implicit */_Bool) ((signed char) (unsigned short)25396)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min((min((((long long int) 18446743936270598144ULL)), (((/* implicit */long long int) arr_5 [i_2] [(unsigned char)10])))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_12 [14] [i_1] [(_Bool)1] [i_1] [i_1] [(short)1])))), (arr_0 [i_0 + 1]))))));
                                var_13 = ((unsigned long long int) (unsigned char)34);
                                arr_14 [i_2] [i_0 + 1] = ((/* implicit */short) ((unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [8ULL] [13U] [i_3] [i_4])), ((unsigned short)40139)))), ((~(((/* implicit */int) arr_3 [i_0 - 1])))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) arr_1 [i_2]))), (((signed char) arr_12 [(signed char)4] [(signed char)4] [i_2] [i_3] [i_4] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
