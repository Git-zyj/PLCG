/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82133
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)33674)) ? (var_0) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3)));
                var_11 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_4] [i_4] [i_3] [i_2]))))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_12 [i_2] [i_2] [i_3 + 1]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_6))));
                    arr_20 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_6 [i_2] [i_2])))));
                    var_14 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_6 [i_4] [i_4])), (((unsigned long long int) arr_3 [i_2])))), (16148781131806467919ULL)));
                    arr_21 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_3 - 1] [i_2])), (max((((/* implicit */unsigned short) var_8)), (arr_2 [i_2] [i_3] [i_4])))))), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)44)), (var_8)))) ? (arr_13 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_0 [i_3 - 2]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_6)) : (max((-1640601771), (((/* implicit */int) (unsigned short)25766)))))), (((/* implicit */int) ((-2472859911268530511LL) >= (((/* implicit */long long int) ((/* implicit */int) ((var_0) != (((/* implicit */int) var_7)))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((var_0), ((+(((/* implicit */int) var_8))))))) >= (var_3)));
}
