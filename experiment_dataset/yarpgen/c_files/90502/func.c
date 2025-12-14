/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90502
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(short)10] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64314)))))) ? (((/* implicit */int) max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-111)) != (((/* implicit */int) (unsigned short)64294))))), ((unsigned short)1233))))));
                arr_6 [(signed char)9] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned short)1242), (((/* implicit */unsigned short) (_Bool)1))))), ((~(((/* implicit */int) arr_3 [i_0] [i_0] [12LL]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (signed char)49);
                            var_12 -= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned int) var_0);
    var_14 = ((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1222))), (((/* implicit */unsigned short) (_Bool)1))));
}
