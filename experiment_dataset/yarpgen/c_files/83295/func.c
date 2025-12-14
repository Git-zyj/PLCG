/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83295
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [8ULL] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-20919)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)36933)))))))));
                var_12 = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) 3193163628003131174LL)) ? (5790915412653982271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47342))))) == (2636995347628880111ULL))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_8))));
                            arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -233749031)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13131)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((unsigned short) var_1));
}
