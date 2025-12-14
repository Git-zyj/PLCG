/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96808
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
    var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (-(var_2)))), (max((((/* implicit */unsigned long long int) -3401793606082909910LL)), (var_5))))), (((max((8986515070788076449ULL), (((/* implicit */unsigned long long int) (unsigned char)194)))) << (((var_7) - (7759000301888226755ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)123)))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)123)))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) (unsigned char)132);
    var_19 = ((/* implicit */unsigned char) var_7);
}
