/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67520
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) - (((/* implicit */int) ((-3) >= (((/* implicit */int) (signed char)34))))))), (((/* implicit */int) (signed char)-7)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((unsigned long long int) var_12)), ((~(var_13)))));
                                arr_14 [i_2] [i_4] [(_Bool)1] = ((/* implicit */int) ((_Bool) (short)7578));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((650910380), (-1901338454))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)114)) & (((/* implicit */int) (signed char)-123)))))) : (max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (signed char)116)) > (-566702379))))))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65527))))) ? (min((arr_16 [5ULL]), (((/* implicit */unsigned int) (signed char)-92)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                var_19 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
