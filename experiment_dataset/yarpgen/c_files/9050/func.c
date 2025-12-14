/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9050
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
    var_15 = (~((+(-7299290952070374801LL))));
    var_16 = var_13;
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned short)9902)) : (((/* implicit */int) (signed char)64))))) >= ((~((~(var_14)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-64)) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) arr_7 [i_2])))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? (var_3) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-29))))))))))));
                        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [14U] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_8 [i_1] [i_2])))));
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)119))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)44448)) ? (((/* implicit */unsigned long long int) arr_10 [13LL] [i_1] [11LL])) : (var_14))) >= (((unsigned long long int) arr_4 [i_0] [i_4]))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min(((-(arr_4 [i_0] [i_1]))), (((2147483392U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))))))))));
                }
            } 
        } 
    } 
}
