/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77421
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_0])))) % (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_1] [0ULL] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 + 3] [i_0 + 1]), (((/* implicit */short) var_11)))))));
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((arr_8 [i_0 - 1] [i_1]) - (arr_6 [0ULL] [i_1 - 2] [i_1] [i_1]))))) / (((/* implicit */unsigned long long int) ((int) (unsigned char)115))))))));
                var_16 = ((/* implicit */short) var_9);
                arr_13 [i_0] [i_1] = ((arr_8 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-27LL) > (6882999410378705894LL))))));
                var_17 -= ((/* implicit */int) ((_Bool) ((unsigned long long int) (signed char)74)));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) ((short) min(((-(var_7))), (var_3))));
    var_19 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((var_2) - (17218259541157028577ULL)))))), (((long long int) var_2)))));
}
