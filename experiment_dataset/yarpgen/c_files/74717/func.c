/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74717
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
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 2] = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)168)), ((unsigned short)39522)));
                var_15 = ((/* implicit */int) var_2);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 933147046U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (8411774784553093586LL)));
                            arr_12 [i_0 + 1] [i_2] [i_2 - 1] [i_3] = ((/* implicit */signed char) max(((_Bool)1), (((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_1 - 2] [(unsigned char)12]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
