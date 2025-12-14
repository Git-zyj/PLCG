/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61147
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((((unsigned long long int) arr_1 [i_1 + 1] [i_1 - 2])), (((/* implicit */unsigned long long int) ((((unsigned long long int) 198604595906029885ULL)) <= (((/* implicit */unsigned long long int) 6873368692952583117LL)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_12 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                            var_13 = var_2;
                            arr_8 [i_0] &= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1 - 3]);
                        }
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) (~(((int) -1182937060))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) (short)20392)), (arr_0 [i_1]))), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1])) <= (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((short) var_2));
}
