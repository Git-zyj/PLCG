/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98954
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
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-2147483647 - 1)))))));
        arr_2 [i_0] = ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)-1)));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((short) (unsigned short)40500)))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 946154473))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(0U)))))))) : ((((~(var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) ((-946154474) < (946154473)))))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)16320))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-3001116631803740831LL)))) : (((((/* implicit */unsigned long long int) 0U)) * (5077892521171086230ULL)))));
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))) : (13368851552538465387ULL))))));
    }
    var_18 = ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13368851552538465377ULL)) ? (3169618239U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41226))))))))));
}
