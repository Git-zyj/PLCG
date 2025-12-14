/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64125
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) max(((short)-5765), ((short)-5765))))));
            arr_7 [i_1] [i_1] [(short)17] = ((/* implicit */short) ((signed char) (+(arr_3 [i_0]))));
            var_20 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)8)), (arr_4 [i_1]))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_2 [i_0]))))) & ((~(((/* implicit */int) (unsigned char)103))))));
            var_22 = ((/* implicit */unsigned short) arr_4 [i_0]);
            var_23 ^= ((/* implicit */unsigned int) min((max(((~(((/* implicit */int) arr_5 [i_2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44))))))), ((-(((/* implicit */int) max(((unsigned char)247), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_2])))))))));
            arr_12 [i_0] [i_0] [5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 458752)), (arr_3 [i_0]))))));
        }
    }
    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)7335)), (((((/* implicit */int) arr_13 [i_3 + 1])) + (((/* implicit */int) arr_13 [i_3 + 1]))))));
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            for (unsigned short i_5 = 4; i_5 < 19; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_23 [i_3] [i_3 - 1] [i_3 - 1] [6U] [6ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5]))))) ? (((((/* implicit */unsigned long long int) (~(3732445320U)))) | ((~(641817536420240630ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_20 [i_5 - 1] [i_3 - 1] [i_3] [i_3])), (max((((/* implicit */unsigned int) var_5)), (var_18))))))));
                        var_25 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] [(unsigned char)14] = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_1))))) == (arr_19 [i_7] [i_6] [i_5] [(short)13])))));
                            arr_27 [i_3 + 1] [i_5] [(short)8] [i_6] [i_7] &= ((/* implicit */unsigned long long int) arr_9 [i_3]);
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)1828))) / (var_8)))) ? ((~(var_4))) : (var_3)))));
    var_27 = ((/* implicit */_Bool) var_2);
    var_28 = ((/* implicit */unsigned int) (-(var_13)));
}
