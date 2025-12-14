/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63851
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_8)), (((2626806574U) * (2626806595U)))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_16) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_12)))))) * (var_9))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) -1336550611189930893LL);
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_0 [i_2] [i_0])))))), ((((+(var_19))) * (arr_1 [i_1])))));
                    arr_8 [i_0] [i_0] [i_0] = max((min((((/* implicit */unsigned long long int) (~(arr_5 [i_1])))), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)222), (((/* implicit */unsigned char) (signed char)-71))))) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 4])) << (((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((1668160704U), (((/* implicit */unsigned int) (signed char)-42))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_2 - 4])))));
                }
            } 
        } 
    } 
}
