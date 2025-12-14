/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81710
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
    var_13 = ((unsigned char) max((((/* implicit */int) var_6)), (var_11)));
    var_14 |= ((/* implicit */unsigned char) (((((-(-1336893696858798248LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_3))))))) % (((/* implicit */long long int) -949045750))));
    var_15 = ((/* implicit */unsigned long long int) 949045749);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) arr_7 [i_2 + 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (unsigned short)27036);
                                var_17 = ((/* implicit */long long int) ((((_Bool) -2120448044)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_11 [i_2] [i_4])) ? (((/* implicit */int) (short)-9435)) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1]))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2695730362U), (((/* implicit */unsigned int) 949045749))))) ? (((unsigned int) -322514955)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_2 + 1] [0U] [5LL] [i_2 + 1]))))))))));
                                var_19 += (-(((/* implicit */int) (unsigned char)233)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) (short)-9435);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                var_21 += ((/* implicit */int) ((((/* implicit */long long int) 713689601)) >= (9223372036854775807LL)));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) (signed char)25))), (max((-1872865473669272193LL), (((/* implicit */long long int) arr_18 [i_5] [i_6] [i_5])))))))));
                arr_19 [i_5] [i_6] [i_6] = ((((/* implicit */int) (unsigned char)134)) << (((max(((+(var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)87))))))) - (4294967206U))));
            }
        } 
    } 
}
