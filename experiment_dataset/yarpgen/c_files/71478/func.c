/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71478
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
    var_15 -= ((/* implicit */_Bool) (+((-(((((/* implicit */int) (unsigned char)70)) - (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((7488085270956792653ULL), (((/* implicit */unsigned long long int) (signed char)96))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21504)) | (((/* implicit */int) (unsigned char)0))))) : (((long long int) arr_0 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)186));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(_Bool)1])))))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [17LL] [4ULL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))))) : ((+((~(var_7)))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */long long int) arr_7 [i_2])) - (-1251338138055947074LL))))))));
                            arr_14 [i_2] [i_1] [13ULL] [i_1] = ((/* implicit */long long int) arr_13 [i_1] [i_2] [i_0] [i_2] [i_1]);
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned long long int) ((unsigned char) (~((-(var_12))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_14))), ((-(var_14)))))) ? (((/* implicit */int) ((unsigned char) var_9))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
}
