/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79149
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (max((18446744073709551603ULL), (((/* implicit */unsigned long long int) (signed char)20)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : ((+(arr_1 [i_0 + 1])))))));
        var_19 = ((/* implicit */unsigned long long int) (~(4056005169U)));
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */long long int) 4125912371U)) != (3444170332576969774LL))))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != ((+(4125912371U))))))));
    }
    var_22 = ((/* implicit */_Bool) (unsigned short)65535);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)166))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4125912371U))))), (((/* implicit */unsigned int) (signed char)103)))))));
    /* LoopNest 3 */
    for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        for (unsigned char i_2 = 4; i_2 < 10; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? ((+(5740845904509608842ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                    arr_11 [i_1] [i_1] [7ULL] = ((/* implicit */signed char) 238962127U);
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)19145)))) * (((/* implicit */int) (unsigned char)0))));
}
