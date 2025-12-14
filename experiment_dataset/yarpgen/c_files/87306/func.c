/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87306
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
    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 14135364159856131163ULL)) ? (((/* implicit */long long int) (-(var_13)))) : (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) var_13))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) == (((((/* implicit */_Bool) ((var_1) << (((7586581490094465709LL) - (7586581490094465707LL)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [4U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1] [i_1 + 2]))))) ? (max((max((var_11), (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_7)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 3]))) / (-7586581490094465709LL)))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (max((((/* implicit */long long int) var_8)), (-6502682921007682543LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)7680)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-11894))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (2147483647)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_7)) : (var_11)))))));
                var_18 = ((/* implicit */short) var_7);
                var_19 *= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155)))))) % (var_1))));
                                var_21 = ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) arr_11 [i_3 - 2] [i_3 + 1] [i_3 - 2]))))) ? (((((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 2] [i_3 + 1])) >> (((var_2) + (1414564178))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)34))))));
                                arr_22 [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_19 [i_3 - 2] [i_3] [i_3 + 1] [11]))))));
                                var_22 = ((/* implicit */long long int) max((var_22), ((~(((long long int) arr_15 [i_2]))))));
                            }
                        } 
                    } 
                    arr_23 [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3 - 2])) <= (((/* implicit */int) ((_Bool) var_14)))));
                }
            } 
        } 
    } 
}
