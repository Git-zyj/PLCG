/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71285
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */short) ((arr_8 [i_0] [i_0]) << (((((long long int) ((((/* implicit */_Bool) 3907745886U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1] [(short)10] [(short)10]))) : (arr_8 [i_1] [i_2])))) - (5486LL)))));
                            var_14 = ((/* implicit */signed char) 4194303ULL);
                        }
                    } 
                } 
                arr_9 [(signed char)11] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) 18446744073705357313ULL));
                var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4194306ULL)) ? ((~(4194288ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)19))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(short)20] [i_1] [i_1])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4194294ULL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
                var_17 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
}
