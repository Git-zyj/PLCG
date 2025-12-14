/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64601
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) var_5);
                    var_13 *= ((/* implicit */signed char) ((short) (unsigned short)49004));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_20 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4] = ((short) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_8 [i_6]))))));
                                var_14 = ((signed char) ((((/* implicit */_Bool) arr_17 [(signed char)2] [i_7] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_10 [(short)4] [i_4 - 2] [(short)4]))));
                                arr_21 [i_3] [i_4] [(signed char)2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2] [i_4 - 2])) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) 0U))));
                            }
                        } 
                    } 
                    arr_22 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) ((_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != ((~(3404969629U))))))));
}
