/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73343
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
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) var_11)), (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned char) ((signed char) (signed char)-125))))));
                    var_22 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    arr_11 [14] [14] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1])))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_3]) & (((/* implicit */int) (unsigned short)19723))))) ? (((arr_8 [4ULL] [i_0] [i_1] [i_3]) & (((/* implicit */long long int) arr_2 [i_0])))) : (((arr_8 [i_0] [i_1] [i_1] [i_3]) & (((/* implicit */long long int) var_18))))));
                }
                var_24 = ((/* implicit */unsigned short) min((((var_5) & (((/* implicit */unsigned int) ((int) 6893967861875628642ULL))))), (((/* implicit */unsigned int) (signed char)-1))));
                var_25 = ((/* implicit */signed char) (+(11552776211833922974ULL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_15 [(signed char)2] [i_1] [5U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 2147483647)))));
                    var_26 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_4]);
                }
            }
        } 
    } 
}
