/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61617
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_13)))))) % (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (var_7)))), ((+(((/* implicit */int) (signed char)13))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [(unsigned short)14]) : (381286953U))) == (var_2))))) >= ((((-(var_12))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7276)))))))));
                var_18 |= ((/* implicit */int) ((unsigned int) 3201567143U));
                var_19 += ((/* implicit */short) ((((/* implicit */int) (short)-12307)) > (((/* implicit */int) ((unsigned short) 4283381917U)))));
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) (unsigned char)59);
    var_21 = ((/* implicit */short) (unsigned short)46791);
    var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50583)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14953))) : (65535ULL)));
}
