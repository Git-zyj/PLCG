/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75425
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
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 1])));
                var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-5373)));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26407)) % (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned short) arr_5 [(short)7] [i_4]);
                                var_14 = ((/* implicit */unsigned int) max((var_14), (arr_7 [4] [4])));
                                arr_12 [i_0] [i_3] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) var_2))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) % (arr_6 [i_0 + 2] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3410915599U))))));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) (unsigned short)0))), ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (5017695750126102682LL) : (-5017695750126102661LL)));
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */int) ((unsigned char) var_5));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) var_6))));
}
