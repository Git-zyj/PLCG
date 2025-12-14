/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88412
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
    var_15 = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_13))))) - (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)251)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_1))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)4)))) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)251)) || (((/* implicit */_Bool) (signed char)88))))), (max((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)88)), ((unsigned char)255)))), (max((arr_8 [i_0] [i_0] [i_1] [(unsigned char)15]), (((/* implicit */short) (unsigned char)9))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5482027929591773407LL)) ? (arr_0 [24LL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)8), (var_8)))))));
                    var_19 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)58942))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_20 ^= (unsigned short)65535;
                            arr_15 [14LL] [i_0 - 2] [i_0 - 2] [i_0 - 2] [14LL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_9))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)15])) > (12307279550371425089ULL)))), (max(((unsigned short)10571), (((/* implicit */unsigned short) arr_7 [12]))))))) : (((/* implicit */int) var_3))));
                        }
                        arr_16 [i_0] [i_0] [1ULL] [i_1] [i_3 + 2] = ((/* implicit */long long int) min(((unsigned char)243), (((/* implicit */unsigned char) (signed char)-85))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6593))) > (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-91)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? (arr_14 [i_0] [i_2] [15ULL] [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3])))))));
                        arr_17 [i_1] [i_1] [i_2 + 1] [i_3] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_3)))) - (((/* implicit */int) var_11))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (var_2)))));
                    }
                }
            } 
        } 
    } 
}
