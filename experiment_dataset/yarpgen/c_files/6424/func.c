/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6424
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
    var_15 = ((/* implicit */unsigned short) (-(18191434417262333208ULL)));
    var_16 = var_12;
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | (max((((/* implicit */unsigned int) (unsigned char)6)), (2409673569U)))))) ? (max((min((((/* implicit */long long int) var_1)), (-5310638053984682625LL))), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) 1885293729U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_3 [i_0] [i_1])))))))), ((-((-(5465273048489739418ULL)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_11 [i_3] [i_4] [i_2] [i_2] [i_4]))))));
                                arr_14 [i_0] = ((/* implicit */unsigned long long int) max(((~(4714021628260065368LL))), (((((/* implicit */_Bool) var_14)) ? (arr_5 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25953)))))));
                                var_19 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) / (arr_11 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1])))));
                                var_20 -= ((/* implicit */unsigned char) arr_0 [i_2]);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) == (arr_2 [i_3 + 2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
