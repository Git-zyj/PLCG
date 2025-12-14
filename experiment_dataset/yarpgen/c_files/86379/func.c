/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86379
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
    var_10 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (var_0))), ((~(((/* implicit */int) (short)-1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                            var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-322447395), (((/* implicit */int) max(((unsigned short)15), (((/* implicit */unsigned short) (_Bool)1)))))))), (2576203232172293991ULL)));
                            arr_14 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) + (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)0)))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_3] [i_3])) ? (6765627721745804853ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))));
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */unsigned char) (short)32114);
            }
        } 
    } 
}
