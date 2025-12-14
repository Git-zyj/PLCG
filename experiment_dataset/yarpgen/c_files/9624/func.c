/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9624
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25409))) : (9999244627604426812ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((var_3) / (var_9))) : ((~(var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2939189669U)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)65521))))) ? (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_1))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) > (5869503154743764625LL)))) : (((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) var_16)))) : ((+(((/* implicit */int) var_8))))))));
                            arr_8 [(signed char)18] [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_12);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_19))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+((-((-(var_19))))))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_4)) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_2))))) ? ((-(var_9))) : (((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) ? ((+(var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)133)))))) ^ (((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) -4671899316802257198LL)) : (0ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_18)))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            {
                arr_15 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_10)))))) % (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_19)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_14))) : (var_3))))));
                arr_16 [i_5] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13))))));
            }
        } 
    } 
}
