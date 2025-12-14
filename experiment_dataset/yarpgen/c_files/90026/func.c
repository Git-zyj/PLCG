/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90026
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)43483), (((/* implicit */unsigned short) (unsigned char)147))))) ? (((((/* implicit */int) var_11)) & (var_9))) : (((((/* implicit */int) (unsigned short)43483)) / (-762147718)))))) <= (((((/* implicit */_Bool) -921016837)) ? (((/* implicit */long long int) 1461411774U)) : (max((((/* implicit */long long int) var_11)), (var_1)))))));
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 *= ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 921016836)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18249865898084625897ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22052))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) -921016837)) ? (((/* implicit */int) (short)31449)) : (((/* implicit */int) (unsigned char)0)))))) : ((~(((/* implicit */int) var_6))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-99)) / (((/* implicit */int) (unsigned char)109))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned short)27656)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) | (66977792U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_4 [i_2] [i_3]))) ? (((((/* implicit */_Bool) (unsigned short)43468)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)99)))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)105))))));
                }
            } 
        } 
    }
}
