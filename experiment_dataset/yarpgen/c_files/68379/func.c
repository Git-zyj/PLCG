/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68379
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (1566112547216960233LL) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_2);
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) var_9);
        arr_7 [i_0] [i_0] = ((/* implicit */short) (-(var_0)));
    }
    var_14 = ((/* implicit */short) ((signed char) ((unsigned char) (!(((/* implicit */_Bool) var_4))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)80))))))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_17 [(unsigned char)9] [(unsigned char)9] [i_3]))) != (((/* implicit */int) arr_8 [i_2]))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)37366)))) - (((long long int) (!(((/* implicit */_Bool) arr_12 [(short)14] [(_Bool)1])))))));
            }
        } 
    } 
}
