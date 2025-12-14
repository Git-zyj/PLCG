/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73641
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)10)) == (((/* implicit */int) (unsigned char)248))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1152920954851033088ULL)) ? (2071982649U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1])))))));
                                arr_13 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) * (((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-32)))))), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    arr_14 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_1])))), ((+(((/* implicit */int) (signed char)-32))))));
                    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((short)-31505), (((/* implicit */short) (_Bool)0)))))));
                }
            } 
        } 
    } 
}
