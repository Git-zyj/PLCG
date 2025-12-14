/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59766
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_3] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((int) ((signed char) arr_2 [i_0]))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((((/* implicit */int) arr_3 [i_2])) << (((((/* implicit */int) var_2)) - (7260))))))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((int) arr_7 [i_0] [8U] [i_0] [i_0] [i_0] [i_0]))), (((unsigned int) var_12)))), (((/* implicit */unsigned int) (short)-23319)))))));
                        }
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) 9783719031102799403ULL)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_4 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) var_16);
}
