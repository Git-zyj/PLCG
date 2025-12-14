/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5843
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
    var_14 -= (~(((unsigned long long int) (_Bool)1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (~(((long long int) (short)-2737))));
                arr_7 [i_1] = ((/* implicit */short) ((unsigned int) 0ULL));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((((/* implicit */_Bool) -164702335)) ? (18446744073709551613ULL) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [i_4] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (min((arr_9 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3] [i_4])))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_4]) : (arr_9 [i_2])))));
                    arr_19 [(unsigned char)7] [i_3] [i_3] = ((/* implicit */short) 2017973747);
                }
            } 
        } 
    } 
}
