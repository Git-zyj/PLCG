/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83300
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_9 [i_0] [(unsigned short)10] [i_3 + 1])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (var_4))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) != (arr_8 [(_Bool)0] [i_1 - 2] [(_Bool)0])))))));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_1 - 1] [i_3] [i_3 + 2]) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1] [10U] [(short)8])) << (((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) arr_18 [i_0] [i_5] [i_0] [i_5 + 1] [i_4] [i_6 + 4]);
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_14 [i_6] [i_1 - 2] [i_1] [i_0])))) << (((var_8) - (1950557557416667192LL))))))));
                            }
                        } 
                    } 
                } 
                var_15 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_1 - 1])));
                arr_22 [i_0] = ((/* implicit */long long int) (((~(16695316957287403962ULL))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((long long int) (((-(var_4))) - (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)127))));
                arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) ((int) (-(-2078052065986062922LL))));
            }
        } 
    } 
}
