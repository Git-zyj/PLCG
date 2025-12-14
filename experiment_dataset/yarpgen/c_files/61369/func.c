/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61369
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
    var_14 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
    var_15 = ((min(((~(4085665203138071630ULL))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) (unsigned short)29322))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)17010), (((/* implicit */unsigned short) ((signed char) var_12))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_3] [2U] [2U] [0ULL] &= ((/* implicit */unsigned short) min((((unsigned long long int) arr_7 [i_0])), ((~(((unsigned long long int) 1128848850U))))));
                        arr_11 [i_0] [i_1] [(short)15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)17010), (((/* implicit */unsigned short) (unsigned char)106))))) ? (((1404831521) | (((/* implicit */int) var_11)))) : (((((/* implicit */int) (unsigned short)4096)) | (((/* implicit */int) (short)1024))))))) ? (((/* implicit */int) (unsigned short)48526)) : (((/* implicit */int) (signed char)-43))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) ((arr_2 [(unsigned char)1] [i_1] [i_0]) ^ (var_10)))))));
                            var_16 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) var_0)), ((unsigned short)17415))));
                            var_17 = ((/* implicit */unsigned int) min((((arr_6 [i_0] [i_0]) & (((/* implicit */unsigned long long int) (~(1073610752)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) (signed char)79))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))))));
                            arr_17 [6ULL] [i_1] [i_0] [i_3 - 1] [i_4] = ((/* implicit */signed char) var_7);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-79))));
                            var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3 + 1] [4LL])) | (((/* implicit */int) arr_18 [i_3 + 2] [i_3 + 2] [i_3 + 2] [(short)8])))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_12 [i_6 - 3] [i_6 - 3] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_6 - 3] [i_0] [i_6 - 3] [i_6] [i_2 + 3])) : (((/* implicit */int) arr_15 [i_6 - 3] [i_0] [i_6 - 3] [i_6 - 3] [i_2 + 3]))))));
                        var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [14U]);
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 562949684985856ULL))));
                        var_23 = ((/* implicit */signed char) ((arr_7 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48540)) || (((/* implicit */_Bool) 1675428559U))))))));
                    }
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((var_10) <= (((/* implicit */int) var_13)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (var_0))))) > (var_3)))) : (((/* implicit */int) var_0))));
    var_26 = min((((/* implicit */int) (_Bool)0)), (-1404831523));
}
