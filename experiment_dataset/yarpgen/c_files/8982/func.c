/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8982
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
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (short)-25487)) ? (((/* implicit */int) (short)25511)) : (((/* implicit */int) (short)25508)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)585))) >= (-3370857441375594097LL))))));
                            arr_11 [i_1] [i_1] [i_2] [i_2] = (short)-580;
                            arr_12 [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)25487)) ? (((/* implicit */int) (short)25486)) : (((/* implicit */int) (signed char)18))));
                            arr_18 [i_5] [i_1] [i_4 + 1] [i_5] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [(_Bool)0]))))), (((((/* implicit */int) ((signed char) (short)-25510))) / (((/* implicit */int) ((unsigned short) arr_6 [9LL] [i_1 - 1] [i_4] [i_4])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3370857441375594100LL)) ? (((/* implicit */int) (short)25511)) : (var_3)));
}
