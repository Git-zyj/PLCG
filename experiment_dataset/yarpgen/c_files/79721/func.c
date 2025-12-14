/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79721
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
    var_13 = ((/* implicit */signed char) min(((unsigned short)36318), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        var_14 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned int) min((((((/* implicit */int) (short)-18671)) * (((/* implicit */int) (short)-28778)))), (((int) (!(((/* implicit */_Bool) 3771179389U)))))));
                        arr_12 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(3771179358U)));
                        var_16 ^= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */int) arr_6 [i_1] [i_1]);
    }
    var_17 = var_8;
    var_18 = ((/* implicit */int) ((var_4) == (((/* implicit */long long int) var_12))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)10))))) ? (735586510U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))));
}
