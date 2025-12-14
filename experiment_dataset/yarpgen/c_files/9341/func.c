/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9341
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_9))));
    var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-19218)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (9459567295498283523ULL)))))))));
    var_12 += ((/* implicit */unsigned int) (short)122);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (unsigned char)126))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)122)) ? (10476898324285425070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 2] [2ULL] [i_2]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) * (7969845749424126550ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))))))));
                }
            } 
        } 
    } 
    var_14 = min((((/* implicit */unsigned long long int) var_1)), (max((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))));
}
