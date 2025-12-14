/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92444
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
    var_16 &= ((/* implicit */signed char) (unsigned char)226);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((~(((unsigned int) (unsigned char)226)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)115)), (((((/* implicit */_Bool) ((176388384U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))))) ? (arr_5 [i_0]) : (arr_14 [i_0] [i_1] [i_0] [i_3] [i_0])))));
                                arr_16 [i_2] [i_4] [i_2] [i_3] [i_4] [i_3] |= ((/* implicit */unsigned short) (unsigned char)30);
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_13 [i_3] [(signed char)18] [i_0] [0LL] [i_3 + 2] [i_3])) * (((/* implicit */int) (unsigned char)104)))));
                                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 5125303092529792028ULL))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 4] [i_2 - 3] [i_2 + 4])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))), (((((/* implicit */_Bool) 2514110956U)) ? (((/* implicit */int) (unsigned short)58677)) : (255)))));
                }
                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) (signed char)112)) & (((/* implicit */int) (signed char)-107))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((long long int) (signed char)117)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4958068251968093459ULL)) ? (1780856338U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))))))));
                arr_18 [i_0] [i_1] = ((/* implicit */_Bool) min((1505695659), (max((((arr_11 [i_1] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((6102513258479749256LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11025))))))))));
            }
        } 
    } 
}
