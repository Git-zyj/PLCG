/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98279
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 1189860625U))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (721315102463729378ULL))) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (721315102463729382ULL))))) : (((/* implicit */unsigned long long int) -1010329943))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (_Bool)0))), (((((/* implicit */_Bool) -1010329943)) ? (-3977816415098610186LL) : (((/* implicit */long long int) 1189860605U))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) -1010329943)) == (1189860625U))) ? (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned long long int) 1189860612U)) : (721315102463729382ULL))) : ((+(721315102463729383ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((int) (-(var_13))))) ? (((/* implicit */int) max((var_2), (((((/* implicit */int) (signed char)-65)) <= (var_13)))))) : (((/* implicit */int) var_2)));
}
