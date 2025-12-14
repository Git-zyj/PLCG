/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67918
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)222), ((unsigned char)222)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((((((/* implicit */_Bool) (unsigned char)84)) && (((/* implicit */_Bool) (signed char)3)))) ? (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)33)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) (signed char)-13)) || (((/* implicit */_Bool) (unsigned char)244))))));
                                var_13 = ((/* implicit */short) (unsigned char)133);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned char)8), ((unsigned char)112)))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)112))))))));
}
