/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76585
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (min((min((var_2), (var_0))), (var_4))));
                arr_7 [i_1] = ((/* implicit */unsigned char) -1147768537039283903LL);
                arr_8 [i_1] = ((/* implicit */int) 2549619243481828663ULL);
            }
        } 
    } 
    var_19 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((1147768537039283902LL) | (1147768537039283902LL))), (((/* implicit */long long int) -2092266052))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-1147768537039283893LL) : (((/* implicit */long long int) var_11))))), (((((/* implicit */unsigned long long int) var_8)) + (var_0)))))));
    var_20 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_7)), (var_14))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15532190043302522494ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))))) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (var_13))))));
    var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -1147768537039283903LL))))));
}
