/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96632
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
    var_13 = ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))) | (var_2))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19662)) & (var_4)))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_14 = ((((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)183))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) (!(((((((/* implicit */int) arr_0 [(signed char)16] [i_1])) | (((/* implicit */int) arr_0 [i_0] [i_2])))) >= (((/* implicit */int) (short)23989))))));
                }
                var_15 = ((/* implicit */int) arr_2 [i_1]);
                var_16 = ((/* implicit */_Bool) max((min((var_7), (max((var_7), (((/* implicit */unsigned int) arr_2 [i_1])))))), ((-(max((var_1), (((/* implicit */unsigned int) arr_2 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) min((max((3460604925U), (((/* implicit */unsigned int) (signed char)107)))), (((/* implicit */unsigned int) (unsigned short)45873))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))));
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_4] [i_0] [i_1 + 1] [i_0]))))))))));
                            arr_14 [(unsigned short)17] [i_1] [i_3] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)195)), (((-1260141151) | (((/* implicit */int) (unsigned short)20632))))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) (short)29106)));
                        }
                    } 
                } 
                arr_15 [(unsigned short)9] [i_1] = ((/* implicit */signed char) ((unsigned short) (short)28359));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -1016209016)) : (var_0))) > (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3101633777U)))))))));
}
