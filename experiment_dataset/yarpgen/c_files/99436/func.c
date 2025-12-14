/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99436
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */int) arr_9 [i_1]);
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)115)), ((unsigned short)9676)));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (-1391877043) : (370235501)));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((((/* implicit */_Bool) arr_6 [i_0] [0U] [i_2 - 1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 + 3])))) ? (((((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned short)8] [i_2 + 4])) | (16959369221596244900ULL))) : (((/* implicit */unsigned long long int) ((((var_9) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7491))) == (1709294791720229430LL)))))))))));
                    var_21 = ((/* implicit */unsigned char) -370235502);
                    var_22 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                    var_23 = ((/* implicit */int) (+((-(((var_8) & (((/* implicit */long long int) arr_4 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - ((-(var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9))))));
}
