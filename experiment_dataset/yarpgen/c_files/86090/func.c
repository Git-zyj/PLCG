/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86090
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
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((((/* implicit */int) ((signed char) var_14))) % ((~(((/* implicit */int) arr_2 [i_0])))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 + 3] [i_1 + 1]))))))))));
                var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)7));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)133))))) : (arr_3 [i_0] [i_1 + 4] [i_0]))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)1944)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)108))))) ? (max((10497238413772239294ULL), (1125899906842624ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 34711382)) != (0ULL))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_2 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)11169)))))) : ((((_Bool)1) ? (arr_9 [i_0] [i_1] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_21 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_3 - 2]);
                        }
                    } 
                } 
                arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_1 + 1] [i_1] [i_0] [i_1])))) && (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_0] [i_1])) && (((/* implicit */_Bool) var_2))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_11);
}
