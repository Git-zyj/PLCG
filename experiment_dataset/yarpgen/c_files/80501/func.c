/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80501
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))));
                                arr_15 [3] [(unsigned short)3] [3] [3] [i_4] = ((/* implicit */_Bool) max((3859795664698683847ULL), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_13 [i_0] [i_1] [i_2] [(short)14] [i_0] [i_4]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 14586948409010867765ULL)))))))));
                            }
                        } 
                    } 
                    arr_16 [(_Bool)1] [(_Bool)1] [i_1] [i_1] = max((17010175142312047672ULL), (arr_9 [i_0] [i_1] [i_2] [i_1] [i_1]));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */short) var_10);
}
