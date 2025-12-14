/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5968
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
    var_11 = ((/* implicit */signed char) var_0);
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((short) -3221967626775211076LL)))));
                var_14 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)59)) - (((((/* implicit */int) var_2)) - (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_2 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) arr_9 [i_3] [i_2])) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) arr_12 [i_2] [i_2])))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_10 [i_3])))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_5] [i_4] [(signed char)6] [(signed char)10] [i_2] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_2 [i_4])))));
                            arr_20 [i_5] [3U] = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) arr_12 [1LL] [i_3])))) / (((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) (short)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
