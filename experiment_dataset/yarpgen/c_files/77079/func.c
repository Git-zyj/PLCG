/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77079
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((signed char) ((((((/* implicit */int) arr_1 [(_Bool)1] [i_1 - 2])) + (2147483647))) << (((((unsigned int) arr_4 [i_1])) - (57506U))))));
                var_16 -= ((/* implicit */short) ((((long long int) ((short) (unsigned short)0))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) arr_3 [i_1 - 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((short) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_2 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 - 2]))));
                            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((unsigned long long int) arr_0 [i_1 + 1] [i_1 - 2]))));
                            arr_13 [(short)8] [(short)8] [i_1] [(short)9] [(short)8] = ((/* implicit */_Bool) ((signed char) arr_8 [i_0] [7ULL] [i_0]));
                            arr_14 [i_0] [(short)13] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) ((unsigned int) arr_0 [(short)18] [i_3]))));
                            var_18 += ((/* implicit */short) (+(((long long int) ((unsigned int) arr_9 [i_0] [i_0] [(signed char)10] [i_2 + 1] [i_2] [i_3])))));
                        }
                    } 
                } 
                arr_15 [5ULL] [5ULL] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [15ULL]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) var_14))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_14))))))));
}
