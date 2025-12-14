/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6171
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
    var_10 = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned char)66)))), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */_Bool) -2083943352)) || (((/* implicit */_Bool) var_8)))))))));
    var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)236)))) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) ((unsigned int) var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_3 [i_3])))));
                        arr_9 [9ULL] [i_2] [(unsigned short)5] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned short) max((((long long int) (unsigned char)43)), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)9533)))))));
                    }
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (var_6)))) ? (var_5) : (((/* implicit */int) min(((unsigned char)167), (((/* implicit */unsigned char) (!((_Bool)1)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_13 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)89)) | (((/* implicit */int) arr_8 [i_4] [i_0] [i_0] [i_0])))))));
                        var_14 = ((/* implicit */_Bool) ((((long long int) 7340032)) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [(signed char)3])))));
                        arr_13 [i_2] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) ((unsigned int) arr_6 [i_0] [i_0] [i_2 - 1] [i_2 - 1]));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (unsigned char)76);
}
