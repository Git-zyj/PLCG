/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69196
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) var_13)), ((~(((((/* implicit */int) var_3)) * (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_11)));
                            arr_13 [i_2] [i_0] [i_0] [2] = ((/* implicit */long long int) min(((-(arr_3 [i_0]))), (((/* implicit */int) (unsigned short)1706))));
                            arr_14 [0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) var_3));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((unsigned short) ((short) min((((/* implicit */long long int) var_4)), (-7947547975311748281LL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_6);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) | (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)19502))) >> (((-310760872) + (310760875)))));
}
