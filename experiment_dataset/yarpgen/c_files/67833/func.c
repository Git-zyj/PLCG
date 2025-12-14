/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67833
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
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12796), ((unsigned short)12796))))) : (var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned char)3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_6 [i_2] [i_2 - 1] [i_2 - 2] [(unsigned char)9]))) + (((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_17)))) * (((/* implicit */int) arr_2 [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)12793))))) ^ ((+(2080374784U))));
                                arr_16 [(_Bool)1] [i_3] [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((1116892707587883008LL) << (((var_13) - (265076849U))))), (((long long int) arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [(unsigned short)3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)12796))));
}
