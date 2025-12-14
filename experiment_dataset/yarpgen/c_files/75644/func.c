/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75644
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5381306155763275649ULL)) ? (3105183130U) : (((/* implicit */unsigned int) ((/* implicit */int) ((-3705965428168449783LL) != (((/* implicit */long long int) ((/* implicit */int) (short)4088)))))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)4065)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_0 [i_1]))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_0])) ^ (arr_0 [i_0])))) ? ((+(arr_5 [i_2]))) : (((/* implicit */int) (short)4090))))) ? (((/* implicit */int) (short)-4084)) : (((/* implicit */int) ((arr_3 [i_0 + 1] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((arr_0 [i_0 + 4]) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) << (((arr_5 [i_1]) + (1403805076))))));
                    var_19 = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) (+(885417979U)))) != (arr_3 [i_0 + 1] [i_1]))));
                }
                arr_9 [i_0] = ((/* implicit */_Bool) min(((short)-4103), ((short)4085)));
            }
        } 
    } 
}
