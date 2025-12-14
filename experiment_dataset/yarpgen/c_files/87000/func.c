/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87000
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
    var_15 &= ((/* implicit */long long int) ((_Bool) (-(264241152U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) ^ (max((1180025206013787287LL), (((/* implicit */long long int) arr_4 [i_1] [i_0 - 1]))))));
                    var_16 = arr_5 [i_0 - 1] [i_1] [11U] [i_0];
                }
                for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) max((-1180025206013787287LL), (((/* implicit */long long int) arr_1 [i_0 - 1])))))));
                    arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((unsigned char) var_0)))) / (((/* implicit */int) var_12))));
                    arr_13 [i_0 + 2] [i_1] [i_0] = ((/* implicit */long long int) 1011059829);
                }
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) min(((signed char)62), (((/* implicit */signed char) arr_2 [i_0 - 2] [i_0] [i_0]))))), (((long long int) arr_4 [i_0] [4LL])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_6))));
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_14)))));
    var_21 = ((unsigned char) var_7);
}
