/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73562
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 3416878448U))) ? (((/* implicit */int) ((((/* implicit */_Bool) 878088852U)) || (((/* implicit */_Bool) (short)32755))))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_2])), (arr_4 [i_0] [2LL] [i_0] [i_0]))), (max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), ((unsigned short)16109)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_2 [i_3] [4U]))), (((((/* implicit */int) (short)-26)) % (((/* implicit */int) ((unsigned short) var_3)))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_3 - 2]);
                        var_17 = ((/* implicit */long long int) ((int) ((short) (~(4294967281U)))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2147483628)))) >= ((-(((arr_0 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))))));
                    }
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */unsigned short) var_13);
}
