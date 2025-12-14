/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67705
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 962811278U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24032)) ? (((/* implicit */int) (short)-4939)) : (((/* implicit */int) (signed char)-84))))) : (2304717109306851328ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)29259))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? ((~(var_17))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)4938))))) : (var_15))) : (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-4941))))) * (max((((/* implicit */long long int) var_6)), (arr_9 [16LL])))))));
                        var_20 = ((/* implicit */long long int) ((unsigned int) var_13));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */int) ((((((/* implicit */int) var_9)) != (((-1098938663) ^ (((/* implicit */int) (unsigned short)28199)))))) && (((/* implicit */_Bool) min((4245638267U), (((/* implicit */unsigned int) (short)4939)))))));
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40859)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((((/* implicit */_Bool) var_1)) ? (4ULL) : (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13020)))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (unsigned short)24680))));
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((unsigned long long int) var_12))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_5))));
}
