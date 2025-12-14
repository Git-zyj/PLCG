/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88341
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */short) (+((+(max((var_2), (var_2)))))));
                var_12 |= ((/* implicit */unsigned char) max((max((3105846842U), (((/* implicit */unsigned int) (unsigned char)156)))), ((+(3105846842U)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_6 [i_2] = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned char)198)))), ((~(((/* implicit */int) var_3))))));
        arr_7 [i_2] [i_2] = ((/* implicit */signed char) max((max((3105846842U), (((/* implicit */unsigned int) (signed char)127)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)53688)))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_1)) ? (max((1189120453U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))));
                        var_13 -= ((/* implicit */signed char) max(((+(((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)67)), ((~(3105846835U))))))));
                        var_14 = max((((/* implicit */unsigned int) max(((short)13015), (((/* implicit */short) (signed char)-60))))), ((-(((((/* implicit */_Bool) -16992213583774194LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(-1238487000961158835LL)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)19591)))))), (((((/* implicit */_Bool) 630412692667232456LL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)103)), (var_1)))) : ((+(((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (-(1189120453U))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */int) max((max((var_9), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) var_0))))), ((+(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (signed char)6))))))));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((unsigned int) 3758631501U)) : (((/* implicit */unsigned int) (~((-2147483647 - 1)))))))));
    }
    var_19 = ((/* implicit */int) var_4);
}
