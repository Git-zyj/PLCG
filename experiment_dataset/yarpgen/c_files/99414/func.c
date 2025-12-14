/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99414
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
    var_12 = ((/* implicit */signed char) max((((min((var_1), (((/* implicit */unsigned int) var_11)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) var_0)))))))), (((926456338U) >> (((((3368510940U) | (759790756U))) - (3989798393U)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) ((unsigned char) ((unsigned short) -1)))));
        var_13 = ((/* implicit */unsigned int) (short)0);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((-57499698) + (57499726))))), (((/* implicit */int) ((unsigned short) 759790760U)))))) ? (((max(((_Bool)0), (var_6))) ? (var_1) : (((((/* implicit */_Bool) (unsigned char)8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20591))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) 288901237U))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-11)) && (((/* implicit */_Bool) 1073741823U)))))), (((((/* implicit */_Bool) ((3368510959U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_8), (arr_1 [i_0] [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((signed char) (~(arr_0 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) arr_7 [3ULL]);
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3535176533U)) || (((/* implicit */_Bool) (signed char)-49)))))));
            }
            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)-19713)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))));
            var_17 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) >= (((/* implicit */int) (short)30847))))) : (((((/* implicit */int) var_9)) ^ (arr_7 [9LL]))))) * (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) 1682585273))))));
            arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (~(var_10))))))) | (((/* implicit */int) ((((3535176533U) + (var_10))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
    }
}
