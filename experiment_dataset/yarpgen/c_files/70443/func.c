/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70443
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) var_3)), (1465398799))))) + (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
                var_12 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)4))))) != ((~(var_7))))) ? (((/* implicit */int) ((unsigned short) (-(15707168596433140240ULL))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((15707168596433140240ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)4)) >= (973232480)))))))));
                arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == ((+(var_9)))))), (var_4)));
                var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [(unsigned char)12] [i_1] [(unsigned char)12])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_14 = ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 3386446182U)) ? (1023) : (((/* implicit */int) (unsigned char)165)))))) + (((/* implicit */int) var_10)));
    var_15 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)159)) + (((/* implicit */int) (signed char)98))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
}
