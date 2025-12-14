/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78898
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
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) <= ((~(var_5)))));
    var_16 = ((unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned short)58907)))));
                            var_18 += ((/* implicit */unsigned long long int) var_1);
                            var_19 += ((/* implicit */int) ((unsigned char) ((unsigned short) (_Bool)1)));
                            arr_10 [i_1] = ((/* implicit */unsigned short) ((((min((18446744073709551606ULL), (1ULL))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)206)), (3493084765U)))))) <= (((/* implicit */unsigned long long int) (~(3493084765U))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65520)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1022806047)) ? (((/* implicit */unsigned long long int) var_12)) : (9ULL)))) ? (max((((/* implicit */long long int) 33554431U)), (-5062757377618251551LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (18446744073709551607ULL)))))))));
                arr_13 [i_1] = min((4177920LL), (var_9));
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-((~(arr_6 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 *= var_7;
}
