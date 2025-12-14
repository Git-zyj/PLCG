/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60775
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
    var_18 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_1 - 1] [i_2] = ((arr_7 [i_0] [i_1 + 1] [i_2] [i_2]) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_17)) >= (var_16))))) : ((-(((/* implicit */int) arr_3 [i_1 + 1])))));
                    var_19 = ((/* implicit */unsigned long long int) var_14);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (7957564949453034979ULL)));
                                var_21 -= ((((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */_Bool) arr_14 [5LL] [(signed char)8] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4078247069U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [(_Bool)1] [i_1 - 1])))));
                                arr_15 [(unsigned short)3] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */short) ((signed char) (signed char)17));
                                var_22 = ((/* implicit */unsigned int) var_6);
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (signed char)-5))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 4; i_5 < 13; i_5 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned short) (unsigned char)11);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_2] [i_1] [11ULL] = ((/* implicit */long long int) (((~(((/* implicit */int) (short)-7240)))) % (((/* implicit */int) (_Bool)1))));
                            arr_22 [i_0] [i_5] = ((/* implicit */_Bool) ((unsigned short) var_10));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 9223372036854775789LL)) : (var_16))))));
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_5] [i_5 - 4] [i_2] [i_5] [2U] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_17 [i_1 - 1]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(var_5))))));
                            arr_27 [i_0 + 1] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((arr_20 [i_0 + 1] [i_1 - 1] [i_2] [i_5 - 1] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_5] [i_2] [i_2] [i_1] [i_0] [i_0])))));
                            arr_28 [i_2] [i_2] [(unsigned char)0] [i_7 - 4] &= ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (11U)));
}
