/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58747
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (-2500184857310528024LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-14232)))))));
                var_14 ^= ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_1 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9789)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34919)))))));
                            arr_11 [i_0] [i_3] [i_2] [i_0 - 1] [20U] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) && ((!(((/* implicit */_Bool) var_7))))));
                            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */short) var_4);
                            arr_13 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_1 + 2] [3U] [11U] [(_Bool)1] = var_11;
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_5) <= (((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
