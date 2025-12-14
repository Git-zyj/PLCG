/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83859
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) 3ULL);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [(unsigned char)15] [i_1] [i_2] [i_3 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (signed char)-1)) : (arr_8 [i_3] [i_2] [i_2] [i_1] [i_0])))))) || (((/* implicit */_Bool) ((arr_4 [i_0] [(unsigned char)15] [i_0]) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_3 + 1] [i_2])))))));
                            arr_11 [i_0] [i_0] [i_0] [8] = ((/* implicit */long long int) max(((_Bool)1), (((_Bool) 18446744073709551613ULL))));
                        }
                    } 
                } 
                var_11 *= (-(3ULL));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 = (unsigned char)0;
}
