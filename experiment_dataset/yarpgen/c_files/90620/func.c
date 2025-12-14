/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90620
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
    var_12 += ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) (-(((((/* implicit */int) var_11)) | (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                            arr_15 [i_0] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)84))));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((unsigned short) (-(((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3]))));
                            var_14 = ((/* implicit */unsigned short) (+(-3688518687672053047LL)));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_4)))))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) (unsigned short)52133)) * (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)149)))));
}
