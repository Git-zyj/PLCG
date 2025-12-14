/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84645
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
    var_18 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_1 [i_1 + 2])), (13504682128624392550ULL))), (((/* implicit */unsigned long long int) (-(var_9))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)47677))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17858))) / (min((((/* implicit */long long int) (unsigned char)50)), (-7973036317017168771LL))))) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_2 [i_1] [i_1 + 1] [i_1 + 1])) + ((+(arr_6 [i_0] [i_3] [i_3] [i_3]))))), (((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_7))))))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) -7973036317017168760LL);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
}
