/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75663
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_7 [i_1] [i_0] [i_0] [i_1] = var_1;
                    arr_8 [i_1] [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 8866543733537037310ULL)) ? ((+(8866543733537037299ULL))) : (((/* implicit */unsigned long long int) 2147483647)))) << ((((~(1610612736))) + (1610612784)))));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_11 [i_1] = ((/* implicit */signed char) (((~(((unsigned int) var_0)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) == (((unsigned long long int) var_15)))))));
                    arr_12 [9ULL] [i_1] = ((/* implicit */long long int) var_17);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(max((((/* implicit */long long int) (-2147483647 - 1))), (((arr_5 [i_0] [i_0] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
                    var_21 = ((/* implicit */unsigned char) 8866543733537037297ULL);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)0)), (2825013761310729495ULL))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_4])) ? (12767109747831460597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) -1791782366240693702LL))));
                    }
                }
                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) (unsigned short)34993)), (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2]), (((/* implicit */unsigned long long int) var_12)))))) : (((min((16058605401184252916ULL), (((/* implicit */unsigned long long int) (unsigned char)171)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14912)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30518)) ? (379672031U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((-6074608424277434283LL) + (9223372036854775807LL))) >> (((1795087792900796206ULL) - (1795087792900796176ULL))))))));
    var_26 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_11))))));
    var_27 = ((/* implicit */unsigned short) var_1);
}
